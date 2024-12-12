import { createSlice, nanoid } from '@reduxjs/toolkit'

const initialState = {
    user: [{
        id: 1,
        name: 'Admin',
        email: 'admin@gmail.com',
        password: '123456789',
        role: 'ADMIN'
    }]
}

export const counterSlice = createSlice({
    name: 'allUsers',
    initialState,
    reducers : {
        addUser : (state, action) => {
            let User = {
                id: nanoid(),
                name: action.payload.name,
                email:action.payload.email,
                password: action.payload.password,
                role: 'user'
            }
            state.user.push(User)
        }
    }
})


export const {addUser} = counterSlice.actions

export default counterSlice.reducer
