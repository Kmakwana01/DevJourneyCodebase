const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const BlogPost = new Schema({
  username : {
    type: String,
    required: true,
    unique: true
  },
  password : {
    type : String,
    required:true,
  }
});

const user = mongoose.model('users', BlogPost);

module.exports = user