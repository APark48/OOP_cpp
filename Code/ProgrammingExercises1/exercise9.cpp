//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

// Programa que imprime cuántos números circulares primos hay debajo de 1000000

#include <iostream>
#include <math.h>

//Function to check how many digits in a number
int digitCount(int num);

//Function to check if number is prime
bool prime(int num);

//Function to check if given number is circular prime
bool comparePrime(int count, int digit);
bool circular(int num);

int main(){
    int total = 0;
    
    for (int i=1; i<=1000000; i++){
        if (circular(i)){
            total++;
        }
    }

    std::cout << "Total circular prime numbers under 1000000 is: " << total << std::endl;

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

bool comparePrime(int count, int digit){
    if (count == digit){
        return true;
    }
    else{
        return false;
    }
}

bool circular(int num){
    int digit = digitCount(num);
    int count = 0;

    for (int i=0; i < digit; i++){
        if (prime(num)){
            count++;
        }
        int rem = num%10;
        int div = num/10;
        num = (pow(10,digit-1)) * rem + div;
    }
    if (!comparePrime(count, digit)){
        return false;
    }
    return true;
}


