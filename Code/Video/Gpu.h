// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include "Date.h"
#include "Brand.h"

class Gpu:public Date, public Brand
{
protected:
    int gpuSpeed;
    std::string gpuType;
public:
    //Constructors and destructor
    Gpu(){
        brand = " ";
        model = " ";
        gpuSpeed = 0;
        gpuType = " ";
        day = 0;
        month = " ";
        year = 0;
    }
    Gpu(std::string brand, std::string model, int gpuSpeed, std::string gpuType, int day, std::string month, int year){
        this->brand = brand;
        this->model = model;
        this->gpuSpeed = gpuSpeed;
        this->gpuType = gpuType;
        this->day = day;
        this->month = month;
        this->year = year;
    }
    ~Gpu(){}

    //Getters
    int getGpuSpeed(){return gpuSpeed;}
    std::string getGpuType(){return gpuType;}

    //Setters
    void setGpuSpeed(int newGpuSpeed){
        gpuSpeed = newGpuSpeed;
    }
    void setGpuType(std::string newGpuType){
        gpuType = newGpuType;
    }
};