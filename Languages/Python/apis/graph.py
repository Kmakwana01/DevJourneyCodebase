import matplotlib.pyplot as plt
import numpy as np
from matplotlib.animation import FuncAnimation

# Define initial values
start_price = 100  # Start price
end_price = 140    # End price
current_prices = [start_price]  # List to store current prices

# Define figure and axis
fig, ax = plt.subplots()
line, = ax.plot([], [], lw=2, label="Price Movement")
ax.set_xlim(0, 100)  # Initial x-axis range (time steps)
ax.set_ylim(start_price - 10, end_price + 10)  # Y-axis range (price range)
ax.set_title("Zomato Stock Price")
ax.set_xlabel("Time")
ax.set_ylabel("Price")
ax.legend()

# Add a text element for user-friendly messages
message = ax.text(0.5, 0.9, '', transform=ax.transAxes, fontsize=12, ha='center', color='red')

# Update function for animation
def update(frame):
    global current_prices
    # Simulate a new current price between start and end
    new_price = current_prices[-1] + np.random.uniform(-2, 2)
    new_price = max(start_price, min(new_price, end_price))  # Keep within bounds
    current_prices.append(new_price)

    # Update the line data
    line.set_data(range(len(current_prices)), current_prices)

    # Dynamically update x-axis limits
    if len(current_prices) > ax.get_xlim()[1]:
        ax.set_xlim(0, len(current_prices))

    # Check if the stock price has reached the end price
    if new_price == end_price:
        message.set_text("Stock reached the target price!")
        ani.event_source.stop()  # Stop the animation

    return line, message

# Create the animation
ani = FuncAnimation(fig, update, frames=range(300), interval=100, blit=True)

plt.show()
