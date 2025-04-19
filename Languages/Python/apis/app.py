from flask import Flask, jsonify, request

app = Flask(__name__)

books = [
    {"id": 1, "title": "1984", "author": "George Orwell"},
    {"id": 2, "title": "To Kill a Mockingbird", "author": "Harper Lee"},
]

# Get all books
@app.route('/api/books', methods=['GET'])
def get_books():
    return jsonify(books)

# Get a single book by ID
@app.route('/api/books/<int:book_id>', methods=['GET'])
def get_book(book_id):
    book = next((book for book in books if book["id"] == book_id), None)
    if book:
        return jsonify(book)
    return jsonify({"error": "Book not found"}), 404

# Create a new book
@app.route('/api/books', methods=['POST'])
def create_book():
    new_book = request.get_json()
    new_book["id"] = len(books) + 1
    books.append(new_book)
    return jsonify(new_book), 201

# Update an existing book
@app.route('/api/books/<int:book_id>', methods=['PUT'])
def update_book(book_id):
    book = next((book for book in books if book["id"] == book_id), None)
    if not book:
        return jsonify({"error": "Book not found"}), 404
    updated_data = request.get_json()
    book.update(updated_data)
    return jsonify(book)

# Delete a book
@app.route('/api/books/<int:book_id>', methods=['DELETE'])
def delete_book(book_id):
    global books
    books = [book for book in books if book["id"] != book_id]
    return jsonify({"message": "Book deleted"})

if __name__ == '__main__':
    app.run(debug=True)
            