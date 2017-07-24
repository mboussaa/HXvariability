lang=$(echo $1 | cut -f1 -d/)
opti=$(echo $1 | cut -f2 -d/)
more_opti=$(echo $1 | cut -f3 -d/)
if [ ! -z "$more_opti" ]
then
more_opti="-D "$more_opti
fi

#--java
if [ "$lang" = "java" ] 
then
java -jar "$2"/target/"$lang$opti$more_opti"/ts"$3"/TS"$3".jar "$4"
fi

#--js
if [ "$lang" = "js" ]
then
/usr/bin/X11/node "$2"/target/"$lang$opti$more_opti"/ts"$3"/ts"$3".js "$4"
fi

#--c++
if [ "$lang" = "cpp" ]
then
 "$2"/target/"$lang$opti$more_opti"/ts"$3"/TS"$3" "$4"
fi

#--cs
if [ "$lang" = "cs" ]
then
mono "$2"/target/"$lang$opti$more_opti"/ts"$3"/bin/TS"$3".exe "$4"
fi

#--php
if [ "$lang" = "php" ]
then
php "$2"/target/"$lang$opti$more_opti"/ts"$3"/index.php "$4"
fi
