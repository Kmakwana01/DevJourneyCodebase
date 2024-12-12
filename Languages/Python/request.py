import requests
import json

key = input("enter your key")

url = f"https://newsapi.org/v2/everything?q=tesla&from=2023-09-18&sortBy=publishedAt&apiKey=db9ae426c7f74eea98cae80e0a30f728"
im = requests.get(url)
print(im.text)





