#include <iostream>

// Función recursiva para calcular el producto de dos números
int producto(int a, int b) {
    // Caso base: si b es 0, el producto es 0
    if (b == 0) {
        return 0;
    }
    // Si b es negativo, ajustamos para multiplicar con -b y luego invertir el resultado
    if (b < 0) {
        std::cout<< "a= "<<a<<" b = "<< b<<std::endl;
        return -producto(a, -b);
    }
    // Caso recursivo: a + (a * (b - 1))
    std::cout<< "a= "<<a<<" b = "<< b<<std::endl;
    return a + producto(a, b - 1);
}

int main() {
    int num1, num2;

    // Solicitar al usuario los dos números
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    // Calcular el producto utilizando la función recursiva
    int resultado = producto(num1, num2);

    // Mostrar el resultado
    std::cout << "El producto de " << num1 << " y " << num2 << " es: " << resultado << std::endl;

    return 0;
}
