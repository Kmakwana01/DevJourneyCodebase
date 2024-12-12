var express = require('express');
var router = express.Router();
let UserRouter = require("../controller/User")
let CategoryRouter = require("../controller/Category")
let BlogsRouter = require("../controller/Blogs")
let upload = require('../multer/multer')


/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

// user routers
router.post("/api/user/add",UserRouter.add)
router.get("/api/user/show",UserRouter.show)
router.patch("/api/user/update",UserRouter.update)
router.delete("/api/user/delete",UserRouter.delete)

// categori routers

router.post("/api/category/add",CategoryRouter.add)
router.get("/api/category/show",CategoryRouter.show)
router.patch("/api/category/update",CategoryRouter.update)
router.delete("/api/category/delete",CategoryRouter.delete)

// blogs routers

router.post("/api/blog/add",upload.fields([{name:"image",maxCount:1}]),BlogsRouter.add)
router.get("/api/blog/show",BlogsRouter.show)
router.patch("/api/blog/update",upload.fields([{name:"image",maxCount:1}]),BlogsRouter.update)
router.delete("/api/blog/delete",BlogsRouter.delete)
module.exports = router;
