#include <iostream>

// Función recursiva para calcular la suma de los primeros "n" números naturales
int sumaNaturales(int n) {
    // Caso base: si n es 0, la suma es 0
    if (n == 0) {
        return 0;
    }
    // Caso recursivo: n + suma de los números naturales hasta n-1
    return n + sumaNaturales(n - 1);
}

int main() {
    int n;

    // Solicitar al usuario el número "n"
    std::cout << "Ingrese un número natural: ";
    std::cin >> n;

    // Calcular la suma utilizando la función recursiva
    int resultado = sumaNaturales(n);

    // Mostrar el resultado
    std::cout << "La suma de los primeros " << n << " números naturales es: " << resultado << std::endl;

    return 0;
}
