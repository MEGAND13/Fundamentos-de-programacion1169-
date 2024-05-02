// 006_Entrada y salida.
/*En esta practica harás un log in de usuario*/
#include <iostream>
#include <string>

int main() {

    std::string nombre, usuario, contrasena, password, Correo;
    int edad = 0;

    std::cout << "Registrate" << std::endl;
    std::cout << " Nombre de usuario: " << std::endl;
    getline(std::cin, nombre);
    std::cout << "\n";
    //std:: cout <<nombre<<std::endl;

    std::cout << " Contraseña: " << std::endl;
    getline(std::cin, contrasena);
    std::cout << "\n";
    //std:: cout <<contrasena<<std::endl;


    std::cout << "Edad:" << std::endl;
    std::cin >> edad;
    std::cout << "\n";
    //std:: cout <<edad<<std::endl;
    if (edad >= 18) {


        std::cout << " Correo: " << std::endl;
        std::cin.ignore();
        getline(std::cin, Correo);
        std::cout << "\n";


        std::cout << "Log in de usuario \n Introduce tu nombre y contraseña " << std::endl;
        std::cout << "\n";
        std::cout << "Nombre de usuario ";
        std::cout << "\n";
        getline(std::cin, usuario);
        std::cout << "\n";
        std::cout << "password ";
        std::cout << "\n";
        getline(std::cin, password);

        if (nombre == usuario && contrasena == password) {
            std::cout << "Bienvenido";
        }
        else { std::cout << "Datos incorrectos"; }



    }
    else {
        std::cout << "No cumples con los requisitos minimos de edad" << std::endl;
    }








}