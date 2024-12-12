let multer = require("multer")
let {v4 : uuidv4} = require("uuid")
let path = require('path')

var storage = multer.diskStorage({
    destination: function (req, file, cb) {
      cb(null, './upload')
    },
    filename: function (req, file, cb) {
    let uniquename = uuidv4()
      cb(null, uniquename+path.extname(file.originalname))
    }
  })
   
  var upload = multer({ storage: storage })
  module.exports = upload