// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 10:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include <string>

class Motor{
protected:
    std::string type;
    int horsePower;
public:
    //Constructors and destructor
    Motor(){
        type = " ";
        horsePower = 0;
    }
    Motor(std::string type){
        this->type = type;
        horsePower = 0;
    }
    ~Motor(){}

    //Getters
    std::string getType(){return type;}
    int getHorsePower(){return horsePower;}

    //Setters
    void setType(std::string newType){
        type = newType;
    }
    void setHorsePower(int newHorsePower){
        horsePower = newHorsePower;
    }
};