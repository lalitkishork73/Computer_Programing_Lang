const mongoose = require('mongoose');
mongoose.connect('mongodb://localhost/webber', { useNewUrlParser: true });

const db=mongoose.connection;
db.on('error',console.error.bind(console,'connection error:'));
db.once('open', function(){
    console.log("mango db connected....");
});
const kittySchema=new mongoose.Schema({
    name:String,
    phone:Number
});  

kittySchema.methods.speak=function(){
    const greeting=this.name
        ?"consol name is "+this.name
        :"i don't have a name";
    console.log(greeting);

}

const kitten=mongoose.model('webber',kittySchema);
const webber=new kitten({name:"karma",phone:9510134664});
const webber1=new kitten({name:"thanos ",phone:9510134664});
console.log(webber.name)
console.log(webber.phone)
/* webber.speak(); */

webber.save(function(err,webber){
    if(err)return console.error(err);
   /*  webber.speak(); */
});
webber1.save(function(err,sete){
    if(err)return console.error(err);
   /*  webber.speak(); */
});

kitten.find({name:"thanos kahi ka"},function(err,webbers){
    if(err) return console.error(err);
    console.log(webbers);
})