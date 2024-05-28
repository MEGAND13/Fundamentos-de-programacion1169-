#include <iostream>
#include <string> 
#include <cmath>

int main() {

    std::string Videojuegos[3], nombre[3], Autor[3], Estudio[3]; 
    int Ano[3]; 
    std::cout<<" Esta es tu biblioteca de juegos"<<std::endl;
    for (int i = 0; i <=3; i++)
    {    
         std::cout<<"por favor ingresa el nombre tu juego "<<std::endl;
         std::getline (std::cin, nombre[i]);
         std::cin.ignore();
         std::cout<<"En que año se publico"<<std::endl;
         std::cin>> Ano[i];
         std::cout<< "Ahora dime, quien creo ese juego "<<std::endl; 
         std::getline (std::cin, Autor[i]);
         std::cin.ignore();
         std::cout<< "Genial!, que estudio fue el encargado de esa obra maestra "<<std::endl;
         std::getline (std::cin, Estudio[i]);
         std::cin.ignore();

    }
    for (int i = 0; i <= 3; i++) {
            std::cout<<"Tu biblioteca de juegos es:" << nombre[i] <<std::endl;
            std::cout<<" Se publico en el año: " << Ano[i] <<std::endl;
            std::cout<< "Fue creador por: " <<Autor[i] <<std::endl; 
            std::cout<< "Dirigido por el estudio: " <<Estudio[i] <<std::endl;
    }
}