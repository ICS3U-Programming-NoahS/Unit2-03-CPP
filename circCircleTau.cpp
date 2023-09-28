// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date:  Sept. 27th, 2023
// This program asks the user for the radius of
// a circle in cm. It then calculates and displays
// the circumference using TAU.
#include <iostream>

int main() {
    // declare constants
    const float TAU = 6.28;

    // declare variables
    float radius, circumference;

    // get the radius from the user
    std::cout << "Enter the radius (cm): ";
    std::cin >> radius;

    // calculate the circumference using tau
    circumference = TAU * radius;

    // display the circumference to the user
    std::cout << "";
    std::cout << "Circumference = " << circumference << " cm" << std::endl;
}
