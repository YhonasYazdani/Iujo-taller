#include <iostream>
#include <cmath>

using namespace std;

/* Integrantes: Jonas Dominguez y Heracle Sanchez */

/*Realice un programa que contenga un menú de opciones y en cada opción
ejecutara los siguientes requerimientos.
Un algoritmo que calcule el factorial de un número dado.
Un algoritmo que calcule el valor absoluto de un número dato.
Un algoritmo que calcule el promedio para cualquier cantidad de
elementos dados.
Se debe usar funciones
*/

// Función para calcular el factorial de un número
int factorial(int n) {
    if (n < 0) {
        return -1; // No existe el factorial de un número negativo
    } else if (n == 0) {
        return 1; // El factorial de 0 es 1
    } else {
        return n * factorial(n - 1);
    }
}

// Función para calcular el valor absoluto de un número
int valorAbsoluto(int n) {
    return abs(n);
}

// Función para calcular el promedio de una serie de elementos
double calcularPromedio(int* elementos, int cantidad) {
    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += elementos[i];
    }
    return static_cast<double>(suma) / cantidad;
}
