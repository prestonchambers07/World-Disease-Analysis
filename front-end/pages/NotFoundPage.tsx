import { Link } from "react-router-dom";
import React from "react";

export default function NotFoundPage() {
    return (
        <div className="flex flex-col gap-2">
            <h1>
                404 Not Found 
            </h1>
            <h2>
                <Link to="/">Home from Link</Link>
            </h2>
        </div>
    );
}