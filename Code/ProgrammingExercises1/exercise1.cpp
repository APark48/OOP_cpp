//Developed by Alfredo Jeong Hyun Park (A01658259)
//Copyright © 2020. All rights reserved.

//Realiza un programa en C++ que imprime “Sí es bisiesto” o “No es bisiesto” si un valor numérico (variable int) 
//que representa el valor de un año es bisiesto o no (tu asigna directamente el valor del año: int anio = 2020; )

#include <iostream>

// Function to check if year is leap year
bool leapYear(int year);

int main(){
    int year;
    std::cout << "Enter year: ";
    std::cin >> year;

    leapYear(year);  

    return 0;
}

bool leapYear(int year){
    if ((year%4 && year%100 && year%400) == 0){
        std::cout << year << " is a leap year." << std::endl; //Bisiesto
        return true;
    }
    else{
        std::cout << year <<  " is not a leap year." << std::endl; //No bisiesto
        return false;
    }
}