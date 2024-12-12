let mongoose = require("mongoose")

let USER = new mongoose.Schema({
    name : String,
    email : String,
    password : String,
})

module.exports = mongoose.model("user",USER)