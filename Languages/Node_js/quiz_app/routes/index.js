var express = require('express');
var router = express.Router();

let upload = require('../multer/multer')

let CateoryController = require("../Controller/category")
let QuestionsController = require("../Controller/Questions")

/* GET home page. */
router.get('/', function (req, res, next) {
  res.render('index', { title: 'Express' });
});

router.post('/category/add',upload.fields([{name:"image",maxCount:1}]), CateoryController.add);

router.get("/category/show", CateoryController.show)

router.patch("/category/update",upload.fields([{name:"image",maxCount:1}]), CateoryController.updates)

router.delete("/category/delete", CateoryController.delete)

router.post("/que/add", QuestionsController.add)

router.get("/que/show", QuestionsController.show)

router.patch("/que/update",QuestionsController.update)

router.delete("/que/delete", QuestionsController.delete)

module.exports = router;
