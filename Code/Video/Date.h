// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include <string>
#include <iostream>

class Date
{
protected:
    int day;
    std::string month;
    int year;
public:
    //Constructors and destructor
    Date(){
        day = 0;
        month = " ";
        year = 0;
    }
    Date(int day, std::string month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    ~Date(){}

    //Getters
    int getDay(){return day;}
    std::string getMonth(){return month;}
    int getYear(){return year;}

    //Setters
    void setDay(int newDay){
        day = newDay;
    }
    void setMonth(std::string newMonth){
        month = newMonth;
    }
    void setYear(int newYear){
        year = newYear;
    }
};