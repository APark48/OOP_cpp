// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/6/2020
// Copyright © 2020. All rights reserved.

#include "Store.h"

void Store::showCatalog(){
    catalog.printCatalog();
    return;
}

void Store::purchase(){
    char decision;
    std::cout << "Purchase all products in your cart? (Y/N): ";
    std::cin >> decision;
    decision = std::tolower(decision);

    if (decision == 'y'){
        cart.purchaseProducts();
        std::cout << "Every product purchased successfully." << std::endl;
    }
}