#include <iostream>

// Función recursiva para calcular el Máximo Común Divisor usando el algoritmo de Euclides
int mcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Asegurarse de que los números sean positivos
    if (num1 <= 0 || num2 <= 0) {
        std::cout << "Por favor, ingrese números positivos." << std::endl;
    }

    // Calcular el MCD usando la función recursiva
    int resultado = mcd(num1, num2);

    // Mostrar el resultado
    std::cout << "El Máximo Común Divisor de " << num1 << " y " << num2 << " es: " << resultado << std::endl;
}
