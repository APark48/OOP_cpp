// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/5/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include <string>

class Products
{
private:
    std::string productName;
    float price;
    std::string description;
public:
    //Constructors and destructor
    Products(){
        productName = " ";
        price = 0.00;
        description = " ";
    }
    Products(std::string productName, float price, std::string description){
        this->productName = productName;
        this->price = price;
        this->description = description;
    }
    ~Products(){}

    //Getters
    std::string getProductName(){return productName;}
    float getPrice(){return price;}
    std::string getDescription(){return description;}

    //Setters
    void setProductName(std::string newProductName){
        productName = newProductName;
    }
    void setPrice(float newPrice){
        price = newPrice;
    }
    void setDescription(std::string newDescription){
        description = newDescription;
    }
};
