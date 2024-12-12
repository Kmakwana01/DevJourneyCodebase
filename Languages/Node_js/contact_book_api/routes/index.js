var express = require('express');
var router = express.Router();
let ContactRouter = require("../Controller/Contact")
let UserRouter = require("../Controller/User")

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});


router.get("/api/user/add",UserRouter.add)
router.get("/api/user/show",UserRouter.show)
router.get("/api/user/update",UserRouter.update)
router.get("/api/user/delete",UserRouter.delete)

router.get("/api/contact/add",ContactRouter.add)
router.get("/api/contact/show",ContactRouter.show)
router.get("/api/contact/update",ContactRouter.update)
router.get("/api/contact/delete",ContactRouter.delete)

module.exports = router;
