import React from 'react'
import { Link } from 'react-router-dom';
import { Link as Scroll } from 'react-scroll';


const Header = (props) => {


  function call5() {
    document.body.scrollIntoView({
      behavior: "smooth"
    });
  }

  const closeNav = () =>{
    document.getElementById("myNav").style.width = "0%";
  }
  const openNav = () =>{
    document.getElementById("myNav").style.width = "100%";
  }
 
  return (
    <>
  


  <header className='position-sticky top-0' style={{zIndex:"999"}}>
  <nav
    className="navbar navbar-expand-lg position-sticky top-0"
    style={{
      backgroundColor: "#fff",
      zIndex: 700,
      boxShadow: "0px 0px 20px 0px rgba(0, 0, 0, 0.1)"
    }}
  >
    <div className="container vv">
      <Link className="navbar-brand color center ff" to="/" onClick={call5}>
        <i
          className="fa-brands fa-dropbox color me-2"
          style={{ fontSize: 35 }}
        />
        <h4>Azire</h4>
      </Link>
      <button className="navbar-toggler color" type="button">
        <span style={{ fontSize: 30, cursor: "pointer" }} onClick={openNav}>
          ☰
        </span>
      </button>
      <div className="collapse navbar-collapse" id="navbarSupportedContent">
        <ul className="navbar-nav ms-auto mb-2 mb-lg-0">
          <li className="nav-item">
            <Link className="nav-link" aria-current="page" to="/" onClick={call5}>
              Home
            </Link>
          </li>
          { props.service && 
          <li className="nav-item">
            <Scroll className="nav-link" to={props.service} >
              {props.service}
            </Scroll> 
          </li>
          }

          { props.team &&
          <li className="nav-item">
            <Scroll className="nav-link" to={props.team}  >
              {props.team}
            </Scroll>
          </li>
          }

          { props.prising &&
          <li className="nav-item">
            <Scroll className="nav-link" to={props.prising}>
            {props.prising}
            </Scroll>
          </li>
          }

          { props.testimonial &&
          <li className="nav-item">
            <Scroll className="nav-link" to={props.testimonial}>
            {props.testimonial}
            </Scroll>
          </li>
          }
          { props.faq &&
          <li className="nav-item" >
            <Link className="nav-link" to="/FAQs" onClick={call5}>
            {props.faq}
            </Link>
          </li>
          }
           { props.terms &&
          <li className="nav-item" >
            <Link className="nav-link" to="/Terms" onClick={call5}>
            {props.terms}
            </Link>
          </li>
          }
           { props.privacy &&
          <li className="nav-item">
            <Link className="nav-link" to="/Privacy" onClick={call5}>
            {props.privacy}
            </Link>
          </li>
          }
          <li className="nav-item">
            <Link className="nav-link" to="/Contact" onClick={call5}>
              Contact
            </Link>
          </li>
        </ul>
      </div>
    </div>
  </nav>
  <section className="font ">
    <div id="myNav" className="overlay " style={{ zIndex: 999 }}>
      <div className="d-flex s-b p-10">
        {" "}
        <Link to="/" className="d-flex align-items-center" onClick={call5}>
          
          <i
            className="fa-brands fa-dropbox color me-2 "
            style={{ fontSize: 35 }}
          />
          <h4 className="color mb-0">Azire</h4>
        </Link>{" "}
        <Link className="closebtn" onClick={closeNav}>
          <i
            className="fa-solid fa-arrow-left color"
            style={{ fontSize: 25, marginRight: 11 }}
          />
        </Link>
      </div>
      <div className="overlay-content">
        <div className="container bbbf" style={{ margin: "auto" }}>
          <div
            className="accordion accordion shadow bg-white"
            style={{ padding: 15 }}
          >
            <div className="accordion-item">
           
              <Link to="/" onClick={closeNav}>
                <span>Home</span>
              </Link>
            </div>
             {props.service && 
            <div className="accordion-item">
               <Scroll to="Service" onClick={closeNav}>
               <span>Service</span>
             </Scroll>
            </div>
             }
              {props.team && 
            <div className="accordion-item">
              <Scroll to="Team" onClick={closeNav}>
                <span>Team</span>
              </Scroll>
            </div>
            }

            {props.prising &&
            <div className="accordion-item">
              <Scroll to="Prising" onClick={closeNav}>
                <span>Prising</span>
              </Scroll>
            </div>
            }
            {props.testimonial &&
            <div className="accordion-item">
              <Scroll to="Testimonial" onClick={closeNav}>
                <span>Testimonial</span>
              </Scroll>
            </div>
            }
            <div className="accordion-item">
              <Link to="/Contact" onClick={closeNav && call5}>
                <span>Contact Us</span>
              </Link>
            </div>
            <div className="accordion-item">
              <Link to="/Terms" onClick={closeNav && call5} >
                <span>Terms &amp; Conditions</span>
              </Link>
            </div>
            <div className="accordion-item">
              <Link to="/Privacy" onClick={closeNav && call5}>
                <span>Privacy &amp; Policy</span>
              </Link>
            </div>
            <div className="accordion-item">
              <Link to="/FAQs" onClick={closeNav && call5}>
                <span>FAQs</span>
              </Link>
            </div>
          </div>
        </div>
      </div>
    </div>
  </section>
</header>


    </>
  )
}

export default Header
