bench=`grep -v ^# benchExec`
#declare -A bench=(["utest"]="2")
for b in $bench
do
ts=$(echo $b | cut -f1 -d/)
nb=$(echo $b | cut -f2 -d/)
STR=""
for (( i=1; i<=$nb; i++ ))
do
    STR=$STR"/HXvariability/stats/statistics/time_"$ts"_"$i".csv "
done
paste -d ';' $STR > /HXvariability/stats/time_"$ts".csv;
done

bench=`grep -v ^# benchExec`
#declare -A bench=(["utest"]="2")
for b in $bench
do
ts=$(echo $b | cut -f1 -d/)
nb=$(echo $b | cut -f2 -d/)
STR=""
for (( i=1; i<=$nb; i++ ))
do
    STR=$STR"/HXvariability/stats/statistics/memory/memory_"$ts"_"$i".csv "
done
paste -d ';' $STR > /HXvariability/stats/memory_"$ts".csv;
done
