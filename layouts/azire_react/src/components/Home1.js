// import React, { useRef } from 'react'
import AOS from 'aos';
import 'aos/dist/aos.css';
import { useEffect } from 'react';
import OwlCarousel from 'react-owl-carousel';
import 'owl.carousel/dist/assets/owl.carousel.css';
import 'owl.carousel/dist/assets/owl.theme.default.css';
import { Link } from 'react-router-dom';
import Header from './Header';
import Footer from './Footer';

const Home1 = () => {

  useEffect(() => {
    AOS.init();
  }, [])

  function call5() {
    document.body.scrollIntoView({
      behavior: "smooth"
    });
  }

  const options = {
    responsive: {
      0: {
        items: 1,
      },
      600: {
        items: 2,
      },
      1000: {
        items: 3,
      },
    },
  };


  return (
    <>
    <Header  service="Service" team="Team" prising="Prising" testimonial="Testimonial"/>
      <section className="main">
        <div className="container py70">
          <div className="row">
            <div className="col-12 col-md-6 center">
              <div className="item">
                <h1 className="mt-24" data-aos="fade-right" data-aos-duration={1000}>
                  App, Business &amp; SaaS <br className="d-none d-lg-block" />
                  Landing Page Template
                </h1>
                <p className="mt-24" data-aos="fade-left" data-aos-duration={1400}>
                  Modern Design, Maximum Impact: Captivate your audience from the first click with our cutting-edge landing page template tailored for app and SaaS success.
                </p>
                <div
                  className="btns mt-28 "
                  data-aos="fade-right"
                  data-aos-duration={1800}
                >
                  <button className="btnss me-2">Download Now</button>
                  <button className="btnss b1">Learn More</button>
                </div>
              </div>
            </div>
            <div
              className="col-12 col-md-6 img mm-t"
              data-aos="zoom-in"
              data-aos-duration={1000}
            >
              <img src="image/intro-mobile.png" className="img-fluid" alt="" />
            </div>
          </div>
        </div>
      </section>

      <main id="Service">
        <p style={{ visibility: "hidden" }}>asdf</p>
        <section className="nngh font">
          <div className="container py70">
            <div className="row">
              <h2 className="text-center">Our Services</h2>
              <div className="shape mt-2" />
            </div>
            <div className="row mmt-5">
              <div className="col-12 col-sm-6 col-md-6 col-lg-4 hgy">
                <div data-aos="fade-up" data-aos-duration={800}>
                  <div className="card card-height">
                    <div className="card-body">
                      <div className=" icon4">
                        {" "}
                        <i className="fa-solid fa-gear" />
                      </div>
                      <h5 className="card-title mt-16">EASY TO USED</h5>
                      <p className="mt-12">
                        Effortless Navigation: Our user-centric design ensures an easy-to-use experience, making navigation a breeze for every visitor.
                      </p>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 col-md-6 col-lg-4 hgy">
                <div data-aos="fade-up" data-aos-duration={900}>
                  <div className="card card-height">
                    <div className="card-body">
                      <div className="icon4">
                        <i className="fa-solid fa-pen-nib" />
                      </div>
                      <h5 className="card-title mt-16">AWESOME DESIGN</h5>
                      <p className="mt-12">
                        Immerse users in an extraordinary digital journey with our landing page's awe-inspiring design and seamless, intuitive functionality.
                      </p>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 col-md-6 col-lg-4 hgy">
                <div data-aos="fade-up" data-aos-duration={1000}>
                  <div className="card card-height">
                    <div className="card-body">
                      <div className="icon4">
                        <i className="fa-solid fa-users" />
                      </div>
                      <h5 className="card-title mt-16">EASY TO CUSTOMIZE</h5>
                      <p className="mt-12">
                        Tailor effortlessly: Our platform offers an easy-to-customize experience, empowering you to create a personalized and unique presence.
                      </p>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 col-md-6 col-lg-4 hgy">
                <div data-aos="fade-up" data-aos-duration={1100}>
                  <div className="card card-height">
                    <div className="card-body">
                      <div className="icon4">
                        <i className="fa-solid fa-layer-group" />
                      </div>
                      <h5 className="card-title mt-16">UI/UX DESIGN</h5>
                      <p className="mt-12">
                        Optimized for brilliance: Elevate user satisfaction with our landing page, a fusion of intuitive UI and seamless UX design.
                      </p>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 col-md-6 col-lg-4 hgy">
                <div data-aos="fade-up" data-aos-duration={1200}>
                  <div className="card card-height">
                    <div className="card-body">
                      <div className="icon4">
                        <i className="fa-solid fa-mobile" />
                      </div>
                      <h5 className="card-title mt-16">APP DEVELOPMENT</h5>
                      <p className="mt-12">
                        {" "}
                        Innovate your vision: Our app development services bring ideas to life, ensuring cutting-edge solutions for success.
                      </p>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 col-md-6 col-lg-4 hgy">
                <div data-aos="fade-up" data-aos-duration={1300}>
                  <div className="card card-height">
                    <div className="card-body">
                      <div className="icon4">
                        <i className="fa-solid fa-rocket" />
                      </div>
                      <h5 className="card-title mt-16">USER FRIENDLY INTERFACE</h5>
                      <p className="mt-12">
                        Simplify user experience: Navigate seamlessly with our intuitive and user-friendly interface for a delightful digital journey.
                      </p>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </section>
      </main>

      <section className="nnh py60 font">
        <div className="container">
          <div className="row">
            <div className="col-12 col-md-6 center">
              <div className="" data-aos="fade-up" data-aos-duration={1000}>
                <div className="tag">
                  <span>Manage Statistics</span>
                </div>
                <div className=" mt-20">
                  <h2>Detail Statistics your Company</h2>
                </div>
                <p className="mt-20">
                  

                As of my last knowledge update in January 2022, I am developed by OpenAI, a leading artificial intelligence research laboratory. OpenAI focuses on advancing AI capabilities and ensuring its benefits are shared globally. For the latest and most accurate statistics, financial information, or updates about OpenAI, please refer to their official publications, reports, or reach out to them directly through their official communication channels.
                </p>
                <div className="mt-24">
                  <button className="btn7">Read More</button>
                </div>
              </div>
            </div>
            <div className="col-12 col-md-6 mm-t">
              <div data-aos="zoom-in" data-aos-duration={1000}>
                <img src="image/i-2.png" className="img-fluid" alt="" />
              </div>
            </div>
          </div>
        </div>
      </section>

      <section className="py60 jjgh font">
        <div className="container">
          <div className="row">
            <h2 className="text-center">Awesome Future</h2>
            <div className="shape mt-2" />
          </div>
          <div className="row mmt-5">
            <div className="col-md-12 col-lg-4 ">
              <div data-aos="fade-right" data-aos-duration={1000}>
                <div className="box1 d-flex">
                  <div className="text">
                    <h5>Bootstrap 5.3 Based</h5>
                    <p className="mt-12">
                    Elevate your web development with the versatility of our Bootstrap 5.3 based framework.
                    </p>
                  </div>
                  <span className="center">
                    <i className="fa-solid fa-rocket" />
                  </span>
                </div>
              </div>
              <div data-aos="fade-right" data-aos-duration={1200}>
                <div className="box1 d-flex">
                  <div className="text">
                    <h5>Full Responsive</h5>
                    <p className="mt-12">
                    Ensure a seamless experience on all devices with our fully responsive design approach.
                      <br className="d-none d-xl-block" /> industry.
                    </p>
                  </div>
                  <span className="center">
                    <i className="fa-solid fa-house-laptop" />
                  </span>
                </div>
              </div>
              <div data-aos="fade-right" data-aos-duration={1400}>
                <div className="box1 d-flex">
                  <div className="text">
                    <h5>HTML5,CSS3 &amp; SASS</h5>
                    <p className="mt-12">
                    Crafted with precision using HTML5, CSS3, and SASS for a modern, dynamic web experience.
                      <br className="d-none d-xl-block" /> industry.
                    </p>
                  </div>
                  <span className="center">
                    <i className="fa-solid fa-gear" />
                  </span>
                </div>
              </div>
            </div>
            <div className="col-md-12 col-lg-4 center " style={{ marginTop: 50 }}>
              <div data-aos="zoom-in" data-aos-duration={1000}>
                <img src="image/mobile.png" className="img-fluid" alt="" />
              </div>
            </div>
            <div className="col-md-12 col-lg-4">
              <div data-aos="fade-left" data-aos-duration={1000}>
                <div className="box1 d-flex">
                  <div className="text">
                    <h5>Modern Design</h5>
                    <p className="mt-12">
                    Experience elegance: Navigate effortlessly with our platform's sleek and modern design.
                      <br className="d-none d-xl-block" /> industry.
                    </p>
                  </div>
                  <span className="center">
                    <i className="fa-solid fa-swatchbook" />
                  </span>
                </div>
              </div>
              <div data-aos="fade-left" data-aos-duration={1200}>
                <div className="box1 d-flex">
                  <div className="text">
                    <h5>Multi-Purpose Template</h5>
                    <p className="mt-12">
                    Flexible template, ideal for various projects with its versatile design elements.
                      <br className="d-none d-xl-block" /> industry.
                    </p>
                  </div>
                  <span className="center">
                    <i className="fa-solid fa-layer-group" />
                  </span>
                </div>
              </div>
              <div data-aos="fade-left" data-aos-duration={1400}>
                <div className="box1 d-flex">
                  <div className="text">
                    <h5>Working Contact Form </h5>
                    <p className="mt-12">
                    Ensure connectivity with a reliable, fully functional working contact form integration.
                      <br className="d-none d-xl-block" /> industry.
                    </p>
                  </div>
                  <span className="center">
                    <i className="fa-regular fa-id-card" />
                  </span>
                </div>
              </div>
            </div>
          </div>
        </div>
      </section>


      <main id="Team">
        <p style={{ visibility: "hidden" }}>asdf</p>
        <section
          className="nnh5 py60 font"
          data-aos="fade-up"
          data-aos-duration={2000}
        >
          <div className="container">
            <div className="row">
              <h2 className="text-center">Meet Our Team</h2>
              <div className="shape mt-2" />
            </div>
            <div className="row mt-3 g-2">
              <div className="col-12 col-sm-6">
                <div className="card d-flex">
                  <div className="card-body flex4">
                    <div>
                      <img
                        src="./image/d11.jpg"
                        className="card-img-top iii"
                        alt="..."
                      />
                    </div>
                    <div className="text p-3 center">
                      <div>
                        <h5 className="card-title mt-10">David Smith</h5>
                        <h6 className="card-subtitle mb-2 text-body-secondary mt-8">
                          Front-end Developer
                        </h6>
                        <p className="card-text mt-10">
                        Crafting seamless user experiences, a front-end developer brings designs to life with precision and creativity.
                        </p>
                        <div className="icon mt-16">
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-facebook" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-twitter" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-instagram" />
                          </Link>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 font">
                <div className="card d-flex">
                  <div className="card-body flex4">
                    <div>
                      <img
                        src="image/d22.jpg"
                        className="card-img-top iii"
                        alt="..."
                      />
                    </div>
                    <div className="text p-3 center">
                      <div>
                        <h5 className="card-title mt-10">ERIC PETERSON</h5>
                        <h6 className="card-subtitle mb-2 text-body-secondary mt-8">
                          Product Designer
                        </h6>
                        <p className="card-text mt-10">
                        Innovative solutions, enhanced experiences—a product designer's touch for visual and functional excellence.
                        </p>
                        <div className="icon mt-16">
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-facebook" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-twitter" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-instagram" />
                          </Link>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 font">
                <div className="card d-flex">
                  <div className="card-body flex4">
                    <div>
                      <img
                        src="image/d33.jpg"
                        className="card-img-top iii"
                        alt="..."
                      />
                    </div>
                    <div className="text p-3 center">
                      <div>
                        <h5 className="card-title mt-10">DURWIN BABB</h5>
                        <h6 className="card-subtitle mb-2 text-body-secondary mt-8">
                          Lead Designer
                        </h6>
                        <p className="card-text mt-10">
                        Guiding creativity, shaping visions—a lead designer orchestrates excellence in visual and functional design endeavors.
                        </p>
                        <div className="icon mt-16">
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-facebook" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-twitter" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-instagram" />
                          </Link>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-12 col-sm-6 font">
                <div className="card d-flex">
                  <div className="card-body flex4">
                    <div>
                      <img
                        src="image/d44.jpg"
                        className="card-img-top iii"
                        alt="..."
                      />
                    </div>
                    <div className="text p-3 center">
                      <div>
                        <h5 className="card-title mt-10">MARIJN OTTE </h5>
                        <h6 className="card-subtitle mb-2 text-body-secondary mt-8">
                        Backend Developer
                        </h6>
                        <p className="card-text mt-10">
                        Architecting robust systems, a backend developer powers applications with precision and efficiency in coding mastery.
                        </p>
                        <div className="icon mt-16">
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-facebook" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-twitter" />
                          </Link>
                          <Link to="/" className="card-link">
                            <i className="fa-brands fa-instagram" />
                          </Link>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </section>
      </main>


      <main id="Prising">
        <p style={{ visibility: "hidden" }}>asdf</p>
        <section
          className="bbfh py60 font"
          data-aos="fade-up"
          data-aos-duration={1000}
        >
          <div className="container">
            <div className="row">
              <h2 className="text-center">Prising</h2>
              <div className="shape" />
            </div>
            <div className="row gx-5 mmt-5">
              <div className="col-sm-12 col-md-6 col-lg-4 cc">
                <div>
                  <div data-aos="flip-left" data-aos-duration={1000}>
                    <div className="bbhhm">
                      <div className="img text-center">
                        <i className="fa-brands fa-hive" />
                      </div>
                      <div className="content text-center">
                        <span className="color3">
                          $10 <span className="muted">/mo</span>
                        </span>
                        <h5>Pro</h5>
                        <p>1 USer</p>
                        <p>10Gb Storage</p>
                        <p>Email Support</p>
                        <p>1 Year Support</p>
                        <div className="text-center mt-24">
                          <button className="btn6">Buy Now</button>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-sm-12 col-md-6 col-lg-4 cc">
                <div className="bbhhm active">
                  <div className="img text-center">
                    <i className="fa-solid fa-shield-halved" />
                  </div>
                  <div className="content text-center">
                    <span className="color3">
                      $35 <span className="muted">/mo</span>
                    </span>
                    <h5>Plus</h5>
                    <p>10 USer</p>
                    <p>30Gb Storage</p>
                    <p>Priority Email Support</p>
                    <p>3 Year Support</p>
                    <div className="text-center mt-24">
                      <button className="btn6">Buy Now</button>
                    </div>
                  </div>
                </div>
              </div>
              <div className="col-sm-12 col-md-6 col-lg-4 mx-auto cc">
                <div>
                  <div data-aos="flip-right" data-aos-duration={1000}>
                    <div className="bbhhm">
                      <div className="img text-center">
                        <i className="fa-regular fa-star" />
                      </div>
                      <div className="content text-center">
                        <span className="color3">
                          $150 <span className="muted">/mo</span>
                        </span>
                        <h5>Primium</h5>
                        <p>Unlimited Users</p>
                        <p>Unlimited Storage</p>
                        <p>24/7 Suppoot</p>
                        <p>Lifetime Support</p>
                        <div className="text-center mt-24">
                          <button className="btn6">Buy Now</button>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </section>
      </main>


      <main id="Testimonial">
        <p style={{ visibility: "hidden" }}>asdf</p>
        <section
          className="asdfu py60 font"
          data-aos="fade-up"
          data-aos-duration={1000}
        >
          <div className="container">
            <div className="row">
              <h2 className="text-center text-white">Testimonials</h2>
              <div
                className="shape"
                style={{ backgroundColor: "white", marginBottom: 35 }}
              />
            </div>
            <div className="row">
              <OwlCarousel className='owl-theme' loop margin={10} nav={false} responsive={options.responsive}>

                <div className="item">
                  <div className="card">
                    <div className="card-body text-center">
                      <div className="mt-24">
                        <img src="image/i1.jpg" className="bbf" alt="" />
                      </div>
                      <h6 className="card-title mt-24">Fernanda Anaya</h6>
                      <p
                        style={{ color: "#333", fontSize: 14, fontWeight: 600 }}
                        className="mt-12"
                      >
                        Developer
                      </p>
                      <p className="card-text mt-16">
                      Collaborate with dedicated developers, creating user-centric solutions with passion, expertise, and a commitment to seamless digital experiences.
                      </p>
                    </div>
                  </div>
                </div>
                {/*  */}
                <div className="item">
                  <div className="card">
                    <div className="card-body text-center">
                      <div className="mt-24">
                        <img src="image/i2.jpg" className="bbf" alt="" />
                      </div>
                      <h6 className="card-title mt-24">Domminy Albert</h6>
                      <p
                        style={{ color: "#333", fontSize: 14, fontWeight: 600 }}
                        className="mt-12"
                      >
                        Design co.
                      </p>
                      <p className="card-text mt-16">
                      Unlock creativity and innovation with our design company, dedicated to crafting memorable and impactful visuals for your brand's success.
                      </p>
                    </div>
                  </div>
                </div>
                {/*  */}
                <div className="item">
                  <div className="card">
                    <div className="card-body text-center">
                      <div className="mt-24">
                        <img src="image/i3.jpg" className="bbf" alt="" />
                      </div>
                      <h6 className="card-title mt-24">Danial Sams</h6>
                      <p
                        style={{ color: "#333", fontSize: 14, fontWeight: 600 }}
                        className="mt-12"
                      >
                        Awesome Technology
                      </p>
                      <p className="card-text mt-16">
                      Explore the extraordinary with our user-centric approach, leveraging awesome technology to enhance experiences and simplify digital journeys.
                      </p>
                    </div>
                  </div>
                </div>
                {/*  */}
                <div className="item">
                  <div className="card">
                    <div className="card-body text-center">
                      <div className="mt-24">
                        <img src="image/i4.jpg" className="bbf" alt="" />
                      </div>
                      <h6 className="card-title mt-24">Alex Hales</h6>
                      <p
                        style={{ color: "#333", fontSize: 14, fontWeight: 600 }}
                        className="mt-12"
                      >
                        Designer
                      </p>
                      <p className="card-text mt-16">
                      Elevate aesthetics with our designer, weaving creativity and functionality for visually compelling and purposeful designs that captivate audiences effortlessly.
                      </p>
                    </div>
                  </div>
                </div>
                {/*  */}
                <div className="item">
                  <div className="card">
                    <div className="card-body text-center">
                      <div className="mt-24">
                        <img src="image/i5.jpg" className="bbf" alt="" />
                      </div>
                      <h6 className="card-title mt-24">David Smith</h6>
                      <p
                        style={{ color: "#333", fontSize: 14, fontWeight: 600 }}
                        className="mt-12"
                      >
                        Creative Head
                      </p>
                      <p className="card-text mt-16">
                      Empower your projects with our creative head, a visionary leader sculpting innovative solutions that redefine boundaries and inspire excellence.
                      </p>
                    </div>
                  </div>
                </div>
                {/*  */}
              </OwlCarousel>;
            </div>
          </div>
        </section>
      </main>


      <section
        className="register font"
        data-aos="fade-up"
        data-aos-duration={1000}
      >
        {/* <div className="container">
          <div className="row p-5 ">
            <div className="col-12 col-md-8">
              <h2>Get 30 Days Free trial</h2>
              <p>
                Praesent imperdiet, tellus et euismod euismod, risus lorem euismod
                erat, at finibus neque odio quis metus. Donec vulputate arcu quam.
              </p>
            </div>
            <div className="center col-12 col-md-4">
              <button className="btnn mt-2">Register Now</button>
            </div>
          </div>
        </div> */}
      </section>





      <button className="tep" style={{ display: "contents" }} onClick={call5}><i onClick={call5} className="fa-solid fa-arrow-up fa-beat-fade bbtt "></i></button>
    <Footer service="Service" team="Team" prising="Prising" testimonial="Testimonial"/>
    </>


  )
}

export default Home1