# remove all containers 
#
echo "remove all containers";
docker stop $(docker ps -a -q);
docker rm $(docker ps -a -q);
rm -rf /HXvariability/stats/*;
mkdir /HXvariability/stats/statistics
