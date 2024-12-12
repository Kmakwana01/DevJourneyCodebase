import {useDispatch,useSelector} from 'react-redux'
import { addTodo  as addTodoinReducer} from '../features/todo/todo'
import { useState } from 'react'

const Todos = () => {

  const [text, settext] = useState()
  
    let Dispatch = useDispatch()
    let allData = useSelector(state => state.Todos)
    console.log(allData);
    
    let addTodo = ()=>{ 
        Dispatch(addTodoinReducer(text))
        settext('')
        console.log('object');
    }

    const handleChange = (e)=>{
      settext(e.target.value)
    }
  return (
   <>
    <input type="text"  />
    <input type="button" onClick={addTodo} onChange={handleChange} value={text}/>
   </>
  )
}

export default Todos