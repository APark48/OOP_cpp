// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 11/6/2020
// Last modified: 11/13/2020 
// Copyright © 2020. All rights reserved.

#include "Exercises1.h"
#include <iostream>
#include <math.h>

namespace exercises1
{
/*1. Realiza un programa en C++ que imprime “Sí es bisiesto” o “No es bisiesto” si un valor numérico (variable int) 
que representa el valor de un año es bisiesto o no (tu asigna directamente el valor del año: int anio = 2020; ) */
    bool leapYear(int year)
    {
        if ((year%4 && year%100 && year%400) == 0){
            std::cout << year << " is a leap year." << std::endl; //Bisiesto
            return true;
        }
        else{
            std::cout << year <<  " is not a leap year." << std::endl; //No bisiesto
            return false;
        }
    }

/*2. Programa que imprime el número de números primos que hay entre 1 y 1000*/
    void primeNumbers()
    {
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

/*3. Programa que imprime si un número X es natural perfecto. 
Los números naturales perfectos son aquellos cuya suma de sus divisores 
(Ej. El número 6 es natural perfecto porque es igual a la suma de sus divisores 6 = 1+2+3)*/
    int divisors(int num)
    {
        int result = 0;
        // For loop to get divisors
        for (int i = 1; i<num; i++){
            if (num%i == 0){
                result += i;
            }
        }
        return result;
    }
    bool perfectNum(int result,int num)
    {
        if (result == num){
            std::cout << num <<" is a perfect number." << std::endl;
            return true;
        }
        else{
            std::cout << num <<" is not perfect number." << std::endl;
            return false;
        }
    }

/*4. Cuántos números naturales primos hay entre 1 y 1000000*/
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

/*5. Los múltiplos de 3 y 5 que están entre 1 y 10 son: 3,5,6 y 9. La suma de dichos números es igual a 23. 
Haz un programa que imprima la suma de los múltiplos de 3 y 5 que están entre 0 y 1000.*/
    int multipleSum()
    {
        int result = 0;
        for (int i=1; i<1000; i++){
            if (i%3 == 0 || i%5 == 0){
                result += i;
            }
        }
        return result;
    }

/*6. Crea un programa que imprima los dígitos (de manera individual) de un número 5 cifras*/
    void getDigit(int array[5],int num)
    {    
        while (num != 0){             // First iteration
            for (int i=0; i<5; i++){ // Ex. 123
                int digit = num%10;  // 123 % 10 = 3
                array[i] = digit;   // array[0] = 3
                num = num/10;       // 123/10 = 12
            }
        }
    }

    void printDigit(int array[5])
    {
        for (int i=4; i>=0; i--){
            std::cout << array[i] << " ";
        }
    }    

/*7. Invierte un número de 6 cifras. Ej. El número a invertir es 350039 y el resultado es 930053*/
    void getDigit2(int array[6],int num)
    {
        while (num != 0){             // First iteration
            for (int i=0; i<6; i++){ // Ex. 123
                int digit = num%10;  // 123 % 10 = 3
                array[i] = digit;   // array[0] = 3
                num /= 10;       // 123/10 = 12
            }
        }
    }

    void reverse(int array[6])
    {
        for (int i=0; i<6; i++){
            std::cout << array[i];
    }
}

/*8. Programa que indica si un valor X es un número circular primo. 
Los números circulares primos son aquellos que son números primos y que todas las rotaciones de dicho número también son primos. 
Ej. El número 197 es circular primo pq es primo y su primer rotación 971 también es primo, su segunda rotación 719 también es primo.*/
    int digitCount(int num)
    {
        int count = 0;
        while (num != 0){
            count++;
            num /= 10;
        }
        return count;
    }

    bool prime(int num)
    {
        bool flag = true;
        for (int i = 2; i <= num/2; i++){
            if (num % i == 0) {
                flag = false;
                break;           
            }
        }
        return flag;
    }

    int circular(int num, int digit, int &count)
    {
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

    bool comparePrime1(int count, int digit)
    {
        if (count == digit){
            std::cout << " is circular prime.";
            return true;
        }
        else{
            std::cout << " is not circular prime.";
            return false;
        }
    }
}

/*9. Programa que imprime cuántos números circulares primos hay debajo de 1000000*/
    bool comparePrime2(int count, int digit)
    {
        if (count == digit){
            return true;
        }
        else{
            return false;
        }
    }

    bool circular(int num)
    {
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

        if (!comparePrime2(count, digit)){
            return false;
        }
        return true;
    }
}



