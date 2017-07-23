
for (( i=1; i<=2; i++ ))
do
echo haxe -cp src -D MY_OPTIM_FLAG=$2 $3 -cp test -main TS"$i".hx $4 -lib utest -lib thx.core -lib utest -lib nanotest -$1 target/$1$2/ts"$i"
haxe -cp src -D MY_OPTIM_FLAG=$2  -cp test -main TS"$i".hx $4 $3 -lib utest -lib thx.core -lib utest -lib nanotest -$1 target/"$1$2$3"/ts"$i"
done
