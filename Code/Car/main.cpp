// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:44AM
// Copyright © 2020. All rights reserved.

#include "Electric.h"
#include "Gasoline.h"
using namespace std;

int main(){
    Electric car1("Toyota", "Prius", 2020, 70, 96);
    car1.print();

    Gasoline car2("Honda", "Civic", 2020, 200, 158);
    car2.print();

    return 1;
}