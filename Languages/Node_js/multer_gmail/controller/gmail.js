var nodemailer = require('nodemailer');

exports.gmail = async(req,res)=>{
    console.log(req.body)
    var transporter = nodemailer.createTransport({
        service: 'gmail',
        auth: {
          user: 'kmak9192@gmail.com',
          pass: 'jztd lmgy pyzn yhrq'
        }
      });
      
      var mailOptions = {
        from: 'kmak9192@gmail.com',
        to: req.body.email,
        subject: 'Hello I Am Mr_Makwana',
        text: 'I Am Web Devloper'
      };
      
      transporter.sendMail(mailOptions, function(error, info){
        if (error) {
          console.log(error);
        } else {
          console.log('Email sent: ' + info.response);
        }
      });
      res.render('index', { title: 'Express' });
}