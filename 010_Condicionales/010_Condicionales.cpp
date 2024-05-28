// 010_Condicionales
/*En esta practica harás un log in de usuario*/
#include <iostream>
#include <string>


int main() {
    int repetir=0;
    int longitud;
    std::string nombre, usuario, contrasena, password, Correo;
    int edad = 0;
    do
    {
        std::cout << "Registrate" << std::endl;
        std::cout << " Nombre de usuario: " << std::endl;
        getline(std::cin, nombre);
        std::cout << "\n";
        repetir=0;    

        longitud = nombre.length();

        for(int i=0;i<longitud;i++){
            if (nombre[i]=='0' || nombre[i]=='1' || nombre[i]=='2' || nombre[i]=='3' || nombre[i]=='4' || nombre[i]=='5' || nombre[i]=='6' || nombre[i]=='7' || nombre[i]=='8' || nombre[i]=='9' ){
                std::cout<<"porfavor ingresa solo letras en este apartado "<<std::endl;
                repetir = 1;
            }
        
        }
    } while (repetir==1);
    
    std::cout << " Contraseña: " << std::endl;
    getline(std::cin, contrasena);
    std::cout << "\n";
    //std:: cout <<contrasena<<std::endl;
    ////
    do
    {
        std::cout << "Edad:" << std::endl;
        std::cin >> edad;
        repetir=0;
        if (std::cin.fail()) {
            std::cout<< "Datos invalidos. por favor, ingrese un numero:"<< std::endl;
            std::cin.clear();
            std::cin.ignore(); 
            repetir=1;
        }
    } while (repetir==1);
    
    
    std::cout<< "La edad ingresada es " << edad; 
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