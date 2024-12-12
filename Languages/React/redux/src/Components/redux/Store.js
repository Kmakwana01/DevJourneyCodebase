import { configureStore } from "@reduxjs/toolkit";
import UserReducer from "../Reducers/User.Reducer";

export const Store = configureStore({
    reducer :  UserReducer
})