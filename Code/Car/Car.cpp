// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:55AM
// Copyright © 2020. All rights reserved.

#include <iostream>
#include "Car.h"

void Car::print()
{
    std::cout << "-------------------------------" << std::endl;
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Model: " << model << std::endl;
    std::cout << "Max Speed: " << maxSpeed << std::endl;
    std::cout << "Motor: " << motor << std::endl;
    std::cout << "Horse Power: " << horsePower << std::endl;
    std::cout << "-------------------------------" << std::endl;
}