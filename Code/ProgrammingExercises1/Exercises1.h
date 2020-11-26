// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 11/6/2020
// Last modified: 11/13/2020 
// Copyright © 2020. All rights reserved.


#pragma once

namespace exercises1
{
    bool leapYear(int year); // Function to print if year is leap year
    void primeNumbers(); // Function to print prime numbers between 1-1000
    int divisors(int num); // Function to get divisors
    bool perfectNum(int result, int num); // Function to print if number is perfect
    int totalPrimes(); //Function to return total prime numbers
    int multipleSum(); //Function to add sum of multiples of 3 and 5 between 0 and 1000
    void getDigit(int array[5],int num); //Function to get each individual digit from given number
    void printDigit(int array[5]); //Function to print individual digit
    void getDigit2(int array[6],int num); //Function to get each individual digit from given number
    void reverse(int array[6]); //Function to reverse number
    int digitCount(int num); //Function to return how many digits in are in given number
    bool prime(int num); //Function to return if number is prime
    
    //Functions to check if given number is circular prime:
    int circular(int num, int digit, int &count);
    bool comparePrime1(int count, int digit);
    
    //Functions to check total circular prime numbers between 1-1000000
    bool comparePrime2(int count, int digit); 
    bool circularCompare(int num);
    bool circular(int num);
}