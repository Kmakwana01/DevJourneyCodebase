let USER = require("../Model/user")

exports.add = async (req,res)=>{
        try {
            if(!req.body.name || !req.body.email || !req.body.password ){
                throw new Error("please enter valid data")
            }
            let data = await USER.create(req.body)
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
           
            let data = await USER.find()
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
           
            await USER.findByIdAndUpdate(req.query.id , req.body)
            let data = await USER.findById(req.query.id)

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
           
            let data = await USER.findByIdAndDelete(req.query.id)
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