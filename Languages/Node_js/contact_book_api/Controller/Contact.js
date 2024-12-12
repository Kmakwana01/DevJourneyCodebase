let CONTACT = require("../Model/contact")

exports.add = async (req,res)=>{
        try {
            if(!req.body.fname || !req.body.lname || !req.body.mobile || !req.body.user ){
                throw new Error("please enter valid data")
            }
            let data = await CONTACT.create(req.body)
            
            res.status(200).json({
                status : "success",
                data : data
            })
        } catch (error) {
            res.status(400).json({
                status : "fail",
                message : error.message
            })
        }

}
exports.show = async (req,res)=>{
        try {
           
            let data = await CONTACT.find()
            res.status(200).json({
                status : "success",
                data : data
            })
        } catch (error) {
            res.status(400).json({
                status : "fail",
                message : error.message
            })
        }

}
exports.update = async (req,res)=>{
        try {
           
            await CONTACT.findByIdAndUpdate(req.query.id , req.body)
            let data = await CONTACT.findById(req.query.id)

            res.status(200).json({
                status : "success",
                message : "updated data",
                data : data
            })
        } catch (error) {
            res.status(400).json({
                status : "fail",
                message : error.message
            })
        }
}

exports.delete = async (req,res)=>{
        try {
           
            let data = await CONTACT.findByIdAndDelete(req.query.id)
            if(!data){
                throw new Error("please enter valid id")
            }

            res.status(200).json({
                status : "success",
                message : "delete this data",
                data : data
            })
        } catch (error) {
            res.status(400).json({
                status : "fail",
                message : error.message
            })
        }

}
