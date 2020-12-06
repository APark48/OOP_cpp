// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/5/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include "Products.h"
#include <vector>
#include <iostream>

class Catalog
{
private:
    std::vector<Products> catalog;
public:
    //Constructor and destructor
    Catalog(){};
    ~Catalog(){};

    //Getters
    Products getProduct(int position){
        return catalog.at(position).getProductName();
    }

    //Functions
    void addToCatalog(Products product); //Function that adds a product to the catalog
    void printCatalog(); //Function that prints all products in catalog.
};