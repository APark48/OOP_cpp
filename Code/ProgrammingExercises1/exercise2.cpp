//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

// Programa que imprime el número de números primos que hay entre 1 y 1000

#include <iostream>
#include <math.h>

// Function to print prime numbers between 1-1000
void primeNumbers();

int main(){
    std::cout << "Prime numbers between 1-1000 are: " << std::endl;
    primeNumbers();

    return 0;
}

void primeNumbers(){
    for (int i = 2; i <= 1000; i++){
        bool flag = true;
        for (int j = 2; j<i; j++){
            if (i%j == 0){
                flag = false;
                break;
            }
        }
        if (flag)
            std::cout << i << " "; 
    }
}