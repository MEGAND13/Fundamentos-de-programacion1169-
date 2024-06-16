#include <iostream>
#include <string>

// Definición de la estructura del nodo
struct Nodo {
    std::string parteDelCuerpo;  // Variable que guarda el valor (parte del cuerpo)
    Nodo* siguiente;             // Puntero al siguiente nodo

    // Constructor para inicializar un nodo
    Nodo(std::string valor) : parteDelCuerpo(valor), siguiente(nullptr) {}
};

int main() {
    // Crear los nodos
    Nodo* cabeza = new Nodo("Cabeza");
    Nodo* torso = new Nodo("Torso");
    Nodo* pies = new Nodo("Pies");

    // Enlazar los nodos
    cabeza->siguiente = torso;
    torso->siguiente = pies;

    // Puntero temporal para recorrer la lista
    Nodo* temporal = cabeza;

    // Imprimir los valores de los nodos
    while (temporal != nullptr) {
        std::cout << temporal->parteDelCuerpo << std::endl;
        temporal = temporal->siguiente;
    }

    // Liberar la memoria
    delete cabeza;
    delete torso;
    delete pies;

}
