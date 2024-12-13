import requests

url = ('https://jsonplaceholder.typicode.com/todos')

response = requests.get(url)

# Print the JSON response
print(response.json())
