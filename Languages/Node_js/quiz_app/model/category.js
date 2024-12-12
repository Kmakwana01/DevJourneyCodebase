let mongoose = require("mongoose")

let category = new mongoose.Schema({
    name : String,
    image : String,
    que : [{
        type : mongoose.Schema.Types.ObjectId,
        ref:"que"
    }]
})

let Cat_Schema = mongoose.model("cat",category)

module.exports = Cat_Schema;