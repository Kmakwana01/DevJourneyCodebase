let CATEGORY = require("../model/category")

exports.add = async (req, res) => {
    try {
        if (!req.body.name || !req.body.colorcode) {
            throw new Error("please enter valid data")
        }
        let data = await CATEGORY.create(req.body)
        if (!data) {
            throw new Error("please enter valid data")
        }
        res.status(200).json({
            status: "success",
            data: data
        })
    } catch (error) {
        res.status(400).json({
            status: "fail",
            message: error.message
        })
    }
}
exports.show = async (req, res) => {
    try {
        let data = await CATEGORY.find()
        if (!data) {
            throw new Error("please enter valid id")
        }
        res.status(200).json({
            status: "success",
            data: data
        })
    } catch (error) {
        res.status(400).json({
            status: "fail",
            message: error.message
        })
    }
}
exports.update = async (req, res) => {
    try {
        await CATEGORY.findByIdAndUpdate(req.query.id, req.body)
        let data = await CATEGORY.findById(req.query.id)
        if (!data) {
            throw new Error("please enter valid id")
        }
        res.status(200).json({
            status: "success",
            data: data
        })
    } catch (error) {
        res.status(400).json({
            status: "fail",
            message: error.message
        })
    }
}

exports.delete = async (req, res) => {
    try {
        let data = await CATEGORY.findByIdAndDelete(req.query.id)
        if (!data) {
            throw new Error("please enter valid id")
        }
        res.status(200).json({
            status: "success",
            data: data
        })
    } catch (error) {
        res.status(400).json({
            status: "fail",
            message: error.message
        })
    }
}