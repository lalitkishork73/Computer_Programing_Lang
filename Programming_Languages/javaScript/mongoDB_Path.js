const express = require('express');
const app = express();
const path = require('path');
const mongoose = require('mongoose');
const hostip = '192.168.1.10';
const port = 80;

//MongoDB setup//
mongoose.connect('mongodb://localhost/contact', { useNewUrlParser: true });
const contactschema = new mongoose.Schema({
    name: String,
    phone: String,
    email: String,
    address: String

});
const contact = mongoose.model('contact', contactschema);

// use adress //
app.use('/static', express.static('static'));
app.use(express.urlencoded());

// Set path and define engine//
app.set('view engine','pug');
app.set('views',path.join(__dirname,'views'));

//now put get request //
app.get('/home',(req,res)=>{
    res.status(200).render('home.pug');
});
app.get('/contact',(req,res)=>{
    res.status(200).render('contact.pug');
});
app.get('/register',(req,res)=>{
    res.status(200).render('register.pug');
});
app.get('/about',(req,res)=>{
    res.status(200).render('about.pug');
});

//post request//
app.post('/contact',(req,res)=>{
    const mydata=new contact(req.body);
    mydata.save().then(()=>{
        res.send("your data sucessfully updated");
    }).catch(()=>{
        res.status(400).send("the data is failed to update");
    })
});

//run server//

app.listen(port,hostip,(req,res)=>{
    console.log(`Hosting on http://${hostip}:${port}/home`);    
})
    