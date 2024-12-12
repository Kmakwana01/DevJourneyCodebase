const mongoose = require("mongoose")
const plm = require("passport-local-mongoose")


mongoose.connect('mongodb://127.0.0.1:27017/auth')
  .then(() => console.log('Connected!'))
  .catch((error) => console.log(error.message))

let userSchema = mongoose.Schema({
  username : String

})

userSchema.plugin(plm)

module.exports = mongoose.model("user",userSchema)
