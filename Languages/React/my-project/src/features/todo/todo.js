import { createSlice, nanoid } from "@reduxjs/toolkit";

const initialState = {
    Todos: [{ id: 1, text: "hello world" }]
}

export const todoSlice = createSlice({
    name: 'todo',
    initialState,
    reducers: {
        addTodo: (state, action) => {
            const todo = {
                id: nanoid(),
                text: action.payload
            }
            state.Todos.push(todo)
        },

        updateTodo: (state, action) => {
            let updateTodo = state.Todos.filter((todo) => {
                todo.id === action.payload.id
            })

            updateTodo = action.payload.newTodo
            state.Todos[updateTodo.id] = updateTodo

        }, removeTodo: (state, action) => {
            state.Todos = state.Todos.filter((todo) => {
                todo.id !== action.payload
            })
        }
    }
})


export const { addTodo, updateTodo, removeTodo } = todoSlice.actions

export default todoSlice.reducer