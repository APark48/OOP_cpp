// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 12/5/2020
// Last modified: 12/6/2020
// Copyright © 2020. All rights reserved.

#include "Cart.h"

void Cart::addProduct(Catalog catalog){
    std::cout << "Enter product number: ";
    int position;
    std::cin >> position;
    cart.push_back(catalog.getProduct(position));
    std::cout << "Product added successfully to cart." << std::endl;
    return;
}

void Cart::purchaseProducts(){
    cart.clear();
}

int Cart::totalPrice(){
    int size = cart.size();
    int total = 0;
    for (int i=0; i<size; i++){
        total += cart.at(i).getPrice();
    }
    return total;
}

void Cart::printProducts(){
    std::cout << "Cart: " << std::endl;
    int size = cart.size();
    if (size == 0){
        std::cout << "Cart is EMPTY!" << std::endl;
        return;
    }
    else {
        for (int i=0; i<size; i++){
        std::cout << i+1 << ". " << cart.at(i).getProductName() << std::endl;  
        }
    }
    return;
}