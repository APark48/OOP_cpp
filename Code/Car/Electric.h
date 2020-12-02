// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:44AM
// Copyright © 2020. All rights reserved.

#pragma once
#include <iostream>
#include "Car.h"

class Electric:public Car
{
public:
    //Constructors and destructor
    Electric(){
        brand = " ";
        name = " ";
        model = 0;
        maxSpeed = 0;
        motor = "Electric";
    }
    Electric(std::string brand, std::string name, int model, int maxSpeed){
        this->brand = brand;
        this->name = name;
        this->model = model;
        this->maxSpeed = maxSpeed;
        motor = "Electric";
    }
    ~Electric(){}
};