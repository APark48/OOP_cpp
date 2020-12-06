// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/5/2020 9:14AM
// Copyright © 2020. All rights reserved.

#pragma once
#include "Products.h"
#include <vector>

class Cart
{
private:
    std::vector<Products> cart;
public:
    //Constructor and destructor
    Cart(){}
    ~Cart(){}

    //Functions
    void addProduct(Products product); //Function that takes a Products object @ parameter. Adds a product to the cart.
    float totalPrice(); //Function that returns total price.
    void printProducts(); //Function that prints all products in cart.
};