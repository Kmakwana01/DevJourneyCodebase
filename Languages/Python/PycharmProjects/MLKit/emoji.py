message=input(" Enter your message here:")
words=message.split(' ')
print(words)

output=" "
emojis = {
    ":)": "😁",
    ":(": "😢",
    ":D": "😂"
}

for word in words:
    output+=emojis.get(word,word) + " "

print(output)