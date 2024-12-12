var express = require('express');
var router = express.Router();
let passport = require("passport")
let userModel = require("./users")
let passportlocal = require("passport-local")

passport.use(new passportlocal(userModel.authenticate()))
/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

router.get('/register', function(req, res, next) {
  res.render('index', { title: 'Express' });
});

router.get('/login', function(req, res, next) {
  res.render('login', { title: 'Express' });
});

router.get('/profile', isLoggedIn ,async function(req, res, next) {
  // let obj = isLoggedIn
  let data;
  if(isLoggedIn){
    data = "logout"
  }else{
    data = "login"
  }
  res.render('profile',{data:data});
});

router.post('/register', function(req, res) {
  let userdata = new userModel({
    username : req.body.username,
    secret : req.body.secret
  })
  userModel.register(userdata,req.body.password)
  .then(function(registereduser){
    passport.authenticate("local")(req,res,function(){
      console.log(req.user);
      console.log(req.cookies);
      res.redirect("/profile")
    })
  })
});

router.post('/login',passport.authenticate("local",{
  successRedirect:"/profile",
  failureRedirect:"/"
}) ,function(req, res, next) {});


router.get("/logout", function(req,res,next){
  req.logout(function(err){
    if(err) return next(err);
    res.redirect("/login")
  })
})

function isLoggedIn(req,res,next){
  if(req.isAuthenticated()){
    return next();
  }
  res.redirect("/")
}
module.exports = router;