// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 10:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include <string>
#include "Motor.h"

class Car
{
protected:
    std::string brand;
    std::string name;
    int model;
    int maxSpeed;
    Motor m;
public:
    //Constructors and destructor
    Car(){
        brand = " ";
        name = " ";
        model = 0;
        maxSpeed = 0;
    }
    Car(std::string brand, std::string name, int model, int maxSpeed){
        this->brand = brand;
        this->name = name;
        this->model = model;
        this->maxSpeed = maxSpeed;
    }
    ~Car(){}

    //Getters
    std::string getBrand(){return brand;}
    std::string getName(){return name;}
    int getModel(){return model;}
    int getMaxSpeed(){return maxSpeed;}

    //Setters
    void setBrand(std::string newBrand){
        brand = newBrand;
    }
    void setName(std::string newName){
        name = newName;
    }
    void setModel(int newModel){
        model = newModel;
    }
    void setMaxSpeed(int newMaxSpeed){
        maxSpeed = newMaxSpeed;
    }

    //Function
    void print();
};