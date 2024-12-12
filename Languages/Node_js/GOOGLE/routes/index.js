var express = require('express');
var router = express.Router();
const passport = require('passport');
const GoogleStrategy = require('passport-google-oauth20').Strategy;
const session = require('express-session');
const ejs = require('ejs');

/* GET home page. */
router.get('/', function(req, res, next) {
  res.render('index', { user: req.user });
});

router.get('/auth/google', passport.authenticate('google', { scope: ['profile', 'email'] }));

router.get(
  '/auth/google/callback',
  passport.authenticate('google', { failureRedirect: '/' }),
  (req, res) => {
    res.redirect('/');
  }
);

router.get('/logout', (req, res) => {
  req.logout();
  res.redirect('/');
});


router.get('/profile', (req, res) => {
  if (req.isAuthenticated()) {
    res.render('profile', { user: req.user });
  } else {
    res.redirect('/');
  }
});

module.exports = router;
