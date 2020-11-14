// Code written by Alfredo Jeong Hyun Park 
// A01658259
// Written on 11/13/2000
// Last modified: 11/13/2000 6:02PM
// Copyright © 2020. All rights reserved.

#include <iostream>
#include <time.h>
#include <string>
#include "DataStructures.h"

namespace datastructures
{
/* 1. Declara y asigna valores a un arreglo dimensión 10 que almacena valores enteros. 
Muestra en pantalla los valores y los índices del arreglo. 
Recuerda que el índice es un número entero que representa la posición de cada elemento dentro del arreglo. 
Su primer valor es cero y el último es uno menos el tamaño del arreglo. */
    void array()
    {
        int array[10] = {10,20,30,40,50,60,70,80,90,100};
        int count = 0;

        for (int i=0; i < 10; i++){
            std::cout << "Value:   " << array[i] << std::endl;
            std::cout << "Position: " << count << std::endl;
            std::cout << std::endl;
            count++;
        }

        return;
    }

/* 2. Declara un arreglo de tamaño 10 que almacene números enteros. 
Solicita los valores al usuario. Suma y despliega el contenido de todo el arreglo. 
Prueba utilizando += y no olvides inicializar en cero el valor de la variable que va a almacenar la suma acumulada. */
    void sumArray(){
        int array[10] = {};
        int totalSum = 0;

        // Taking user values
        std::cout << "Enter integer numbers: ";

        for (int i=0; i<10; i++){
            int num;
            std::cin >> num;
            array[i] = num;
        }

        // Printing values and position
        for (int i=0; i<10; i++){
            totalSum += array[i];
            std::cout << "Value at " << i << " position is: " << array[i] << std::endl;
        }
        std::cout << "Sum of total values is: " << totalSum << std::endl;

        return;
    }

/*3. Declara un arreglo de tamaño 50 y llénalo con números aleatorios entre 1 y 200. 
Calcula y muestra el valor promedio del arreglo usando formato con un máximo de 2 dígitos. 
El desplegado deberá ser: “El promedio de los valores aleatorios es: 999.99”. */
    int randomAverage()
    {
        srand(time(NULL));
        int array[50];
        int sum;

        for (int i=0; i<50; i++){
            array[i] = (rand()%200)+1;            
        }
        for (int i=0; i<50; i++){
            sum += array[i];
        }

        return sum/2;
    }

/* 4. Declara y llena con valores aleatorios entre 0 y 500 un arreglo de 25 valores enteros. 
Muestra el valor y la posición del número más grande del arreglo con un desplegado similar a: 
“El valor más grande el arreglo es X y está en la posición Y”. 
Para validar tu resultado, despliega el contenido de todo el arreglo en formato valor, posición, colocando cada dato en un renglón. 
Tip: al inicio, asigna de manera arbitraria como valor de mayor al 
primer elemento del arreglo y de manera iterativa recorre el arreglo y actualiza el valor de mayor cuando sea necesario. */
    void largestNum()
    {
        srand(time(NULL));
        int array[25];
        int maxNum = 0;
        int maxPosition = 0;

        for (int i = 0; i<25; i++){
            array[i] = rand()%500+1;
            if (array[i] > array[i-1]){
                maxNum = array[i];
                maxPosition = i;
            }
        }
        
        std::cout << "Largest number in array is " << maxNum << " in position " << maxPosition << std::endl;
    }


/* 5. Declara la variable frase tipo string e inicialízalo con “Pensamiento computacional orientado a objetos”. 
Usando esta variable:
a. Despliega su tamaño o longitud. “El tamaño de frase es: X”.
b. Despliega cada caracter que compone a frase en un renglón.
Por definición, una variable tipo cadena o string es un arreglo de caracteres. */
    void oop(){
        int size = 0;
        std::string phrase = "Pensamiento computacional orientado a objetos";
        for (int i=0; i<phrase.size(); i++){
            std::cout << phrase[i] << std::endl;
            size++;
        }
        std::cout << "Size of phrase is: " << size << std::endl;
    }
}