import {createSlice ,nanoid} from '@reduxjs/toolkit'

const initialState = {
    User : [{
        id : 1,
        name : 'khushal Makwana',
        email : 'kmakawna@gmail.com',
        password : '123'
    }],
    Blogs : [{
        id: nanoid(),
        title:'React is the best framework for web development!',
        content:`Lorem ipsum dolor sit amet consectetur adipisicing elit.`, 
        authorId:1
    }]
}

export const Users = createSlice({
    name : 'User',
    initialState,
    reducers : {
        addUser : (state,action)=>{
            console.log(action.payload);
            const User = {
                id : nanoid(),
                name : action.payload.name,
                email : action.payload.email,
                password : action.payload.password
            }
            state.User.push(User)
            state.Blogs.push(User)
        },
        deleteUser : (state,action)=> {
            state.User = state.User.filter((user) => user.id !== action.payload.id);
        },
        updateUser : (state,action)=> {
           const User = state.User.filter((user) => user.id === action.payload.id);
            User.name = action.payload.name
            User.email = action.payload.email
            User.email = action.payload.password

            state.User.map((user)=>{
                if(user.id === action.payload.id){
                   user.name = action.payload.name
                   user.email = action.payload.email
                   user.password = action.payload.password
                }
            })
        
        },
    }
})

export const {addUser,deleteUser,updateUser} = Users.actions

export default Users.reducer