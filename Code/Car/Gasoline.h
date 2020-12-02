// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 10:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include "Car.h"

class Gasoline:public Car
{
public:
    //Constructors and destructor
    Gasoline(){ 
        brand = " ";
        name = " ";
        model = 0;
        maxSpeed = 0;
        m.setType("Gasoline");
    }
    Gasoline(std::string brand, std::string name, int model, int maxSpeed, int horsePower){
        this->brand = brand;
        this->name = name;
        this->model = model;
        this->maxSpeed = maxSpeed;
        m.setType("Gasoline");
        m.setHorsePower(horsePower);
    }
    ~Gasoline(){}
};