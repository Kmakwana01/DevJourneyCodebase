import sqlite3
import requests
import pymongo
import json
from bson import ObjectId
from pymongo.mongo_client import MongoClient
from pymongo.server_api import ServerApi
import os

# Constants
SQLITE_DB = 'testing.db'
# MONGO_URI = os.getenv('MONGO_URI', 'mongodb+srv://kmakwana1255:kmakwana@cluster1.hfoy8xo.mongodb.net/test?retryWrites=true&w=majority')
MONGO_URI = "mongodb+srv://kmakwana1255:kmakwana@cluster1.hfoy8xo.mongodb.net/test?retryWrites=true&w=majority"
FREE_API_URL = 'https://api.freeapi.app/api/v1/public/randomusers?page=1&limit=1'


def create_sqlite_table():
    """Create a SQLite table if it doesn't already exist."""
    with sqlite3.connect(SQLITE_DB) as conn:
        cursor = conn.cursor()
        cursor.execute('''
            CREATE TABLE IF NOT EXISTS testing (
                id INTEGER PRIMARY KEY,
                NAME TEXT NOT NULL
            )
        ''')
        print("SQLite table created successfully.")


def fetch_random_users():
    """Fetch random users from a free API."""
    try:
        response = requests.get(FREE_API_URL)
        response.raise_for_status()
        data = response.json()
        if data.get('success', False):
            print("Data fetched successfully:", data)
            return data
        else:
            raise Exception("API returned an unsuccessful response.")
    except requests.RequestException as e:
        print(f"API request failed: {e}")
        return None


def connect_to_mongodb():
    """Connect to MongoDB and return the database object."""
    try:
        client = MongoClient(MONGO_URI, server_api=ServerApi('1'))
        client.admin.command('ping')  # Confirm the connection
        print("Connected to MongoDB successfully.")
        return client
    except Exception as e:
        print(f"Failed to connect to MongoDB: {e}")
        return None


def fetch_mongo_data(db):
    """Fetch and print data from MongoDB."""
    try:
        collection = db['test']
        data = list(collection.find())
        print("Data from MongoDB:")
        for document in data:
            print(document)
    except Exception as e:
        print(f"Error fetching data from MongoDB: {e}")


if __name__ == "__main__":
    # Step 1: Create SQLite table
    create_sqlite_table()

    # Step 2: Fetch data from the free API
    user_data = fetch_random_users()
    if user_data:
        print("User Data:", user_data)

    # Step 3: Connect to MongoDB and fetch data
    mongo_db_client = connect_to_mongodb()
    print('mongodb connection',mongo_db_client)
    if mongo_db_client:
        fetch_mongo_data(mongo_db_client['testing'])
