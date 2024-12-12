var express = require('express');
var router = express.Router();
let CategoryController = require("../Controller/Category")
let SubCategoryController = require("../Controller/Subcategory")
let TopicsController = require("../Controller/Topics")
let upload = require('../multer/multer')


/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});
//--------------Categori router-----------------------
router.post("/api/category/add", CategoryController.add)
router.get("/api/category/show", CategoryController.show)
router.patch("/api/category/update", CategoryController.update)
router.delete("/api/category/delete", CategoryController.delete)

//--------------SubCategori router-----------------------
router.post("/api/subcategory/add", SubCategoryController.add)
router.get("/api/subcategory/show", SubCategoryController.show)
router.patch("/api/subcategory/update", SubCategoryController.update)
router.delete("/api/subcategory/delete", SubCategoryController.delete)

//---------------------Topics router----------------------------
router.post("/api/topic/add", upload.fields([{name:"image",maxCount:1}]),TopicsController.add)
router.get("/api/topic/show", TopicsController.show)
router.patch("/api/topic/update", upload.fields([{name:"image",maxCount:1}]),TopicsController.update)
router.delete("/api/topic/delete", TopicsController.delete)

module.exports = router;
