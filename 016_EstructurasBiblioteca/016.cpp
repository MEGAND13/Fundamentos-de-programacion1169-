#include <iostream>
#include <string> 
#include <cmath>

int main() {
    //Definimos una estructura para poder utilizar una variable tipo string como un array (que en si misma ya es un array)
    struct estructura
    {
        std::string  nombre, Autor, Estudio; 
    };
    //Declaramos la variable de la estructura con el nombre de "biblioteca" que a su vez es un array de 3 lugares
    struct estructura biblioteca[3];// biblioteca es una variable que nosotros definimos de estructura que contendrá los datos definidos en la estructura. 
    int Ano[3]; 

    std::cout<<" Esta es tu biblioteca de juegos"<<std::endl;
    for (int i = 0; i <3; i++)
    {    
         std::cout<<"por favor ingresa el nombre tu juego numero "<< i +1 <<std::endl;
         std::getline (std::cin, biblioteca[i].nombre); // Para acceder a las variables que tiene la estructura "biblioteca" se coloca el nombre de la variable de la estructura (biblioteca) seguido del punto (.) y el nombre de la variable interna a la cual se quiere acceder que en este caso es "nombre" 
         std::cout<<"En que año se publico"<<std::endl;
         std::cin>> Ano[i];
         std::cin.ignore();
         std::cout<< "Ahora dime, quien creo ese juego "<<std::endl; 
         std::getline (std::cin, biblioteca[i].Autor);
         std::cout<< "Genial!, que estudio fue el encargado de esa obra maestra "<<std::endl;
         std::getline (std::cin, biblioteca[i].Estudio);
         

    }
    std::cout<<"Tu biblioteca de juegos es:"<<std::endl;
    for (int i = 0; i <= 3; i++) {
            std::cout<<"nombre del juego: "<<i+1 <<" es:"<< biblioteca[i].nombre <<std::endl;
            std::cout<<" Se publico en el año: " << Ano[i] <<std::endl; 
            std::cout<< "Fue creador por: " << biblioteca[i].Autor <<std::endl; 
            std::cout<< "Dirigido por el estudio: " << biblioteca[i].Estudio <<std::endl;
    }
}