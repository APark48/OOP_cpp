//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

//Invierte un número de 6 cifras. Ej. El número a invertir es 350039 y el resultado es 930053

#include <iostream>

//Function to get each individual digit from given number
void getDigit(int array[6],int num);

//Function to reverse number
void reverse(int array[6]);

int main(){
    int num;
    std::cout << "Enter 6 digit number: ";
    std::cin >> num;
    int array[6];

    getDigit(array, num);
    std::cout << "Reversed number: ";  
    reverse(array);

    return 0;
}

void getDigit(int array[6],int num){
    while (num != 0){             // First iteration
        for (int i=0; i<6; i++){ // Ex. 123
            int digit = num%10;  // 123 % 10 = 3
            array[i] = digit;   // array[0] = 3
            num /= 10;       // 123/10 = 12
        }
    }
}

void reverse(int array[6]){
    for (int i=0; i<6; i++){
        std::cout << array[i];
    }
}