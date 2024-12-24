import { Link } from "react-router-dom";
import ParticlesComponent from "./components/ParticleBg.tsx";
import "./HomePage.css"



export default function HomePage() {
    return (
        <div className="container">
            <ParticlesComponent id="particles" />
            <div className="content">
                <h1>Sample Text!</h1>
                <Link to="/">Future Button Maybe!?</Link>
            </div>
        </div>
    );
}