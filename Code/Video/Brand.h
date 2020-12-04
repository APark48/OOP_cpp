// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include <string>

class Brand
{
protected:
    std::string brand;
    std::string model;
public:
    //Constructors and destructor
    Brand(){
        brand = " ";
        model = " ";
    }
    Brand(std::string brand, std::string model){
        this->brand = brand;
        this->model = model;
    }
    ~Brand(){}

    //Getters
    std::string getBrand(){return brand;}
    std::string getModel(){return model;}

    //Setters
    void setBrand(std::string newBrand){
        brand = newBrand;
    }
    void setModel(std::string newModel){
        model = newModel;
    }
};