// P008 Bucles (WHILE-DO WHILE-FOR)

#include <iostream>

int main()
{
    int numeroC;
    std::cout << "Este es un contador de numeros, por favor, introduce un numero\n";
    std::cin >> numeroC;
    //La palabra "for" es un contador, este suele declararse con la letra "i".
    std::cout << "del numero 1 hasta el " << numeroC << " son " <<std::endl;
    for (int i = 1; i <= numeroC; i = i + 1) {
        std::cout << i << std::endl;
    }
    // Practica externa con while, Encuentra el número escondido.
    /* "while" es un operador que sirve para generar bucles, a diferencia de "for"
    este mantiene el bucle hasta que la condicion definida cambie, "for" es un contador en donde
    desde un inicio tiene la indicacion de cuando parar, mientras que en "while",
    hasta que la condicion no se cumpla este se repetirá*/

    int numero;
    int intentos = 0;
    int intentosmax = 5;
    numero = 0;

    std::cout << " Este es un juego, encuentra el numero secreto \n";
    while (!(numero == 7)) {
        std::cout << "introduzca un numero\n";
        intentos = intentos + 1;
        std::cin >> numero;
        if (numero == 7) {
            std::cout << " ¡Felicidades, encontraste el numero secreto " << numero << "!" << std::endl;
        }
        else {
            std::cout << "Losiento, vuelve a intentarlo." << std::endl;
        }
        if (intentos >= intentosmax) {
            std::cout << " Numero maximo de intentos alcanzado " << std::endl;
            break;
        }
       

    }
    /*El operador "do while" a diferencia del "while" ejecuta las intrucciones 
    que se encuentran  dentro del bucle y después realiza la comparacion*/ 
    int n = 0 ;
    do{ 
        std::cout << " Este mensaje se repite si usted escribe el numero 3 \n";
        std::cin >> n;
    } while (n == 3);

}


