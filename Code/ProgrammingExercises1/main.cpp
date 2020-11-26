// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 11/6/2020
// Last modified: 11/13/2020 
// Copyright © 2020. All rights reserved.

#include <iostream>
#include "Exercises1.h"

using namespace std;
using namespace exercises1;

int main(){
// 1.
    cout << "Function 1: " << endl;
    int year;
    cout << "Enter year: ";
    cin >> year;
    leapYear(year);
    cout << endl;
 
// 2.
    cout << "Function 2: " << endl;
    cout << "Prime numbers between 1-1000 are: " << endl;
    primeNumbers();
    cout << endl;

// 3. 
    cout << "Function 3: " << endl;
    int num;
    cout << "Enter number: ";
    cin >> num;
    cout << endl;

    int result = divisors(num);
    perfectNum(result, num);
    cout << endl;

// 4. 
    cout << "Function 4: " << endl;
    //cout << "Total prime numbers between 1 and 1000000 is: " << totalPrimes();
    cout << endl;

// 5.
    cout << "Function 5: " << endl;
    cout << "Sum of multiples of 3 and 5 between 0 and 1000 is: " << multipleSum();
    cout << endl;

// 6. 
    cout << "Function 6: " << endl;
    int digit;
    cout << "Enter 5 digit number: ";
    cin >> digit;
    int array1[5];

    getDigit(array1, digit);
    cout << "Number by digit: ";
    printDigit(array1);
    cout << endl;

// 7.
    cout << "Function 7: " << endl;
    int digit2;
    cout << "Enter 6 digit number: ";
    cin >> digit2;
    int array2[6];

    getDigit(array2, digit2);
    cout << "Reversed number: ";  
    reverse(array2);
    cout << endl;

// 8.
    int num2;
    cout << "Enter number: ";
    cin >> num2;
    int digit3 = digitCount(num2);
    int count = 0;
    
    circular(num2, digit3, count);
    cout << num2;
    comparePrime(count, digit);

// 9.
    int total = 0;
    for (int i=1; i<=10; i++){
        if (circular(i)){
            total++;
        }
    }
    cout << "Total circular prime numbers under 1000000 is: " << total << endl;



    return 1;
}
