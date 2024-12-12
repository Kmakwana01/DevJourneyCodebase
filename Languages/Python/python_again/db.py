import sqlite3 
import requests
import pymongo
import json
from bson import ObjectId
# conn = sqlite3.connect('testing')

# curser =  conn.cursor()
# curser.execute('''
#                CREATE TABLE IF NOT EXISTS testing (
#                        id INTEGER PRIMARY KEY,
#                        NAME TEXT NOT NULL
#                )
#                ''')

# curser.close()

# def freeAPICall():
#         url = 'https://api.freeapi.app/api/v1/public/randomusers?page=1&limit=1'
        
#         response = requests.get(url).json()
        
#         if response['success'] == True:
#                 print(response)
#                 print('data get successfully')
#         else:
#                 print('data not get successfully')
#                 raise Exception('failed')
                
# res = freeAPICall()
# print(res)

client = pymongo.MongoClient('mongodb+srv://kmakwana1255:kmakwana@cluster1.hfoy8xo.mongodb.net/test?retryWrites=true&w=majority')

db = client['testing']
TEST = db['test']

# for obj in db['test'].find({}):
#         print(obj['name'], end='\n')

TEST.find_one_and_update(
        {'_id' : ObjectId('6676a8c05085a3d518d5c9a8')},
        {'$set' : {
                'name' : "Khushal",
                'surname' : "Makwana"
        }}
)






        