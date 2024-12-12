import { configureStore } from '@reduxjs/toolkit'
import userReducer from '../redux/post'

export const store = configureStore({
  reducer: userReducer,
})

