var express = require('express');
var router = express.Router();
let GmailRouter = require("../controller/gmail")
let upload = require("../multer/multer")

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});
router.post('/api/submit', upload.single('image') ,GmailRouter.gmail);

module.exports = router;
