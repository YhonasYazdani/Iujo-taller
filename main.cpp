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
        return -1;
    } else if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Función para calcular el valor absoluto
int valorAbsoluto(int n) {
    return abs(n);
}

// Función para calcular el promedio
double calcularPromedio(int* elementos, int cantidad) {
    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += elementos[i];
    }
    return static_cast<double>(suma) / cantidad;
}

int main() {
    int opcion;
    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Calcular factorial de un número" << endl;
        cout << "2. Calcular valor absoluto de un número" << endl;
        cout << "3. Calcular promedio de elementos" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                cout << "Ingrese un número para calcular su factorial: ";
                cin >> num;
                int resultado = factorial(num);
                if (resultado == -1) {
                    cout << "No existe el factorial de un número negativo." << endl;
                } else {
                    cout << "El factorial de " << num << " es: " << resultado << endl;
                }
                break;
            }
            case 2: {
                int num;
                cout << "Ingrese un número para calcular su valor absoluto: ";
                cin >> num;
                int resultado = valorAbsoluto(num);
                cout << "El valor absoluto de " << num << " es: " << resultado << endl;
                break;
            }
            case 3: {
                int cantidad;
                cout << "Ingrese la cantidad de elementos: ";
                cin >> cantidad;
                int* elementos = new int[cantidad];
                for (int i = 0; i < cantidad; i++) {
                    cout << "Ingrese el elemento " << i + 1 << ": ";
                    cin >> elementos[i];
                }
                double promedio = calcularPromedio(elementos, cantidad);
                cout << "El promedio de los elementos ingresados es: " << promedio << endl;
                delete[] elementos;
                break;
            }
            case 4: {
                cout << "Saliendo del programa." << endl;
                break;
            }
            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}
