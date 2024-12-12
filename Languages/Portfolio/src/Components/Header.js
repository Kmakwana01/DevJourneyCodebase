import React, { useEffect, useState } from 'react'
import { Link } from 'react-router-dom'
// import 'animate.css';
import AOS from 'aos';
import 'aos/dist/aos.css';
import './Header.scss'
import './Custom.scss'

const Header = () => {
  const [prevScrollPos, setPrevScrollPos] = useState(window.scrollY);
  const [backgroundColor, setBackgroundColor] = useState('');
  const [top, settop] = useState('0')

  useEffect(() => {
    const handleScroll = () => {
      const currentScrollPos = window.scrollY;

      if (currentScrollPos > 50) {
        setBackgroundColor('rgba(33, 36, 40, 0.8705882353)');
      } else {
        setBackgroundColor(''); // Change background color after scrolling 100px
      }

      setPrevScrollPos(currentScrollPos);
    };

    window.addEventListener('scroll', handleScroll);

    return () => {
      // Cleanup the event listener when the component is unmounted
      window.removeEventListener('scroll', handleScroll);
    };
  }, [prevScrollPos]);
  useEffect(() => {
    AOS.init();
  }, []);

  const downloadCV = () => {
    // Replace 'path-to-your-cv.pdf' with the actual path to your CV file
    const cvPath = './file/Khushal_Makwana_Resume.pdf';
    const link = document.createElement('a');
    link.href = cvPath;
    link.download = 'Khushal_Makwana_Resume.pdf';
    // Append the link to the document
    document.body.appendChild(link);

    // Trigger a click on the link to start the download
    link.click();
    // Remove the link from the document
    document.body.removeChild(link);
  };

  function call5() {
    document.body.scrollIntoView({
      behavior: "smooth"
    });

  }

  let closebtn = () => {
    document.getElementById('closebtn').click()
  }
  return (
    <>
      <nav className={`navbar ffffs navbar-expand-lg p-3 bgbgbg position-sticky top-${top}`} id='navbar' style={{background : backgroundColor}}>
        <div className="container">
          <a className="navbar-brand maintext fw-bold" href="#">
            .Portfolio
          </a>
          <button
            className="btn navbar-toggler me-0 nncvv"
            type="button"
            data-bs-toggle="offcanvas"
            data-bs-target="#offcanvasRight"
            aria-controls="offcanvasRight"
           
          >
            <i className="fa-solid fa-bars maintext"></i>
          </button>

          <div className="collapse navbar-collapse ms-auto" id="navbarSupportedContent">
            <ul className="navbar-nav me-0 ms-auto mb-2 mb-lg-0 d-flex align-items-center">
              <li className="nav-item">
                <a className="nav-link active" aria-current="page" href="#">
                  Home
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link active" aria-current="page" href="#about">
                  About
                </a>
              </li>
              <li className="nav-item">
                <a className="nav-link active" aria-current="page" href="#projects">
                  Projects
                </a>
              </li>
              {/* <li className="nav-item">
                <a className="nav-link active" aria-current="page" href="#">
                  Skills
                </a>
              </li> */}
              <li className="nav-item">
                <a className="nav-link active" aria-current="page" href="#contact">
                  Contact
                </a>
              </li>
              <li className="nav-item">
                <span className="nav-link active btn mainbtn" aria-current="page" onClick={downloadCV}>
                  Download CV
                </span>
              </li>
            </ul>
          </div>
        </div>
      </nav>
      <div
            className="offcanvas offcanvas-end nnf"
            tabIndex={-1}
            id="offcanvasRight"
            aria-labelledby="offcanvasRightLabel"
          >
            <div className="offcanvas-header">
              <div className='text-white fw-bold center'>
                <h5 className='mb-0 maintext fw-bold'>.Portfolio</h5>
              </div>
              <button

                id='closebtn'
                type="button"
                className="vfg me-0 center maintext"
                data-bs-dismiss="offcanvas"
                aria-label="Close"
              >
                <i className="fa-solid fa-xmark" style={{ fontSize: '20px' }}></i>
              </button>
            </div>
            <div className="offcanvas-body w-100 d-none" id='canvas'>
              <div className='center'>
                <img src="./images/dpimg.png" style={{ borderRadius: '50%', width: "160px", height: '160px' }} alt="" />
              </div>
              <div className='center'>
                <h3 className='text-white mt-3'>Khushal Makwana</h3>
              </div>
              <div className='center mt-2'>
                <div className='center'>
                  <Link to="/">
                    <i className="fa-brands fa-facebook"></i>
                  </Link>
                  <Link to="/">
                    <i className="fa-brands fa-twitter"></i>
                  </Link>
                  <Link to="/">
                    <i className="fa-brands fa-instagram"></i>
                  </Link>
                  <Link to="/">
                    <i className="fa-brands fa-linkedin"></i>
                  </Link>
                  <Link to="/">
                    <i className="fa-brands fa-github"></i>
                  </Link>
                </div>
              </div>
              <div className='center vdc mt-4'>
                <ul>
                  <li><a className='text-white' href="#Home" onClick={() => {call5();closebtn();}}><span className="  me-3 mt-3 fas fa-home"></span>Home</a></li>
                  <li><a className='text-white' href="#about" onClick={() => {closebtn();}}><span className="  me-3 mt-3 fa-solid fa-address-card"></span>About</a></li>
                  <li><a className='text-white' href="#projects" onClick={() => {call5();closebtn();}}><span className="  me-3 mt-3 fa-solid fa-diagram-project"></span>Projects</a></li>
                  {/* <li><Link className='text-white' to="/" onClick={() => {call5();closebtn();}}><span className=" me-3 mt-3 fa-solid fa-list-check"></span>Skills</Link></li> */}
                  <li><a className='text-white' href="#contact" onClick={() => {call5();closebtn();}}><span className=" me-3 mt-3 fa-regular fa-id-badge"></span>Contacts</a></li>
                  <li><Link className='text-white' to="/" onClick={downloadCV}><span className=" me-3 mt-3 fa-solid fa-download"></span>Download CV</Link></li>
                </ul>
              </div>
            </div>
          </div>
    </>
  )
}

export default Header



/*  */