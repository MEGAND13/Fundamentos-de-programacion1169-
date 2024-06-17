#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

// Enumerador para los power-ups
// "enum" es una característica del lenguaje C++ la cual sirve para definir conjuntos de valores constantes con nombres significativos.

enum PowerUp {
    NONE,
    EXTRA_STRENGTH,
    EXTRA_SPEED,
    EXTRA_DEFENSE,
    EXTRA_AGILITY,
    POWER_UP_COUNT  // Mantener este como último para el conteo
};

// Estructura para los contendientes
struct Contendiente {
    int fuerza;
    int velocidad;
    int defensa;
    int agilidad;

    // Constructor para inicializar las propiedades con valores aleatorios
    Contendiente() {
        fuerza = std::rand() % 51;
        velocidad = std::rand() % 51;
        defensa = std::rand() % 51;
        agilidad = std::rand() % 51;
    }

    // Método para aplicar un power-up
    void aplicarPowerUp(PowerUp powerUp) {
        switch (powerUp) {
            case EXTRA_STRENGTH:
                fuerza += std::rand() % 11;  // Aumentar fuerza entre 0 y 10
                break;
            case EXTRA_SPEED:
                velocidad += std::rand() % 11;
                break;
            case EXTRA_DEFENSE:
                defensa += std::rand() % 11;
                break;
            case EXTRA_AGILITY:
                agilidad += std::rand() % 11;
                break;
            default:
                break;
        }
    }

    // Método para mostrar las propiedades del contendiente
    void mostrar() const {
        std::cout << "Fuerza: " << fuerza << ", Velocidad: " << velocidad
                  << ", Defensa: " << defensa << ", Agilidad: " << agilidad << std::endl;
    }
};

// Función para simular el Battle Royale
void battleRoyale(std::vector<Contendiente>& contendientes) {
    int ronda = 1;
    while (contendientes.size() > 1) {
        std::cout << "Ronda " << ronda << ":\n";
        for (size_t i = 0; i < contendientes.size(); ++i) {
            std::cout << "Contendiente " << i + 1 << ": ";
            contendientes[i].mostrar();
        }

        // Comparar los contendientes y eliminar al más débil
        size_t perdedor = 0;
        int minPropiedades = contendientes[0].fuerza + contendientes[0].velocidad +
                             contendientes[0].defensa + contendientes[0].agilidad;
        for (size_t i = 1; i < contendientes.size(); ++i) {
            int propiedades = contendientes[i].fuerza + contendientes[i].velocidad +
                              contendientes[i].defensa + contendientes[i].agilidad;
            if (propiedades < minPropiedades) {
                minPropiedades = propiedades;
                perdedor = i;
            }
        }

        std::cout << "Eliminando al contendiente " << perdedor + 1 << " con menor puntaje.\n\n";
        contendientes.erase(contendientes.begin() + perdedor);
        ++ronda;
    }

    std::cout << "¡El contendiente ganador es:\n";
    contendientes[0].mostrar();
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));  // Inicializar la semilla aleatoria

    const int numeroDeContendientes = 20;
    std::vector<Contendiente> contendientes;

    // Crear y asignar propiedades a los contendientes
    for (int i = 0; i < numeroDeContendientes; ++i) {
        Contendiente nuevoContendiente;
        // Asignar un power-up aleatorio
        PowerUp powerUp = static_cast<PowerUp>(std::rand() % POWER_UP_COUNT);
        nuevoContendiente.aplicarPowerUp(powerUp);
        contendientes.push_back(nuevoContendiente);
    }

    // Simular el Battle Royale
    battleRoyale(contendientes);

    return 0;
}
