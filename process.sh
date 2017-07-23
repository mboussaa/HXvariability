
while read name 
do
        line=${name} 
        echo "vvvvvv"
        lang=$(echo $line | cut -f1 -d/)
         opti=$(echo $line | cut -f2 -d/)
        more_opti=$(echo $line | cut -f3 -d/) 
echo $lang
echo $opti
echo $more_opti
done < target_flags
