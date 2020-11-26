//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

//Los múltiplos de 3 y 5 que están entre 1 y 10 son: 3,5,6 y 9. La suma de dichos números es igual a 23. 
//Haz un programa que imprima la suma de los múltiplos de 3 y 5 que están entre 0 y 1000.

#include <iostream>

//Function to add sum of multiples of 3 and 5 between 0 and 1000
int multipleSum();

int main(){
    std::cout << "Sum of multiples of 3 and 5 between 0 and 1000 is: " << multipleSum();

    return 0;
}

int multipleSum(){
    int result = 0;
    for (int i=1; i<1000; i++){
        if (i%3 == 0 || i%5 == 0){
            result += i;
        }
    }
    return result;
}