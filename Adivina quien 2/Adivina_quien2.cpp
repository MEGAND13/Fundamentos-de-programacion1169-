#include <iostream>

int main() {
    int seleccion;
    do{

        std::cout << "¡Bienvenido al juego de adivinanzas de deportes!\n";
        std::cout << "Piensa en un deporte y responde las siguientes preguntas:\n\n";

        std::string respuesta;

        std::cout << "¿¿Se juega con la mano?? (s/n): ";
        std::cin >> respuesta;
        if (respuesta == "s") {
            std::cout << "Basquetbol? (s/n): ";
            std::cin >> respuesta;
            if (respuesta == "n") {
                std::cout << " Fronton? (s/n): ";
                std::cin >> respuesta;
                if (respuesta == "s") {
                    std::cout << "¡Genial, he adivinado tu deporte!.\n";
                } else {
                    std::cout << "Lo siento, no pude adivinar el deporte que pensaste.\n";
                }
                
                
            }

        } 
        
            if (respuesta=="n" )
                    {
                        std::cout << "¿Se utiliza un bate? (s/n): ";
                        std::cin >> respuesta;
                    if (respuesta == "s") {
                        std::cout << "Baseball? (s/n): ";
                        std::cin >> respuesta;
                        if (respuesta == "s") {
                            std::cout << "¡Correcto! tu deporte es baseball!.\n";
                        }
                        else {
                        std::cout << "Lo siento, no pude adivinar el deporte que pensaste.\n";
                            }
                    } 
                    if(respuesta == "n"){
                        std::cout << " Se usa una red? (s/n): ";
                        std::cin >> respuesta;
                        if (respuesta == "s") {
                            std::cout << "Volleyball? (s/n): ";
                            std::cin >> respuesta;
                            if (respuesta == "s") {
                                std::cout << "¡Correcto! he adivinado tu deporte!\n";
                            } else {
                                std::cout << "Lo siento, no pude adivinar el deporte que pensaste.\n";
                            }
                        }else
                        {
                            std::cout << "Lo siento, no pude adivinar el deporte que pensaste.\n";
                        }
                    } 
            }
        std::cout<< "Desea volver a jugar? 1)SI, 2)NO \n";
        std::cin>> seleccion;
    }while (seleccion == 1);
}