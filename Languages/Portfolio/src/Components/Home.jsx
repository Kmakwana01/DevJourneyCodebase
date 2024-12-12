import React, { useState, useRef, useEffect } from 'react'
import Header from './Header'
import './Home.scss'
import Typed from 'typed.js';
import './Custom.scss'
import AOS from 'aos';

const Home = () => {
    const [Active, setActive] = useState(1)
    console.log(process.env.BACKEND_URL);
    const [formData, setformData] = useState({
        name: '',
        email: '',
        phone: '',
        subject: '',
        message: '',
    })

    const click = (e) => {
        e.preventDefault()

        setformData({
            name: '',
            email: '',
            phone: '',
            subject: '',
            message: '',
        })
    }
    let handlechange = (e) => {
        console.log(e.target.value);

        let { name, value } = e.target
        setformData({
            ...formData,
            [name]: value
        })
    }

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
    const el = useRef(null);

    useEffect(() => {
        const typed = new Typed(el.current, {
            strings: ['Software Developer', 'MERN Stack Developer', 'Node.js Developer', 'Full Stack Developer'],
            typeSpeed: 100,
            loop: true,
            backSpeed: 50,
            backDelay: 2000
        });

        return () => {
            // Destroy Typed instance during cleanup to stop animation
            typed.destroy();
        };
    }, []);

    useEffect(() => {
        showProject(1);
        AOS.init();
    }, []);

    function showProject(projectNumber) {
        document.getElementsByClassName('ppr')[Active - 1].classList.remove('Active')
        document.getElementsByClassName('ppr')[projectNumber - 1].classList.add('Active')
        setActive(projectNumber)
        document.querySelectorAll('.project-content').forEach((content) => {
            content.style.display = 'none';
        });

        document.getElementById(`project${projectNumber}`).style.display = 'block';
    }

    return (
        <>
            <Header />
            <section className='firstpage'>
                <div className="container">
                    <div className="row py-md-5 py-5">
                        <div className="col-12 col-sm-12 col-md-6 py-4 center order-2 order-sm-1 order-md-1">
                            <div>
                                <div>
                                    <p className='l-s-10 text-center text-md-start' data-aos="fade-up" data-aos-duration="1300">WELCOME TO MY WORLD</p>
                                </div>
                                <div className='mt-3'>
                                    <h1 data-aos="fade-up"
                                        data-aos-anchor-placement="center-bottom" data-aos-duration="1500">Hi, I’m <span className='maintext' >Khushal Makwana</span> <br /><span ref={el} /></h1>
                                    <p className='mt-3' data-aos="fade-up"
                                        data-aos-anchor-placement="center-bottom" data-aos-duration="1800">As a MERN stack developer with a fresh perspective, I am eager to contribute my skills in MongoDB, Express.js, React.js, and Node.js to create innovative and efficient web solutions.</p>
                                    <a href="#about"  >
                                        <button className='aboutme mt-4' data-aos="fade-up-left" data-aos-duration="2000">About</button>
                                    </a>
                                </div>
                            </div>
                        </div>
                        <div className="col-12 col-sm-12 col-md-6 center order-1 order-sm-2 order-md-2">
                            <div className='w-50 imgbg' data-aos="zoom-in" data-aos-duration="1000">
                                <img src="./images/k12.jpg" className=" img-fluid mainimg" alt="" />
                            </div>
                        </div>
                    </div>
                </div>
            </section>

            <section className='skills'>
                <div className="container">
                    <div className="row">
                        <h5 className='maintext text-center  mb-5' data-aos="fade-up" data-aos-duration="800">SKILLS</h5>
                        <div className="col-12 col-md-6 col-lg-6 mx-auto">
                            <div className="row skillboxes">
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="900">
                                    <span className='skills_items'>
                                        <img src="	https://rainbowit.net/themes/inbio/wp-content/uploads/2021/08/icons-18.png" alt="" />
                                    </span>
                                    <p className='text-center'>HTML</p>

                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="1000">
                                    <span className='skills_items'>
                                        <img src="./images/css.png" alt="" />
                                    </span>
                                    <p className='text-center'>Css</p>
                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="1100">
                                    <span className='skills_items'>
                                        <img src="./images/bootstrap.png" alt="" />
                                    </span>
                                    <p className='text-center'>Bootstrap</p>
                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="1200">
                                    <span className='skills_items'>
                                        <img src="./images/javascript.png" alt="" />
                                    </span>
                                    <p className='text-center'>javascript</p>
                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="1300">
                                    <span className='skills_items'>
                                        <img src="	https://rainbowit.net/themes/inbio/wp-content/uploads/2021/08/icons-16.png
" alt="" />
                                    </span>
                                    <p className='text-center'>React.js</p>
                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="1400">
                                    <span className='skills_items'>
                                        <img src="./images/nodejs2.png" alt="" />
                                    </span>
                                    <p className='text-center'>Node.js</p>
                                </div>

                                <div className="col-3 col-md-3 col-lg-3 col-xl-2 ms-md-auto" data-aos="fade-up" data-aos-duration="1500">
                                    <span className='skills_items'>
                                        <img src="./images/express.png" alt="" />
                                    </span>
                                    <p className='text-center'>Express.js</p>
                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="1600">
                                    <span className='skills_items'>
                                        <img src="./images/mongodb.png" style={{ width: "45px", maxHeight: '40px' }} alt="" />
                                    </span>
                                    <p className='text-center'>MongoDB</p>
                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2" data-aos="fade-up" data-aos-duration="1700">
                                    <span className='skills_items'>
                                        <img src="./images/mysql.png" style={{ width: "50px", maxHeight: '55px' }} alt="" />
                                    </span>
                                    <p className='text-center'>MySQL</p>
                                </div>
                                <div className="col-3 col-md-3 col-lg-3 col-xl-2 me-md-auto" data-aos="fade-up" data-aos-duration="1800">
                                    <span className='skills_items'>
                                        <img src="./images/sass.png" style={{ width: "40px", maxHeight: '35px' }} alt="" />
                                    </span>
                                    <p className='text-center'>Sass</p>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </section>

            <section className='cards-1 pt-5'>
                <div className="container">
                    <div className="row">
                        <div className="col-12 col-sm-12 col-md-6 col-lg-4 p-3">
                            <div className='box11' data-aos="fade-up" data-aos-duration="800">
                                <div className="maincontent">
                                    <div className="icon1">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="80" height="80" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="feather feather-zap">
                                            <polygon points="13 2 3 14 12 14 11 22 21 10 12 10 13 2"></polygon>
                                        </svg>
                                    </div>
                                    <div className="content">
                                        <h4 className='mt-3'>Fast Performance</h4>
                                        <p className='mt-3'>Optimized for a smaller build size, faster dev compilation and dozens of other improvements.</p>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div className="col-12 col-sm-12 col-md-6 col-lg-4 p-3">
                            <div className='box11' data-aos="fade-up" data-aos-duration="1000">
                                <div className="maincontent">
                                    <div className="icon1">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="80" height="80" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="feather feather-smartphone">
                                            <rect x="5" y="2" width="14" height="20" rx="2" ry="2"></rect>
                                            <line x1="12" y1="18" x2="12.01" y2="18"></line>
                                        </svg>
                                    </div>
                                    <div className="content">
                                        <h4 className='mt-3'>Perfect Responsive</h4>
                                        <p className='mt-3'>Our theme is full Perfect for all device. You
                                            can visit our theme all device easily.</p>
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div className="col-12 col-sm-12 col-md-6 col-lg-4 p-3">
                            <div className='box11' data-aos="fade-up" data-aos-duration="1200">
                                <div className="maincontent">
                                    <div className="icon1">
                                        <svg xmlns="http://www.w3.org/2000/svg" width="80" height="80" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" class="feather feather-life-buoy">
                                            <circle cx="12" cy="12" r="10"></circle>
                                            <circle cx="12" cy="12" r="4"></circle>
                                            <line x1="4.93" y1="4.93" x2="9.17" y2="9.17"></line>
                                            <line x1="14.83" y1="14.83" x2="19.07" y2="19.07"></line>
                                            <line x1="14.83" y1="9.17" x2="19.07" y2="4.93"></line>
                                            <line x1="14.83" y1="9.17" x2="18.36" y2="5.64"></line>
                                            <line x1="4.93" y1="19.07" x2="9.17" y2="14.83"></line>
                                        </svg>

                                    </div>
                                    <div className="content">
                                        <h4 className='mt-3'>Consistent Formatting</h4>
                                        <p className='mt-3'>Maintained consistent formatting for code uniformity.
                                            Followed a standardized style guide for clarity.</p>
                                    </div>
                                </div>
                                <div id='about'></div>
                            </div>
                        </div>
                    </div>
                </div>
            </section>
            <section className='secondpage'>
                <div className="container">
                    <div className="row py-md-5 py-5">
                        <div className="col-12 col-sm-12 col-md-4 center">
                            <div className='w-100 imgbg' data-aos="zoom-in-right" data-aos-duration="1500" >
                                <div className='p-4 cccx'>
                                    <div className='o-h cczz'>
                                        <img src="./images/k4.jpg" className=" img-fluid mainimg" alt="" />
                                    </div>
                                </div>
                            </div>
                        </div>
                        <div className="col-12 col-sm-12 col-md-8 py-4 center">
                            <div data-aos="fade-up"
                                data-aos-anchor-placement="center-bottom" data-aos-duration="3000">
                                <div>
                                    <p className='l-s-10 text-center text-md-start maintext'>ABOUT ME</p>
                                </div>
                                <div className='mt-3'>
                                    <p className='mt-3'>
                                        As an ambitious and dedicated MERN Stack Developer, I bring a solid foundation in MongoDB, Express.js, React.js, and Node.js gained through coursework and hands-on projects. Eager to apply my skills in full-stack development to contribute innovative solutions. A quick learner with a passion for clean, efficient code and a commitment to staying updated on emerging technologies. Ready to bring a fresh perspective and enthusiasm for collaborative problem-solving to a dynamic development team.
                                    </p>
                                    <br />
                                    <p>Built dynamic websites with Node.js, emphasizing efficiency, scalability, and seamless functionality.</p>
                                    <button className='aboutme mt-4 mainbtn' onClick={downloadCV}>DOWNLOAD MY CV</button>
                                </div>
                            </div>
                        </div>
                        <div id='projects'></div>
                    </div>
                </div>
            </section>


            <section className='projectpage' >
                <div className="projects">
                    <div className="container mb-5">
                        <div className="row">
                            <p className='l-s-10 text-center text'>HERE IS A SAMPLE OF PROJECTS I'VE WORKED ON.</p>
                            <h1 className='text-center text-white mt-3'>My Latest Projects</h1>
                        </div>
                        <div className="row projectbtns mt-5 p-3 p-md-0">
                            <div className={`col-12 col-md-3 mx-auto center ppr `} onClick={() => showProject(1)} >
                                <button>
                                    React App
                                </button>
                            </div>
                            <div className={`col-12 col-md-3 mx-auto center ppr `} onClick={() => showProject(2)} >
                                <button>
                                    Landing Page
                                </button>
                            </div>
                            <div className={`col-12 col-md-3 mx-auto center ppr `} onClick={() => showProject(3)}>
                                <button>
                                    Web App
                                </button>
                            </div>
                            <div className={`col-12 col-md-3 mx-auto center ppr `} onClick={() => showProject(4)}>
                                <button>
                                    All Projects
                                </button>
                            </div>
                        </div>
                    </div>
                    <div id="project1" className="project-content animate__animated animate__fadeIn " >
                        <div className="container">
                            <div className="row center">
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-5">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn'>
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://azire.netlify.app/" className="project-link">
                                                    <img src="./images/azire.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://azire.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>FRONTEND DEVELOPMENT</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://azire.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>
                                                        Creating a responsive React app with dynamic components and interactive features. <span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div id="project2" className="project-content ">
                        <div className="container">
                            <div className="row center">
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-5">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn'>
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://rewy1.netlify.app/" className="project-link">
                                                    <img src="./images/rewy.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://rewy1.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>FRONTEND DESIGN</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://rewy1.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>

                                                        Developed responsive websites using HTML, CSS, and Bootstrap for optimal user experience.<span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-5">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn'>
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://e-commerce33.netlify.app/" className="project-link">
                                                    <img src="./images/uminoweb.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://e-commerce33.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>FRONTEND DESIGN</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://e-commerce33.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>

                                                        Engineered dynamic web interfaces with HTML, CSS, and Bootstrap for optimal user engagement.<span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                    <div id="project3" className="project-content ">
                        <div className="container">
                            <div className="row center">
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-5">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn'>
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://blog-app-01.netlify.app/" className="project-link">
                                                    <img src="./images/blogs.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://blog-app-01.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>MERN STACK APP</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://blog-app-01.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>
                                                        Designed and implemented MERN stack applications for robust functionality, optimal performance, and user-centric experiences.<span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>

                    <div id="project4" className="project-content project-content">
                        <div className="container">
                            <div className="row center">
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-4">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn' >
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://azire.netlify.app/" className="project-link">
                                                    <img src="./images/azire.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://azire.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>FRONTEND DEVELOPMENT</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://azire.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>
                                                        Creating a responsive React app with dynamic components and interactive features. <span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-4">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn'>
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://blog-app-01.netlify.app/" className="project-link">
                                                    <img src="./images/blogs.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://blog-app-01.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>MERN STACK APP</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://blog-app-01.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>
                                                        Designed and implemented MERN stack applications for robust functionality, optimal performance, and user-centric experiences.<span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                            <div className="row center">
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-5">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn'>
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://rewy1.netlify.app/" className="project-link">
                                                    <img src="./images/rewy.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://rewy1.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>FRONTEND DESIGN</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://rewy1.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>

                                                        Developed responsive websites using HTML, CSS, and Bootstrap for optimal user experience.<span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                                <div className="col-12 col-sm-12 col-md-6 col-lg-6 mb-5">
                                    <div className='projectpost p-4 animate__animated animate__fadeIn'>
                                        <div className="img w-100">
                                            <div className='position-relative'>
                                                <a href="https://e-commerce33.netlify.app/" className="project-link">
                                                    <img src="./images/uminoweb.png" alt="Project 1" style={{ width: '100%' }} />
                                                </a>

                                                <a href="https://e-commerce33.netlify.app/" className="project-link">
                                                    <i class="position-absolute fa-solid fa-arrow-up-right-from-square" style={{ top: '9px', right: '9px' }}></i>
                                                </a>

                                            </div>
                                        </div>
                                        <div className="content">
                                            <div className='d-flex justify-content-between mt-2'>
                                                <span className='maintext mt-2'>FRONTEND DESIGN</span>
                                            </div>
                                            <div className='mt-2'>
                                                <a href="https://e-commerce33.netlify.app/" className="project-link text-decoration-none">
                                                    <h5>

                                                        Engineered dynamic web interfaces with HTML, CSS, and Bootstrap for optimal user engagement.<span className='position-relative'><i class="position-absolute fa-solid fa-arrow-up-right-from-square animate__animated animate__fadeInBottomLeft"></i></span>
                                                    </h5>
                                                </a>
                                            </div>
                                        </div>
                                    </div>
                                </div>
                            </div>
                        </div>
                    </div>
                </div>
            </section>
            <div id='contact'></div>

            <section className='ContactPage'>
                <div className="container">
                    <div className="row">
                        <p className='l-s-10 text-center maintext '>Contact</p>
                        <h1 className='text-center text-white mt-2 mb-5'>Contact With Me</h1>
                    </div>
                    <div className="row">
                        <div className="col-12 col-lg-4 p-3">
                            <div className="nngj">
                                <div className='w-100 overflow-hidden mmd'>
                                    <img className='img-fluid' src="./images/kk2.jpg" alt="" />
                                </div>
                                <div className='content'>
                                    <h4 className='text-white mt-4'>Khushal Makwana</h4>
                                    <p className='mt-2'>Web Developer</p>
                                    <p className='mt-3'>I am available for freelance work. Connect with me via and call in to my account.</p>
                                    <p className='mt-3'>Phone : <span className='text-white'>+91 6355318232</span></p>
                                    <p className='mt-2'>Email : <span className='text-white'>kmakwana1255@gmail.com</span></p>
                                </div>
                            </div>
                        </div>
                        <div className="col-12 col-lg-8 p-3">
                            <form onSubmit={click}>
                                <div className="nnvh">
                                    <div className="row">
                                        <div className="col-12 col-md-6">
                                            <p>YOUR NAME</p>
                                            <input type="text" onChange={handlechange} value={formData.name} name='name' className='W-100' />
                                        </div>
                                        <div className="col-12 col-md-6">
                                            <p>PHONE NUMBER</p>
                                            <input type="text" onChange={handlechange} value={formData.phone} name='phone' className='W-100' />
                                        </div>
                                    </div>
                                    <div className="col-12">
                                        <p>EMAIL</p>
                                        <input type="text" onChange={handlechange} value={formData.email} name='email' className='W-100' />
                                    </div>
                                    <div className="col-12">
                                        <p>SUBJECT</p>
                                        <input type="text" onChange={handlechange} value={formData.subject} name='subject' className='W-100' />
                                    </div>
                                    <div className="col-12">
                                        <p>YOUR MESSAGE</p>
                                        <input type="textarea" onChange={handlechange} value={formData.message} name='message' className='W-100' />
                                    </div>
                                    <div className="col-12 mt-3">
                                        <input type="submit" className='submit W-100' />
                                    </div>
                                </div>
                            </form>
                        </div>
                    </div>
                    <div className="row p-4">
                        <hr />
                        <p className='text-center'>© 2023. Khushal Makwana PORTFOLIO</p>
                    </div>
                </div>
            </section>


        </>
    )
}

export default Home