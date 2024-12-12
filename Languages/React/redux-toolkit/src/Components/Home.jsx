import { useDispatch, useSelector } from "react-redux"

const Home = () => {
    let data = useSelector(state => state.user)
    console.log(data);
  return (
    <>
        
    </>
  )
}

export default Home