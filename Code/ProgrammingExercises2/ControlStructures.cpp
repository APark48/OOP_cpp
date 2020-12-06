// Code written by Alfredo Jeong Hyun Park
// A01658259
// Written on 12/2/2020
// Last modified: 12/2/2020 9:14AM
// Copyright © 2020. All rights reserved.

#include <iostream>
#include <vector>
#include <time.h>

namespace controlstructures
{
    /*
    1. operaNumeros. Función que lea dos números por teclado y permita elegir entre 3 opciones en un
    menú:
        • <S> Mostrar una suma de los dos números
        • <R> Mostrar una resta de los dos números (el primero menos el segundo)
        • <M> Mostrar una multiplicación de los dos números
        • En caso de no introducir una opción válida, el programa informará con un letrero que no es
        correcta 
    */
    void numOperation(int num1, int num2)
    {
        int selection, answer;
        std::cout << "Choose operation to execute." << std::endl;
        std::cout << "1. Sum\n2. Substract\n3. Multiply" << std::endl;
        std::cout << "Your selection: ";
        std::cin >> selection;
        
        switch (selection){
        case 1:
            answer = num1 + num2;
            std::cout << answer << std::endl;
            break;
        case 2:
            answer = num1-num2;
            std::cout << answer << std::endl;
            break;
        case 3:
            answer = num1*num2;
            std::cout << answer << std::endl;
            break;
        default:
            std::cout << "Invalid number entered." << std::endl;
            break;
        }
        return;
    }

    /*
    2. numeroImpar. Función que lea un número impar por teclado. Si el usuario no introduce un número
    impar, debe repetirse el proceso hasta que lo introduzca correctamente.
    */
    void notEvenNumber()
    {
        int number;
        do {
            std::cout << "Enter a number that is not even: ";
            std::cin >> number;
        } while (number%2==0);

        std::cout << number << " is not an even number." << std::endl;
        return;
    }

    /*
    3. sumaPares. Función que sume todos los números enteros pares entre el 0 y el 100.
    */
    int evenSum()
    {
        int sum = 0;
        for (int i=0; i<=100; i++){
            if (i&2==0){
                sum += i;
            }
        }
        return sum;
    }

    /*
    4. mediaAritmetica. Función que pida al usuario cuantos números quiere introducir. Luego lea todos los
    números y realice una media aritmética.
    */
    int arithmeticMean(int size)
    {
        int count = 0;
        std::vector<int> numbers;
        int number, result;
        while (count < size){
            std::cout << "Enter number: ";
            std::cin >> number;
            std::cout << std::endl;
            numbers.push_back(number);
        }
        for (int i=0; i<size; i++){
            result += numbers.at(i);
        }

        return result/size;
    }

    /*
    5. numeroMagico. Inicia generando un número aleatorio entero positivo entre 1 y 100. Después, se
    solicita al usuario digite un número en el mismo rango. Dentro de un ciclo, se orientará al usuario con
    letreros “MÁS” o “MENOS” para llevarlo a introducir nuevos valores hasta que, en algún intento,
    introduzca el valor coincida con el valor aleatorio original. El código también deberá llevar la cuenta
    de intentos requeridos para llegar al valor buscado. Al terminar el ciclo, la función deberá desplegar:
    “Acertaste con el valor mágico X después de Y intentos”.
    */
    void magicNumber()
    {
        srand(time(NULL));
        int randomNumber = rand()%100+1;
        int tries = 0;
        int number;
        do {
            std::cout << "Guess the random number between 1-100: ";
            std::cin >> number;
            tries++;
        } while (number != randomNumber);
        
        std::cout << "You guessed the number " << randomNumber << " after " << tries << " tries." << std::endl;
        return;
    }

    /*
    6. conversionCelsiusFarenheit. Según los estándares internacionales, se manejan diferentes unidades
    de medición para manejo de temperaturas. Familiarízate con las más comunes y soluciona el siguiente
    problema. Se requiere convertir grados Celsius a grados Farenheit. El programa deberá solicitar al
    usuario:
        • El valor inicial en Celsius.
        • El número de conversiones que se harán.
        • El incremento entre los valores Celsius
    */

    void celciusToFahrenheit()
    {
        int totalCalculations;
        std::cout << "Enter how many calculations you wish to perform: ";
        std::cin >> totalCalculations;
        std::vector<float> celcius;
        std::vector<float> fahrenheit;

        for (int i=1; i<=totalCalculations; i++){
            float calculation, conversion;
            std::cout << "Enter calculation " << i << ": ";
            std::cin >> calculation;
            celcius.push_back(calculation);
            conversion = (9.0/5.0)*calculation+32;
            fahrenheit.push_back(conversion);
        }
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << "Convertions from Celsius to Fahrenheit: " << std::endl;
        int size = celcius.size();
        for (int i=0; i<size; i++){
            std::cout << "Celsius " << i+1 << ": " << celcius.at(i) << "°C" << std::endl;
            std::cout << "Fahrenheit " << i+1 << ": " << fahrenheit.at(i) << "°F" << std::endl; 
        }
        std::cout << "--------------------------------------------------------" << std::endl;

        return;
    }

    /*
    7. serieAritmetica. Una serie aritmética permite modelar diferentes problemas que pueden modelar
    fenómenos físicos y se define por:
        𝑎𝑎 + (𝑎𝑎 + 𝑑𝑑) + (𝑎𝑎 + 2𝑑𝑑) + (𝑎𝑎 + 3𝑑𝑑) + ⋯ + [(𝑎𝑎 + (𝑛𝑛 − 1)𝑑𝑑]
    Donde a es el primer término, d es la “diferencia común” y n es el número de términos que se van
    a sumar. Usando esta información, diseña e implementa una función en C++ que use un ciclo para
    desplegar cada término y para determinar la suma de la serie aritmética, si se tiene que a = 1, d =
    3 y n = 25. Para el desplegado de los términos, utiliza un formato similar a:
                                        Término i: 999
    donde i es el número del término que debe iniciar con 1 y 999 es el valor calculado del i-ésimo
    término. Al finalizar el ciclo, la función debe desplegar la suma total de la serie:
                                Valor total de la serie: 999
    No se piden datos al usuario.
    */

   /*
   8. mediasGeometricaArmonica. Además del promedio aritmético de un conjunto de números, se puede
    calcular una media geométrica y una media armónica. Este es otra medida que permite calcular
    aspectos de rendimiento.
    Usando estas fórmulas, escribe una función que continúe aceptando números (xi) tecleados por el usuario
    hasta que se introduzca el número 0. Calcula y despliega la media geométrica y la media armónica de los
    números introducidos. OJO, el dato 0 no debe ser utilizado en los cálculos.
   */
    void geometricHarmonicMean()
    {

        return;
    }

}
