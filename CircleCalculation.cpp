// Copyright (c) 2022 Andrew-Ten-Den All rights reserved
//
// Created by: Andrew-Ten-Den
// Created on: February 25 2022
// This program calculates the area and perimeter of a circle
//    with a radius of 5 mm

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter of a circle

    std::cout << "If a circle has a radius of: " << std::endl;
    std::cout << "5 mm" << std::endl;
    std::cout << std::endl;
    std::cout << "The Area is " << (M_PI * pow(5, 2)) << "mm²." << std::endl;
    std::cout << "The Perimeter is " << (5 * M_PI * 2) << "mm." << std::endl;
    std::cout << std::endl;
    std::cout << "Problem Solved" << std::endl;
}
