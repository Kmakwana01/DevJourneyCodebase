
def get_name(first_name):
    print("Hello",first_name)
    print("Finish.")


print("Start.")
get_name("Ravi")

print(" Following is the example of funcion reuse:")


def emoji_converter(message):
    words = message.split(' ')
    print(words)
    output=" "
    emoji = {
        ":)": "😁",
        ":(": "😢",
        ":D": "😂"
             }
    for word in words:
        output += emoji.get(word, word) + " "
    return output


message = input(" Enter your message here:")
print(emoji_converter(message))
