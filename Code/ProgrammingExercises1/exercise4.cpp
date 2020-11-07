//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

// Cuántos números naturales primos hay entre 1 y 1000000

#include <iostream>

//Function to count total prime numbers
int totalPrimes();

int main(){
    std::cout << "Total prime numbers between 1 and 1000000 is: " << totalPrimes();

    return 0;
}

int totalPrimes(){
    int total = 0;
    for (int i = 2; i <= 1000000; i++){
        bool flag = true;
        for (int j = 2; j<i; j++){
            if (i%j == 0){
                flag = false;
                break;
            }
        }
        if (flag)
            total++; 
    }
    return total;
}

