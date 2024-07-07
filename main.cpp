#include <iostream>
#include <cmath>

using namespace std;

/* Integrantes: Jonas Dominguez y Heracle Sanchez */

/*Realice un programa que contenga un men� de opciones y en cada opci�n
ejecutara los siguientes requerimientos.
Un algoritmo que calcule el factorial de un n�mero dado.
Un algoritmo que calcule el valor absoluto de un n�mero dato.
Un algoritmo que calcule el promedio para cualquier cantidad de
elementos dados.
Se debe usar funciones
*/

// Funci�n para calcular el factorial de un n�mero
int factorial(int n) {
    if (n < 0) {
        return -1; // No existe el factorial de un n�mero negativo
    } else if (n == 0) {
        return 1; // El factorial de 0 es 1
    } else {
        return n * factorial(n - 1);
    }
}

// Funci�n para calcular el valor absoluto de un n�mero
int valorAbsoluto(int n) {
    return abs(n);
}

// Funci�n para calcular el promedio de una serie de elementos
double calcularPromedio(int* elementos, int cantidad) {
    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += elementos[i];
    }
    return static_cast<double>(suma) / cantidad;
}
