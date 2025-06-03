/*
Problem 1: Sensor Calibration (Using std::array)
Objective: You are given fixed-size temperature readings from 3 different sensors. 
Each reading needs to be calibrated using a fixed calibration factor and 
then averaged per sensor.

Requirements:

Use std::array<std::array<float, 5>, 3> to store 3 sensors, each with 5 readings.

Apply a calibration factor to each sensor:

Sensor 1: +0.5
Sensor 2: -0.3
Sensor 3: +1.2
Compute and display the average calibrated reading for each sensor.

Challenge Level: Intermediate Focus Areas: Nested std::array, range-based loops, type safety.

std::array<std::array<float, 5>, 3> sensor_readings = {
    std::array<float, 5>{20.0, 21.0, 22.0, 20.5, 19.8},  // Sensor 1
    std::array<float, 5>{30.0, 30.2, 29.8, 30.1, 30.3},  // Sensor 2
    std::array<float, 5>{25.0, 26.0, 24.0, 25.5, 26.2}   // Sensor 3
};
*/

#include<array>
#include<iostream>

void sensor_avg(std::array<std::array<double, 5>, 3>& sR)
{
   /* Sensor 1: +0.5
        Sensor 2 : -0.3
        Sensor 3 : +1.2*/
    double s1[3] = { 0.5, -0.3, 1.2 };
    
    for(int i=0;i<sR.size();i++)
    {
        double sum = 0.0;
        for (int j = 0;j < sR[i].size();j++)
        {
            sR[i][j] += s1[i];
            sum += sR[i][j];
            //std::cout << sR[i][j];
        }
        float avg = sum / 5;
        std::cout << "sensor " << i + 1 <<" " << avg << std::endl;
    }


    /*for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 5;j++)
        {
            std::cout << sR[i][j] << " ";
        }
        std::cout << std::endl;
    }*/
   
}


int main()
{
    std::array<std::array<double, 5>, 3> sensor_readings = {
    std::array<double, 5>{20.0, 21.0, 22.0, 20.5, 19.8},  // Sensor 1
    std::array<double, 5>{30.0, 30.2, 29.8, 30.1, 30.3},  // Sensor 2
    std::array<double, 5>{25.0, 26.0, 24.0, 25.5, 26.2}   // Sensor 3
    };

    sensor_avg(sensor_readings);
    return 0;
}