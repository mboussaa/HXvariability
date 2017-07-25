target=`grep -v ^# target_flags`
bench=`grep -v ^# benchExec`
for b in $bench
do
ts=$(echo $b | cut -f1 -d/)
nb=$(echo $b | cut -f2 -d/)
for (( i=1; i<=$nb; i++ ))
do
for line in $target
do
tab=loop_$ts[$i]
lang=$(echo $line | cut -f1 -d/)
opti=$(echo $line | cut -f2 -d/)
more_opti=$(echo $line | cut -f3 -d/)
if [ $more_opti = "dce=no" ]
then
more_opti="dceno"
fi
if [ $more_opti = "dce=full" ]
then
more_opti="dcefull"
fi
echo "line= "$line
echo "ts= "$ts
echo "i= "$i
echo "***************************************************************************************************"
echo curl -o /HXvariability/stats/statistics/memory/influxdb.json -GET 'http://10.0.0.1:8086/query?pretty=true' --data-urlencode "db=cadvisor" --data-urlencode "q=SELECT max(value) FROM memory_usage WHERE container_name='haxe$lang$opti$more_opti$ts$i'"

curl -o /HXvariability/stats/statistics/memory/influxdb.json -GET 'http://10.0.0.1:8086/query?pretty=true' --data-urlencode "db=cadvisor" --data-urlencode "q=SELECT max(value) FROM memory_usage WHERE container_name='haxe$lang$opti$more_opti$ts$i'"
python3 parse.py > stats/statistics/memory/memory
cat /HXvariability/stats/statistics/memory/memory >> /HXvariability/stats/statistics/memory/memory_"$ts"_"$i".csv
done
done
done
