#include <iostream>
#include <cmath>

int main() {

    int numero_de_peleadores = 0;
    int numero_de_peleas = 0;
    int Tipo_de_combate = 0;
    int victorias = 0;
    bool repeticion = true;

    std::cout << "\nIngrese el numero de peleadores a la arena\n ";
    std::cin >> numero_de_peleadores;
    while (repeticion)
    {
        std::cout << "\nSeleccione el sistema de combate ";
        std::cout << " \n 1)Royal rumble\n 2)Eliminatoria directa\n 3)Grupos, semifinal y final\n 4)salir\n";
        std::cin >> Tipo_de_combate;
        


        switch (Tipo_de_combate)
        {

        case 1://si son 4 peleadores serían 5 batallas
            numero_de_peleas = numero_de_peleadores / 30;
            std::cout << "Royal rumble = " << numero_de_peleas;
            if (numero_de_peleadores < 30) {
                std::cout << " El minimo de peleadores para este tipo de combate son 30 ";
            }

            break;
            //
        case 2:
            victorias = numero_de_peleadores / 2;
            numero_de_peleas = victorias;
            while (victorias > 1)
            {
                victorias = victorias / 2;
                numero_de_peleas = numero_de_peleas + victorias;
            }

            std::cout << "Eliminacion directa= " << numero_de_peleas;
            break;
            //Corregir caso 3
        case 3:
            victorias = numero_de_peleadores / 2;
            numero_de_peleas = victorias;
            while (victorias > 1)
            {
                victorias = victorias / 2;
                numero_de_peleas = numero_de_peleas + victorias;
            }

            std::cout << "Grupos= " << numero_de_peleas+1;
            break;
        case 4:
            repeticion = false;
            std::cout << "Adios";
            break;
        default:
            std::cout << "Ingrese un dato valido";
            break;
        }

    }



}
