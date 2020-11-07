//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

// Crea un programa que imprima los dígitos (de manera individual) de un número 5 cifras

#include <iostream>

//Function to get each individual digit from given number
void getDigit(int array[5],int num);

//Function to print individual digit
void printDigit(int array[5]);

int main(){
    int num;
    std::cout << "Enter 5 digit number: ";
    std::cin >> num;
    int array[5];

    getDigit(array, num);
    std::cout << "Number by digit: ";
    printDigit(array);
    
    return 0;
}

void getDigit(int array[5],int num){
    while (num != 0){             // First iteration
        for (int i=0; i<5; i++){ // Ex. 123
            int digit = num%10;  // 123 % 10 = 3
            array[i] = digit;   // array[0] = 3
            num = num/10;       // 123/10 = 12
        }
    }
}

void printDigit(int array[5]){
    for (int i=4; i>=0; i--){
        std::cout << array[i] << " ";
    }
}