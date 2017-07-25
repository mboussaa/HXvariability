:wqtarget=`grep -v ^# target_flags`
#declare -A bench=(["color"]="19" ["core"]="51" ["hxmath"]="6" ["format"]="4" ["promise"]="3" ["csv"]="1" ["culture"]="4" ["math"]="3" ["text"]="2" ["utest"]="2")
bench=`grep -v ^# benchExec`
#declare -A bench=(["utest"]="2")
for b in $bench
do
ts=$(echo $b | cut -f1 -d/)
nb=$(echo $b | cut -f2 -d/)
for (( i=4; i<=$nb; i++ ))
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
TIMEFORMAT='%3R'
#sleep 5s;
#echo "running !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:::::::::::::::::::::::::::::::::::::::::: '$j' '$ts' '$i' ${!tab}";
#echo docker run -w /HXvariability -it --rm -v /HXvariability:/HXvariability --name="haxe_"$lang"_"$opti"_"$more_opti"_"$ts"_"$i"" mboussaa/haxe /bin/bash -c "./run.sh '$lang' '$ts' '$i' 100""
echo docker run -w /HXvariability -it --rm -v /HXvariability:/HXvariability --name="haxe"$lang""$opti""$more_opti""$ts""$i"" mboussaa/haxe /bin/bash -c "./run.sh '$line' '$ts' '$i' 10"
time(docker run -w /HXvariability -it --rm -v /HXvariability:/HXvariability --name="haxe"$lang""$opti""$more_opti""$ts""$i"" mboussaa/haxe /bin/bash -c "./run.sh '$line' '$ts' '$i' 1") 2>> /HXvariability/stats/statistics/time_"$ts"_"$i".csv
#time(docker run -w /HXvariability -it --rm -v /HXvariability:/HXvariability --name="haxe_"$line"_"$ts"_"$i"" mboussaa/haxe /bin/bash -c "./run.sh '$lang' '$ts' '$i' 10000") 2>> /shared/stats/statistics/time_"$ts"_"$j".csv
#time(docker run -w /shared -it --rm -v /shared:/shared --name=haxe_"$j"_"$ts"_"$i" mboussaa/haxe /bin/bash -c "./run.sh '$j' '$ts' '$i' ${!tab}") 2>> /shared/stats/statistics/time_"$ts"_"$j".csv
done
done
done
