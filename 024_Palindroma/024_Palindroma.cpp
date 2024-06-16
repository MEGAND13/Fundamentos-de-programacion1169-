#include <iostream>
#include <string>
#include <algorithm>

bool esPalindromo(std::string palabra, int inicio, int fin) {
    if (palabra[inicio] != palabra[fin]) {
            
            return false;
        }
        if (inicio >= fin) {
        return true;
        }
        inicio++;
        fin--;

    return esPalindromo(palabra, inicio , fin);
}

int main() {
    int inicio = 0;
    
    std::string palabra;

    // Solicitar al usuario que ingrese una palabra
    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    int fin = palabra.length() - 1;// Cantidad de letras de la palabra que ingresaste (se le resta el uno para que se pueda comparar con la posición)
    // Determinar si la palabra es palíndroma usando la función recursiva
    bool resultado = esPalindromo(palabra, inicio, fin);

    // Mostrar el resultado
    if (resultado) {
        std::cout << "La palabra \"" << palabra << "\" es un palíndromo." << std::endl;
    } else {
        std::cout << "La palabra \"" << palabra << "\" no es un palíndromo." << std::endl;
    }

    
}
