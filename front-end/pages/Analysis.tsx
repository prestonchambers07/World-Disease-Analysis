import React, { useState, useEffect } from "react";
import { Line } from "react-chartjs-2";
import { Chart as ChartJS, CategoryScale, LinearScale, PointElement, LineElement, Title, Tooltip, Legend } from "chart.js";

// Import your JSON data
import data from './data.json'; // Adjust path if necessary
import './Analysis.css';
ChartJS.register(
    CategoryScale,
    LinearScale,
    PointElement,
    LineElement,
    Title,
    Tooltip,
    Legend
);


export default function Analysis() {
    const [chartData, setChartData] = useState<any>(null);

    useEffect(() => {
      // Use the imported data directly
        const chartLabels = data.map((item: any) => item.label);
        const chartValues = data.map((item: any) => item.value);

        setChartData({
            labels: chartLabels,
        datasets: 
            [
            {
                label: "Example Dataset",
                data: chartValues,
                borderColor: "rgba(75,192,192,1)",
                borderWidth: 2,
                fill: true,
                
            },
            ],
        });
    }, []);

    if (!chartData) {
        return <div>Loading...</div>;
    }

    return (
            <div className="container">
                <div className="chart-container">

                <Line data={chartData} />

                </div>
            </div>
    );
}
