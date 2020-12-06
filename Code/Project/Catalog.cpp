// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/6/2020
// Copyright © 2020. All rights reserved.

#include "Catalog.h"

void Catalog::addToCatalog(Products product){
    catalog.push_back(product);
    return;
}

void Catalog::printCatalog(){
    int size = catalog.size();
    std::cout << "Catalog" << std::endl;
    for (int i=0; i<size; i++){
        std::cout << "---------------------------------------------------------------" << std::endl;
        std::cout << "Product Number: " << i+1 << std::endl;
        std::cout << "Product Name: " << catalog.at(i).getProductName() << std::endl;
        std::cout << "Price: $" << catalog.at(i).getPrice() << std::endl;
        std::cout << "Description: " << catalog.at(i).getDescription() << std::endl;
        std::cout << "In Stock: " << catalog.at(i).getInStock() << std::endl;
        std::cout << "---------------------------------------------------------------" << std::endl;
    }
    return;
}