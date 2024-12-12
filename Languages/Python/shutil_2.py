import requests

url = ('https://newsapi.org/v2/everything?'
       'q=Apple&'
       'from=2023-09-19&'
       'sortBy=popularity&'
       'apiKey=API_KEY')

response = requests.get(url)

print(response.json)
