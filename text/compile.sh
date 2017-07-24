

for (( i=1; i<=2; i++ ))
do
haxe -cp src -D MY_OPTIM_FLAG=$2  -cp test -main TS"$i".hx $4 $3 -lib utest -lib thx.core -lib utest -lib nanotest -$1 target/"$1$2$3"/ts"$i"
echo haxe -cp src -D MY_OPTIM_FLAG=$2  -cp test -main TS"$i".hx $4 $3 -lib utest -lib thx.core -lib utest -lib nanotest -$1 target/"$1$2$3"/ts"$i"
done


