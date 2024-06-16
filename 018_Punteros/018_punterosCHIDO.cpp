
#include <iostream>
    #include <cstdlib>
    #include <ctime>


int main() {
    const int filas = 2;
    const int columnas = 3;
    int matriz[filas][columnas];

    // Entrada de datos por parte del usuario
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    // Mostrar la matriz
    std::cout << "La matriz ingresada es: " << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Matriz dinamica 
   
   
        std::srand(std::time(nullptr));  // Inicializar la semilla para números aleatorios

        int filas2, columnas2;
        std::cout << "Ingrese el número de filas de la matriz: ";
        std::cin >> filas2;
        std::cout << "Ingrese el número de columnas de la matriz: ";
        std::cin >> columnas2;

        // Crear una matriz dinámica
        int **matriz2 = new int*[filas2];
        for (int i = 0; i < filas2; ++i) {
            matriz2[i] = new int[columnas2];
        }

        // Llenar la matriz
        if (filas2 > 3 || columnas2 > 3) {
            std::cout << "Llenando la matriz automáticamente con valores aleatorios." << std::endl;
            for (int i = 0; i < filas2; ++i) {
                for (int j = 0; j < columnas2; ++j) {
                    matriz2[i][j] = std::rand() % 100;  // Generar un número aleatorio entre 0 y 99
                    std::cout << "Posición [" << i << "][" << j << "] = " << matriz2[i][j] << std::endl;
                }
            }
        } else {
            std::cout << "Ingrese los datos para la matriz." << std::endl;
            for (int i = 0; i < filas2; ++i) {
                for (int j = 0; j < columnas2; ++j) {
                    std::cout << "Ingrese el dato para la posición [" << i << "][" << j << "]: ";
                    std::cin >> matriz2[i][j];
                }
            }
        }

        // Mostrar la matriz
        std::cout << "La matriz es: " << std::endl;
        for (int i = 0; i < filas2; ++i) {
            for (int j = 0; j < columnas2; ++j) {
                std::cout << matriz2[i][j] << " ";
            }
            std::cout << std::endl;
        }

        // Liberar la memoria dinámica
        for (int i = 0; i < filas2; ++i) {
            delete[] matriz2[i];
        }
        delete[] matriz2;

        
    

}

 