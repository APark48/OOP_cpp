// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include "Date.h"
#include "Brand.h"

class Memory: public Brand, public Date
{
protected:
    int capacity;
    std::string cardType;
    int cardSpeed;

public:
    //Constructors and destructor
    Memory(){
        capacity = 0;
        cardType = " ";
        brand = " ";
        model = " ";
        cardSpeed = 0;
        day = 0;
        month = " ";
        year = 0;
    }
    Memory(int capacity, std::string cardType, std::string brand ,std::string model, int cardSpeed, int day, std::string month, int year){
        this->capacity = capacity;
        this->cardType = cardType;
        this->brand = brand;
        this->model = model;
        this->cardSpeed = cardSpeed;
        this->day = day;
        this->month = month;
        this->year = year;
    }
    ~Memory(){}

    //Getters
    int getCapacity(){return capacity;}
    std::string getCardType(){return cardType;}
    int getCardSpeed(){return cardSpeed;}

    //Setters
    void setCapacity(int newCapacity){
        capacity = newCapacity;
    }
    void setCardType(std::string newCardType){
        cardType = newCardType;
    }
    void setCardSpeed(int newCardSpeed){
        cardSpeed = newCardSpeed;
    }
};