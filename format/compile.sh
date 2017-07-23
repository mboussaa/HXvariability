

for (( i=1; i<=5; i++ ))
do
haxe -cp src -D MY_OPTIM_FLAG=$2 -cp test -main TS"$i".hx $3 -lib utest -lib thx.core -lib utest -lib nanotest -$1 target/$1$2/ts"$i"
done

