import json
import sys

#arg1 = sys.argv[1]

results = []
names = []
with open("/HXvariability/stats/statistics/influxdb.json", 'r') as f:
    content = json.loads(f.read())
    for element in content:
        results.append('\n'.join([str(y[1]) for y in element['values']]))
#	names.append('\n'.join([str(j[2]) for j in element['points']]))
#with open("/shared/statistics/memory_"+arg1, 'a') as f:
#natsort_key(results, key=lambda y: y.lower())
with open("/HXvariability/stats/statistics/memory", 'w') as f:  
  #f.write('\n'.join(names)'\n'.join(results)+'\n')
  #  f.write('\n'.join(names)+',')
    f.write('\n'.join(results)+'\n')
