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
    int price;
    std::string description;
    bool inStock;
    int stock;
public:
    //Constructors and destructor
    Products(){
        productName = " ";
        price = 0;
        description = " ";
        inStock = false;
        stock = 0;
    }
    Products(std::string productName, int price, std::string description, int stock){
        this->productName = productName;
        this->price = price;
        this->description = description;
        this->stock = stock;
        inStock = true;
    }
    ~Products(){}

    //Getters
    std::string getProductName(){return productName;}
    int getPrice(){return price;}
    std::string getDescription(){return description;}
    bool getInStock(){return inStock;}
    int getStock(){return stock;}

    //Setters
    void setProductName(std::string newProductName){
        productName = newProductName;
    }
    void setPrice(int newPrice){
        price = newPrice;
    }
    void setDescription(std::string newDescription){
        description = newDescription;
    }
    void setInStock(bool newInStock){
        inStock = newInStock;
    }
    void setStock(int newStock){
        stock = newStock;
    }
};
