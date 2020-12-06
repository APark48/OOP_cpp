// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/6/2020
// Copyright © 2020. All rights reserved.

#pragma once
#include "Products.h"
#include "Catalog.h"
#include <vector>

class Cart
{
private:
    std::vector<Products> cart;
public:
    //Constructor and destructor
    Cart(){}
    ~Cart(){}

    //Getter
    int getSize(){return cart.size();}

    //Functions
    void addProduct(Catalog catalog); //Function that takes a Catalog object @ parameter. Adds a product to the cart.
    void purchaseProducts(); //Function that purchases products.
    int totalPrice(); //Function that returns total price.
    void printProducts(); //Function that prints all products in cart.
};