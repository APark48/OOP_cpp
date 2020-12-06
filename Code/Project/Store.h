// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/6/2020
// Copyright © 2020. All rights reserved.

#pragma once
#include "Cart.h"
#include "Catalog.h"
#include "Products.h"

class Store
{
private:
    Cart cart;
    Catalog catalog;
public:
    //Constructor and Destructor
    Store(){}
    Store(Cart cart, Catalog catalog){
        this->cart = cart;
        this->catalog = catalog;
    }
    ~Store(){}

    //Functions
    void showCatalog();//Function that shows all products in store.
    void purchase(); //Function that purchases a product in the cart.
};

