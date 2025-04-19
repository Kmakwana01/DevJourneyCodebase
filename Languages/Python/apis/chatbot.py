import aiml
import openai
from dotenv import load_dotenv
import os

# Load environment variables from .env file
load_dotenv()

# Initialize AIML Kernel
kernel = aiml.Kernel()
kernel.learn("bot.aiml")

# Set up OpenAI API
openai.api_key = os.getenv("OPENAI_API_KEY")

def get_gpt_response(prompt):
    response = openai.ChatCompletion.create(
        model="gpt-3.5-turbo",  # Use the latest model available
        messages=[
            {"role": "user", "content": prompt}
        ],
        max_tokens=150,
        temperature=0.7
    )
    return response.choices[0].message['content'].strip()

while True:
    user_input = input("You: ")
    # First, check if AIML has a response
    aiml_response = kernel.respond(user_input)
    if aiml_response:
        print("Bot (AIML):", aiml_response)
    else:
        # Fallback to GPT if AIML has no matching pattern
        gpt_response = get_gpt_response(user_input)  # Use user_input directly
        print("Bot (GPT):", gpt_response)
