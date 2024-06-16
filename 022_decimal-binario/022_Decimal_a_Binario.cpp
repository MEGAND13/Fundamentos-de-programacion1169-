#include <iostream>
#include <string>

// Función recursiva para convertir un número decimal a binario
std::string decimalABinario(int numero) {
    if (numero == 0) {
        return "0";
    } else if (numero == 1) {
        return "1";
    } else {
        return decimalABinario(numero / 2) + std::to_string(numero % 2); /* Aqui la funcion se llama a sí misma con el número dividido por 2 (esto se llama "recursión") despues
                                                                             Añade al resultado el resto de dividir el número por 2 (esto obtiene el último dígito en binario).*/
    }
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número decimal
    std::cout << "Ingrese un numero decimal: ";
    std::cin >> numero;

    // Asegurarse de que el número no sea negativo
    if (numero < 0) {
        std::cout << "Por favor, ingrese un numero positivo." << std::endl;
        return 1;
    }

    // Convertir el número a binario usando la función recursiva
    std::string binario = decimalABinario(numero);

    // Mostrar el resultado
    std::cout << "El equivalente binario de " << numero << " es: " << binario << std::endl;

    return 0;
}
