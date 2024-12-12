import { useCallback, useEffect, useRef } from "react"
import { useState } from "react"

const Passgenerator = () => {
    const [length, setlength] = useState()
    const [number, setnumber] = useState(false)
    const [specialChar, setspecialChar] = useState(false)
    const [password, setpassword] = useState()
    const passwordRef = useRef(null)
  
    const passwordGenerator = useCallback(()=>{
      let pass = '';
      let string = 'abnxcvbZXCasDEFRadsvgmbeDFGHRTEYWETQUJKVBNXcvmgkBkgmZXJgfsdAWqertsetghGLfghjzsdWaqeqrrrQ'
      if(number) string += '0123456789';
      if(specialChar) string += '!@#$%^&*()_+}{|":>?<,./;][`'
  
      for (let i = 0 ; i < length; i++) {
        let rn = Math.floor(Math.random()*string.length);
        pass += string.charAt(rn)
      }
      setpassword(pass)
    },[length,number,specialChar,setpassword])
  
  
    useEffect(() => {
     passwordGenerator()
    }, [length,number,specialChar])
    
    const passwordCopy = ()=>{
      passwordRef.current.select()
      window.navigator.clipboard.writeText(password)
    }
  return (
    <>
    <div className="bg-black h-screen justify-center items-center flex">
      <div className="items-center content-center bg-gray-700 text-orange-500 w-[90%] max-w-96  rounded-lg overflow-hidden">
        <div className=" w-full bg-slate-600 p-4 rounded-md overflow-hidden">
          <h5 className="text-center mb-3">Password Generator</h5>
          <div className="flex shadow rounded-lg mb-4 overflow-hidden">
            <input type="text" className="w-full px-3 py-1 outline-none" ref={passwordRef} readOnly value={password} placeholder="Password" />
            <button className="px-3 py-1 bg-blue-700 outline-none text-white"  onClick={passwordCopy}>Copy</button>
          </div>
          <div className="flex gap-1">
            <div className="flex items-center w-[50%] gap-2">
              <input type="range" min={8}  max={100} onChange={(e) => setlength(e.target.value)} value={length} className="w-full cursor-pointer outline-none w-[50%]" />
              <label>Length : {length}</label>
            </div>
            <div className="flex items-center w-[50%] gap-2">
              <div className="flex gap-2">
                <input type="checkbox" min={8} max={100} value={length} className="w-full cursor-pointer outline-none w-[50%] border-none" onChange={() => setnumber((e) => !e)} />
                <label>Number</label>
              </div>
              <div className="flex gap-2">
                <input type="checkbox" min={8} max={100}  value={length} className="w-full cursor-pointer outline-none w-[50%] border-none"  onChange={() => setspecialChar((e) => !e)}  />
                <label>Char</label>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </>
  )
}

export default Passgenerator