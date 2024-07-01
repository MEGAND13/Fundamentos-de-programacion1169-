#include <iostream>
#include <string>

void intro();
void encrucijada();
void encuentroCriatura();
void encontrarTesoro();
void gameOver();

int main() {
    intro();
    encrucijada();
    return 0;
}

void intro() {
    std::cout << "La Aventura del Bosque Encantado\n\n";
    std::cout << "Eres un valiente aventurero que se ha adentrado en el peligroso bosque oscuro de Nelderoth en busca de un antiguo tesoro escondido.\n";
    std::cout << "Según la leyenda, el tesoro está custodiado por una temible criatura. Tu misión es encontrar el tesoro antes de que la criatura te encuentre a ti.\n\n";
    std::cout << "Presiona Enter para continuar..."; 
    std::cin.ignore();
}

void encrucijada() {
    int opcion;
    std::cout << "\nTe encuentras en una encrucijada. Puedes ir hacia la izquierda (1) o hacia la derecha (2).\n";
    std::cout << "¿Qué camino eliges? (1/2): ";
    std::cin >> opcion;
 
    if (opcion == 1) {
        std::cout << "\nHas elegido ir hacia la izquierda.\n";
        encuentroCriatura();
    } else if (opcion == 2) {
        std::cout << "\nHas elegido ir hacia la derecha.\n";
        encontrarTesoro();
    } else {
        std::cout << "\nOpción no válida. La criatura te ha encontrado y has sido masacrado.\n";
        gameOver(); 
    }
}

void encuentroCriatura() {
    int opcion;
    std::cout << "\nTe encuentras con una criatura salvaje. ¿Deseas luchar (1) o huir (2)?\n";
    std::cout << "¿Qué haces? (1/2): ";
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << "\nHas decidido luchar contra la criatura. La derrotas y continuas tu camino.\n";
        encontrarTesoro();
    } else if (opcion == 2) {
        std::cout << "\nHas decidido huir. La criatura te atrapa y has sido aniquilado.\n";
        gameOver();
    } else {
        std::cout << "\nOpción no válida. La criatura te ha atrapado y has sido derrotado.\n";
        gameOver();
    }
}

void encontrarTesoro() {
    int opcion; 
    std::cout << "\n¡Has encontrado el tesoro! Pero la criatura se aproxima rápidamente. Sueltas el tesoro y te escondes (1) o tomas el tesoro y corres hacia la salida del bosque (2).\n";
    std::cout << "¿Qué haces? (1/2): ";
    std::cin >> opcion;
    if (opcion == 1) {
        std::cout << "\nLa criatura te ha encontrado y has sido masacrado.\n";
        gameOver();
    } else if (opcion == 2) {
        std::cout << "\n¡Felicidades! Has completado tu misión y salido del bosque con vida.\n";
        gameOver();
    } else {
        std::cout << "\nOpción no válida. La criatura te ha atrapado y has sido derrotado.\n";
        gameOver();
    }
}

void gameOver() {
    std::cout << "\nFin del juego.\n";
}
