import React from 'react'
import { Link } from 'react-router-dom'
import { Link as Scroll } from 'react-scroll';

const Footer = (props) => {
    function call5() {
        document.body.scrollIntoView({
          behavior: "smooth"
        });
      }
    return (
        <>
       <footer className="py60oo font shadow">
                <div className="container">
                    <div className="row">
                        <div
                            className="col-12 col-sm-6 col-md-6 col-lg-3 mt-4"
                        >
                            <div className="logo">
                                <Link className="color d-flex text-decoration-none" to="/" onClick={call5}>
                                    <i
                                        className="fa-brands fa-dropbox color me-2"
                                        style={{ fontSize: 35 }}
                                    />
                                    <h4>Azire</h4>
                                </Link>
                            </div>
                            <div className="textt mt-4">
                                <p>
                                User-centric templates for apps, business, SaaS—optimize your online presence effortlessly.
                                </p>
                                <div className="icon mt-4">
                                    <Link to="https://www.facebook.com/">
                                        <i className="fa-brands fa-facebook"/>
                                    </Link>
                                    <Link to="https://twitter.com/">
                                        <i className="fa-brands fa-twitter"
                                           
                                        />
                                    </Link>
                                    <Link to="https://www.instagram.com/">
                                        <i
                                            className="fa-brands fa-instagram"
                                          
                                        />
                                    </Link>
                                    <Link to="https://www.linkedin.com/">
                                        <i
                                            className="fa-brands fa-linkedin"
                                          
                                        />
                                    </Link>
                                </div>
                            </div>
                        </div>
             
                        <div
                            className="col-12 col-sm-6 col-md-6 col-lg-3 mt-4"
                        >
                            <ul>
                                <li>
                                    <h5>Address</h5>
                                </li>
                              
                                <li>
                                    <i className="fa-solid fa-location-dot me-2"></i>Purvi Society, Hirabaugh , Surat
                                </li>
                                <li>
                                <i className="fa-solid fa-mobile-screen me-1"></i> +91 6355318232
                                </li>
                                <li>
                                <i className="fa-regular fa-envelope me-2"></i>kmakwana1255@gmail.com
                                </li>
                                
                                {/* <li><Link to="#">Employee Management</Link></li> */}
                            </ul>
                        </div>
                        <div
                            className="col-12 col-sm-6 col-md-6 col-lg-3 mt-4"
                        >
                            <ul>
                                <li>
                                    <h5>Quick Links</h5>
                                </li>
                               {props.service && 
                                <li>
                                    <Scroll to="Service" href=''>{props.service}</Scroll>
                                </li>
                               }
                                {props.team && 
                                <li>
                                    <Scroll to={props.team} href=''>{props.team}</Scroll>
                                </li>
                               }
                                {props.prising && 
                                <li>
                                    <Scroll to={props.prising} href=''>{props.prising}</Scroll>
                                </li>
                               }
                                {props.testimonial &&
                                 <li>
                                 <Scroll to={props.testimonial} href=''>{props.testimonial}</Scroll>
                               </li>
                               }
                                <li>
                                    <Link to="/Contact" onClick={call5} href="">Contact Us</Link>
                                </li>
                               
                               
                               
                            </ul>
                        </div>
                        <div
                            className="col-12 col-sm-6 col-md-6 col-lg-3 mt-4"
                        >
                            <ul>
                                <li>
                                    <h5>Customer Service</h5>
                                </li>
                                <li>
                                    <Link to="/Privacy" onClick={call5}>Privacy Policy</Link>
                                </li>
                               
                                <li>
                                    <Link to="/FAQs" onClick={call5}>FAQs</Link>
                                </li>
                               
                                <li>
                                    <Link to="/Terms" onClick={call5}>Term &amp; Conditions</Link>
                                </li>

                            </ul>
                        </div>
                        <div className="col-12">
                            <hr />
                            <div className="text-center"></div>
                            <p className="text-center">copyright@ 2023</p>
                        </div>
                    </div>
                </div>
            </footer>

        </>
    )
}

export default Footer