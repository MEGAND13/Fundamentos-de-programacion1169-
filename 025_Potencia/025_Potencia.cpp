#include <iostream>

// Función recursiva para calcular la potencia
double potencia(double base, int exponente) {
    // Caso base: cualquier número elevado a la potencia 0 es 1
    
    if (exponente == 0) {
        return 1;
    }
    // Si el exponente es negativo, convertimos a positivo y calculamos el inverso
    if (exponente < 0) {
        return 1 / potencia(base, -exponente);
    }
    // Caso recursivo: base * (base ^ (exponente - 1))
    return base * potencia(base, exponente-1);
}

int main() {
    double base;
    int exponente;

    // Solicitar al usuario la base y el exponente
    std::cout << "Ingrese la base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exponente;

    // Calcular la potencia utilizando la función recursiva
    double resultado = potencia(base, exponente);

    // Mostrar el resultado
    std::cout << base << " elevado a la " << exponente << " es: " << resultado << std::endl;

    return 0;
}
