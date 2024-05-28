#include <iostream>

int main() {
    std::cout << "¡Bienvenido al juego de adivinanzas de videojuegos!\n";
    std::cout << "Piensa en un personaje de videojuego y responde las siguientes preguntas:\n\n";

    std::string respuesta;

    std::cout << "¿El personaje es humano? (s/n): ";
    std::cin >> respuesta;
    if (respuesta == "s") {
        std::cout << "¿El personaje es de la saga de Mario Bros? (s/n): ";
        std::cin >> respuesta;
        if (respuesta == "s") {
            std::cout << "¿El personaje es Mario? (s/n): ";
            std::cin >> respuesta;
            if (respuesta == "s") {
                std::cout << "¡Correcto! El personaje que pensaste es Mario.\n";
            } else {
                std::cout << "Lo siento, no pude adivinar el personaje que pensaste.\n";
            }
        } else {
            std::cout << "¿El personaje es de la saga de Zelda? (s/n): ";
            std::cin >> respuesta;
            if (respuesta == "s") {
                std::cout << "¿El personaje es Link? (s/n): ";
                std::cin >> respuesta;
                if (respuesta == "s") {
                    std::cout << "¡Correcto! El personaje que pensaste es Link.\n";
                } else {
                    std::cout << "Lo siento, no pude adivinar el personaje que pensaste.\n";
                }
            } else {
                std::cout << "Lo siento, no pude adivinar el personaje que pensaste.\n";
            }
        }
    } else {
        std::cout << "¿El personaje es un robot? (s/n): ";
        std::cin >> respuesta;
        if (respuesta == "s") {
            std::cout << "¿El personaje es Mega Man? (s/n): ";
            std::cin >> respuesta;
            if (respuesta == "s") {
                std::cout << "¡Correcto! El personaje que pensaste es Mega Man.\n";
            } else {
                std::cout << "Lo siento, no pude adivinar el personaje que pensaste.\n";
            }
        } else {
            std::cout << "Lo siento, no pude adivinar el personaje que pensaste.\n";
        }
    }

    
}