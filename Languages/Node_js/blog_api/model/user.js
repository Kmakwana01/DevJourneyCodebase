let mongoose = require("mongoose")

let User = new mongoose.Schema({
    name : String,
    email : String,
    password : String,
})

module.exports = mongoose.model("User",User)