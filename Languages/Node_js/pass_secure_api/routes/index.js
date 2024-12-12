var express = require('express');
var router = express.Router();
let bcrypt = require("bcrypt")
let user = require("../model/database");
const { Error } = require('mongoose');
// let session = require("express-session")
/* GET home page. */
router.get('/', function (req, res, next) {
  return res.render('index', { title: 'Express.js', message: req.flash("message") });
});

router.get('/register', function (req, res, next) {
  return res.render('index', { title: 'Express.js',message : req.flash("message")});
});

router.get('/login', function (req, res, next) {
  return res.render('login', { title: 'Express.js',message:req.flash("message") });
});

router.get('/main', function (req, res, next) {
  return res.render('main', { title: 'Express.js' });
});

router.post('/signup', async function (req, res, next) {
  // console.log(req.body)
  try {
    console.log(req.session);
    req.body.password = await bcrypt.hash(req.body.password, 9);
    user.create(req.body)
    req.flash("message", "signup successfully")
    return res.redirect("/")
  } catch (error) {
    console.error(error);
    req.flash("message",error)
    return res.redirect("/register")
  }
});


router.post('/login', async function (req, res, next) {
 try {
  let username = await req.body.username
  let USER = await user.findOne({ username, username });

  if (!USER) {
    throw new Error("please valid username or password")
  }

  let CHECKPASS = await bcrypt.compare(req.body.password, USER.password)

  if (!CHECKPASS) {
    throw new Error("please enter valid password")
  }

  return res.redirect("/main")
  
 } catch (error) {
  req.flash("message",error.message)
  res.redirect("/login")
 }
});


router.post('/api/signup', async function (req, res, next) {
  try {
    if (!req.body.password || !req.body.username) {
      throw new Error("please enter valid detail")
    }
    req.body.password = await bcrypt.hash(req.body.password, 9);
    let data = await user.create(req.body)

    res.status(200).json({
      status: "success",
      message: "you are registered",
      data: data
    })

  } catch (error) {
    res.status(404).json({
      status: "fail",
      message: error.message
    })
  }
});

router.post("/api/login", async (req, res) => {
  try {
    let username = await req.body.username
    let USER = await user.findOne({ username, username });

    if (!USER) {
      throw new Error("please valid username or password")
    }

    let CHECKPASS = await bcrypt.compare(req.body.password, USER.password)

    if (!CHECKPASS) {
      throw new Error("please enter valid password")
    }

    res.status(200).json({
      status: "success",
      message: "you are signup"
    })

  } catch (error) {
    res.status(404).json({
      status: "fail",
      message: error.message
    })
  }
})

module.exports = router;
