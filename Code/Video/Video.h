// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include "Memory.h"
#include "Gpu.h"
#include "Date.h"
#include "Brand.h"

class Video
{
private:
    Brand bM;
    float price;
    int megaPixels;
    Memory memory;
    Gpu gpu;
    Date recordingDate;
public:
    //Constructors and destructor
    Video(){
        bM.setBrand(" ");
        bM.setModel(" ");
        price = 0.0;
        megaPixels = 0;
        recordingDate.setDay(0);
        recordingDate.setMonth(" ");
        recordingDate.setYear(0);
    }
    Video(std::string brand, std::string model, float price, int megaPixels, Memory memory,int day, std::string month, int year){
        bM.setBrand(brand);
        bM.setModel(model);
        this->price = price;
        this->megaPixels = megaPixels;
        this->memory = memory;
        recordingDate.setDay(day);
        recordingDate.setMonth(month);
        recordingDate.setYear(year);
    }
    ~Video(){}

    //Print
    void printCameraInfo();
};