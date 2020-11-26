//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

//Programa que indica si un valor X es un número circular primo. Los números circulares primos son aquellos que son números primos 
//y que todas las rotaciones de dicho número también son primos. 
//Ej. El número 197 es circular primo pq es primo y su primer rotación 971 también es primo, su segunda rotación 719 también es primo.

#include <iostream>
#include <math.h>

//Function to check how many digits in a number
int digitCount(int num);

//Function to check if number is prime
bool prime(int num);

//Functions to check if given number is circular prime
int circular(int num, int digit, int &count);
bool comparePrime(int count, int digit);

int main(){
    int num;
    std::cout << "Enter number: ";
    std::cin >> num;
    int digit = digitCount(num);
    int count = 0;
    
    circular(num, digit, count);
    std::cout << num;
    comparePrime(count, digit);

    return 0;
}

int digitCount(int num){
    int count = 0;
    while (num != 0){
        count++;
        num /= 10;
    }
    return count;
}

bool prime(int num){
    bool flag = true;
    for (int i = 2; i <= num/2; i++){
        if (num % i == 0) {
            flag = false;
            break;           
        }
    }
    return flag;
}

int circular(int num, int digit, int &count){
    for (int i=0; i < digit; i++){
        if (prime(num)){
            count++;
        }
        int rem = num%10;
        int div = num/10;
        num = (pow(10,digit-1)) * rem + div;
    }
    return count;
}

bool comparePrime(int count, int digit){
    if (count == digit){
        std::cout << " is circular prime.";
        return true;
    }
    else{
        std::cout << " is not circular prime.";
        return false;
    }
}