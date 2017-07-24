#!/bin/bash
flags=`grep -v ^# target_flags`
benchs=`grep -v ^# benchs`

for i in $benchs
do
 tmp=$PWD
 cd $i
# rm -rf target/*
  # *** process directory ***
  echo "************** compiling $i test suites ********************************************"
  echo $i
echo $PWD
input_file=/HXvariability/target_flags
for line in $flags
do


	lang=$(echo $line | cut -f1 -d/)
  	opti=$(echo $line | cut -f2 -d/)
   	more_opti=$(echo $line | cut -f3 -d/)
  	jslib="-lib hxnodejs"
	echo "lang= "$lang
	echo "opti= "$opti
	echo "more opti= "$more_opti
if [ ! -z "$more_opti" ]
then
more_opti="-D "$more_opti
fi
echo "moooooore"$more_opti
if [ $lang = "js" ]
then
 docker run -w /HXvariability/$i -it --rm -v /HXvariability:/HXvariability --name=haxe_compilation mboussaa/haxe /bin/bash -c "./compile.sh '$lang' '$opti' '$more_opti' '$jslib'"
echo docker run -w /HXvariability/$i -it --rm -v /HXvariability:/HXvariability --name=haxe_compilation mboussaa/haxe /bin/bash -c '"./compile.sh '$lang' '$opti' '$more_opti' '$jslib'"'
else
echo "bench= "$i
echo "flag= "$line
 docker run -w /HXvariability/$i -it --rm -v /HXvariability:/HXvariability --name=haxe_compilation mboussaa/haxe /bin/bash -c "./compile.sh '$lang' '$opti' '$more_opti'"
echo  docker run -w /HXvariability/$i -it --rm -v /HXvariability:/HXvariability --name=haxe_compilation mboussaa/haxe /bin/bash -c "./compile.sh '$lang' '$opti' '$more_opti'"
fi
done
 cd $tmp
done
