//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

//Programa que imprime si un número X es natural perfecto. 
//Los números naturales perfectos son aquellos cuya suma de sus divisores 
//(Ej. El número 6 es natural perfecto porque es igual a la suma de sus divisores 6 = 1+2+3)

#include <iostream>

//Function to get divisors
int divisors(int num);

//Function to check if number is perfect
bool perfectNum(int result, int num);

int main(){
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;

    int result = divisors(num);
    perfectNum(result, num);
    
    return 0;
}

int divisors(int num){
    int result = 0;
    // For loop to get divisors
    for (int i = 1; i<num; i++){
        if (num%i == 0){
            result += i;
        }
    }
    return result;
}

bool perfectNum(int result,int num){
    // To check if number is perfect
    if (result == num){
        std::cout << num <<" is a perfect number." << std::endl;
        return true;
    }
    else{
        std::cout << num <<" is not perfect number." << std::endl;
        return false;
    }
}