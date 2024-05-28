// Bucles (WHILE-DO WHILE-FOR)
// Ciclo de juego infinito gastar 3 vidas, preguntar al usuario si quiere continuar Contar hasta 100
#include <iostream>

int main(){
    int respuesta;
    int numero;
    int intentos = 0;
    int intentosmax = 3;
    numero = 0;

    std::cout << " Este es un juego, encuentra el numero secreto\n";
  do{
    
            while (!(numero == 7)) {
                std::cout << "introduzca un numero\n";
                intentos = intentos + 1;
                std::cin >> numero;
                    if (numero == 7) {
                        std::cout << " ¡Felicidades, encontraste el numero secreto " << numero << "!" << std::endl;
                        intentos=0;
                        numero=0;  
                        break;
                    }
                    else {
                        std::cout << "Losiento, vuelve a intentarlo." << std::endl;
                    }
                    if (intentos >= intentosmax) {
                        std::cout << " Numero maximo de intentos alcanzado " << std::endl;
                         intentos=0;
                        break;
                       
                    }
            } 
  
    
            std::cout <<" Quieres volver a jugar 1)si, 2)no\n ";
            std::cin>> respuesta; 
    
    }while (respuesta==1);
    // Esto es un contador 
    int num=0; 
    for (int i = 0; i <= 100; i++)
    {
        std::cout<< "numero: " << i << std::endl;
    }
    

}    
