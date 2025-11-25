let mongoose = require("mongoose")
let Schema = mongoose.Schema

mongoose.connect('mongodb://127.0.0.1:27017/test')
  .then(() => console.log('Connected!'))
  .catch((error) => console.log(error.message))

  let NewSchema = new Schema({
    name : String,
    surname : String,
    Categori : Array
  })

let USER = mongoose.model("users",NewSchema);



(async function hello(){
  await USER.create({ name: "postcard", "surname": 45, "Categori": ["A", "B", "C"] })
    // let data = await USER.find({$or:[{status:"D"},{"size.w" :11},{qty:{$eq:100}}]})
    let data = await USER.find()
    // let data = await USER.find({ item:"planner" })
    // let data = await USER.updateMany({ status: "D" }, { $set: { "qty":50 } });
    // let data = await USER.updateMany(
    //     { item:"planner" }, // Filter criteria: documents with status "D"
    //     { $set: { qty: 50 } } // Update operation: set qty to 50
    //   );
    
    // let data = await USER.updateMany({qty:{$gt:100}},{$set:{qty:1000}})

    // let data = await USER.remove({status:"A"})
    console.log(data);
})()

