import './App.css';
import {Route,Routes,BrowserRouter} from "react-router-dom"
import Home from './components/Home1';
import FAQs from './components/FAQs';
import Terms from './components/Terms';
import Privacy from './components/Privacy';
import Contact from './components/Contact';


function App() {
  return (
    <>
    <BrowserRouter>
      <Routes>
        <Route exact path='/' element={<Home/>} /> 
        <Route exact path='/FAQs' element={<FAQs/>} />
        <Route exact path='/Terms' element={<Terms/>} />
        <Route exact path='/Privacy' element={<Privacy/>} />
        <Route exact path='/Contact' element={<Contact/>} />
      </Routes>
    </BrowserRouter>
    </>
  );  
}

export default App;
