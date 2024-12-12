import { BrowserRouter, Routes, Route } from "react-router-dom";
import Passgenerator from './Components/Passgenerator';
import Todos from './Components/Todos';

const App = () => {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/pass" element={<Passgenerator />}/>
        <Route path="/todo" element={<Todos />}/>
      </Routes>
    </BrowserRouter>
  )
}

export default App