import cv2
import numpy as np
import tensorflow as tf
import tensorflow_hub as hub
from PIL import Image
import os

# Load the pre-trained style transfer model from TensorFlow Hub
model = hub.load('https://tfhub.dev/google/magenta/arbitrary-image-stylization-v1-256/2')

# Function to load and preprocess an image
def load_image(image_path, max_dim=512):
    img = tf.io.read_file(image_path)
    img = tf.image.decode_image(img, channels=3)
    img = tf.image.convert_image_dtype(img, tf.float32)
    
    # Resize image while maintaining aspect ratio
    shape = tf.cast(tf.shape(img)[:-1], tf.float32)
    max_dim = tf.cast(max_dim, tf.float32)
    scale = max_dim / tf.reduce_max(shape)
    new_shape = tf.cast(shape * scale, tf.int32)
    img = tf.image.resize(img, new_shape)
    img = img[tf.newaxis, :]  # Add batch dimension
    return img

# Function to convert tensor to image
def tensor_to_image(tensor):
    tensor = tensor * 255
    tensor = np.array(tensor, dtype=np.uint8)
    if np.ndim(tensor) > 3:
        tensor = tensor[0]  # Remove batch dimension
    return Image.fromarray(tensor)

# Main function to perform Ghibli-style conversion
def ghibli_style_converter(content_path, style_path, output_path):
    # Load content and style images
    content_image = load_image(content_path)
    style_image = load_image(style_path)
    
    # Perform style transfer
    print("Converting image to Ghibli style...")
    stylized_image = model(tf.constant(content_image), tf.constant(style_image))[0]
    
    # Convert the result to an image and save it
    result = tensor_to_image(stylized_image)
    result.save(output_path)
    print(f"Image saved as {output_path}")

# Function to enhance Ghibli effect (optional: adjust colors and sharpness)
def enhance_ghibli_effect(image_path, output_path):
    # Load the stylized image with OpenCV
    img = cv2.imread(image_path)
    
    # Increase saturation for vibrant Ghibli-like colors
    hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
    hsv[:, :, 1] = hsv[:, :, 1] * 1.3  # Boost saturation
    hsv[:, :, 1] = np.clip(hsv[:, :, 1], 0, 255)  # Ensure values stay in range
    img = cv2.cvtColor(hsv, cv2.COLOR_HSV2BGR)
    
    # Apply slight blur for a softer, painterly look
    img = cv2.GaussianBlur(img, (5, 5), 0)
    
    # Save the enhanced image
    cv2.imwrite(output_path, img)
    print(f"Enhanced image saved as {output_path}")

# Example usage
if __name__ == "__main__":
    # File paths
    content_image_path = "input_image.jpg"  # Your input image
    style_image_path = "ghibli_style.jpg"   # Ghibli reference style image
    output_stylized_path = "output_stylized.jpg"  # Initial stylized output
    output_enhanced_path = "output_ghibli.jpg"    # Final enhanced output
    
    # Check if input files exist
    if not os.path.exists(content_image_path):
        print(f"Error: {content_image_path} not found!")
        exit()
    if not os.path.exists(style_image_path):
        print(f"Error: {style_image_path} not found!")
        exit()
    
    # Step 1: Apply style transfer
    ghibli_style_converter(content_image_path, style_image_path, output_stylized_path)
    
    # Step 2: Enhance the Ghibli effect
    enhance_ghibli_effect(output_stylized_path, output_enhanced_path)
    
    print("Ghibli-style conversion complete!")