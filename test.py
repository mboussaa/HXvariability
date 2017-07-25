import json

with open('influxdb.json') as json_file:  
    data = json.load(json_file)
    for doc in data['results']:
        a=doc['series'][0]['values'][0]
        print(a[1])
