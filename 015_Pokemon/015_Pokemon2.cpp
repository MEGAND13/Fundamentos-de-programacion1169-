//Batalla pokemon.
#include <iostream>
#include <stdlib.h>


int main() {

    std::cout << ("\n");
    std::cout << ("ooooooooo.            oooo                                                      \n");
    std::cout << ("`888   `Y88.          `888                                                      \n");
    std::cout << (" 888   .d88' .ooooo.   888  oooo   .ooooo.  ooo..oo. .oo.    .ooooo.  ooo. .oo. \n");
    std::cout << (" 888ooo88P' d88' `88b  888 .8P'   d88' `88b `888PY88bPY88b  d88' `88b `888P'Y88b\n");
    std::cout << (" 888        888   888  888888.    888ooo888  888  888  888  888   888  888   888\n");
    std::cout << (" 888        888   888  888 `88b.  888    .o  888  888  888  888   888  888   888\n");
    std::cout << ("o888o       `Y8bod8P' o888o o888o `Y8bod8P' o888  888o 888o `Y8bod8P' o888o o888\n");


    int player;
    int pokemon;
    int pelear_huir;
    int Accion;
    int numero_aleatorio;
    int tipo_de_ataque;
    bool defensa = false; 
    int vida_charmander = 50;
    int vida_bulbasaur=70;
    int vida_squirtle =70;
    int vida_metapod = 300;
    int placaje = 20;
    int ascuas_charmander = 50;
    int aranazo_charmander = 30;
    int latigo_sepa_bulbasaur =60;
    int pistola_de_agua_squirtle =80;
    int Ataque_metapod;
    int placaje_metapod = 10;
    int metapod_duro_resistencia = 0;
    std::cout << "1) 1 Player \n";
    std::cin >> player;

    if (player == 1) {

        std::cout << "Selecciona tu pokemon 1)Charmander, 2) Bulbasaur, 3)Squirtle\n";
        std::cin >> pokemon;
        // aqui tienes que copiar lo de abajo y cambiar el if al pokemon 2 ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
        if (pokemon == 1) {
            std::cout << "Elegiste a charmander\n";
            //agregar arte ascci
           /* std::cout << ("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n");
            std::cout << ("⠀⠀⠀⠀⠀⠀⣀⠤⠄⠒⠒⠤⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n");
            std::cout << ("⠀⠀⠀⠀⡰⠊⠁⠀⠀⠀⠀⠀⠀⠙⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
            std::cout << ("⠀⠀⠀⣸⢡⡄⠀⠀⠀⠀⢀⡴⢠⢦⡈⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   \n");
            std::cout << ("⠀  ⣿⢋⠃⠀⠀⠀⠀⠀⠁⣧⣸⣧⠸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀    \n");
            std::cout << ("  ⠠⡿⢿⠀⠀⠀⠀⠀⠀⠀⣟⠛⣹⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀     \n");
            std::cout << (" ⢠⡟⠚⠀⠀⠀⠀⠀⠀⠀⠈⠉⢀⡀ ⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣄⡀⠀⠀      \n");
            std::cout << ("⠀⢸⡙⢶⣤⣄⣀⣀⣀⣤⡤⠲⡿⠁⣸⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣤⣼⠿⣿⡀⠀     \n");
            std::cout << ("⠀⠀⠙⠢⣍⡓⢤⣴⣋⣉⡭⠛⠀⢠⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡿⠿⠀⠀⡇⠀       \n");
            std::cout << ("⠀⠀⠀  ⣀⡬⢿⠃⣻⡶⣆⡀⠀⠈⠉⠒⠦⢄⡀⠀⠀⠀⠀⠀⠀⣠⠇⠀⠀⠀⣷⠀        \n");
            std::cout << ("⣴⣶⠶⠒⠉⠀⠀⢸⠞⠁⠀⠀⠙⢆⠀⠀⠀⠀⠀⠈⠉⠚⣿⡶⠀⢰⠃⠀⠀⠀⢠⣿⣄     \n");
            std::cout << ("⠉⢻⣄⣀⡀⠀⢀⡾⠀⠀⠀⠀⠀⠈⢧⣀⣀⠀⠀⠀⣿⡧⠾⠗⠀⠀⢧⡀⠀⠀⠀⣡⠇     \n");
            std::cout << ("⠀⠉⠁⠀⠀⠀⢠⡇⠀⠀⠀⠀⠀⠀⠈⡆⠀⠙⣆⠀⠀⠀⠀⠀⠀⠀⠀⠳⣤⣀⠞⠁⠀     \n");
            std::cout << ("⠀⠀⠀⠀⠀⠀⢸⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⡰⠃⡄⠀⠀⠀      \n");
            std::cout << ("⠀⠀⠀⠀⢀⡠⠚⡇⠀⠀⠀⠀⠀⠀⠀⢠⠟⠀⠀⠀⢳⡀⠀⠀⠀⣠⠞⠁⣠⡇⠀⠀⠀     \n");
            std::cout << ("⠀⠀⠀⢀⠎⠀⠀⠙⣄⠀⠀⠀⠀⠀⠀⡏⠀⠀⠀⠀⠀⢳⠒⠈⠉⠀⢀⣴⡟⠀⠀⠀⠀     \n");
            std::cout << ("⠀⠀⠀⢸⠀⠀⠀⠀⠈⠣⢄⡀⠀⠀⠀⢇⠀⠀⠀⠀⠀⢸⡀⣀⡠⠔⡩⠞⠀⠀⠀⠀⠀     \n");
            std::cout << ("⠀⠀⠀⣈⣧⡀⠀⠀⠀⢠⠔⠛⠓⠒⠒⠚⠧⡀⠀⠀⠀⠈⡯⠄⠒⠉⠀⠀⠀⠀⠀⠀⠀     \n");
            std::cout << ("⠀⠀⣾⣟⣶⣳⠤⠤⠔⠊⠀⠀⠀⠀⠀⠀⠀⢹⡀⢀⣀⣀⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀      \n");
            std::cout << ("⠀⠀⠀⠈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢚⣾⣷⣟⡋⠀⠀⠀⠀⠀⠀⠀⠀⠀        \n");*/
            
            do
            {
                  
                std::cout << "Ha aparecido un pokemon salvaje\n";
                std::cout << "1)pelear, 2) huir\n";
                std::cin >> pelear_huir;

                if (pelear_huir == 2){
                    std::cout<< "huiste del pokemon y no entraste en la batalla"<<std::endl; 

                }
                if (pelear_huir == 1) {
                    std::cout << "Tu enemigo es un metapod\n";
                    //agregar arte ascci
                    while (pelear_huir == 1 && vida_charmander > 0 && vida_metapod > 0) {
                        std::cout << "Tu charmander tiene " << vida_charmander << "pts de vida \n";
                        std::cout << "Tu enemigo metapod tiene " << vida_metapod << " pts de vida \n";
                        std::cout << "¿Que quieres hacer? 1) atacar, 2) huir\n";
                        std::cin >> Accion;

                        if (Accion == 1) {

                            std::cout << " 1) placaje, 2) ascuas, 3) arañazo, 4) defensa\n";
                            tipo_de_ataque = 0;
                            std::cin >> tipo_de_ataque;
                            if (tipo_de_ataque == 1) {
                                numero_aleatorio = rand() % 11;
                                //std::cout<< numero_aleatorio;
                                if (numero_aleatorio > 1) {
                                    vida_metapod = vida_metapod - placaje + metapod_duro_resistencia;
                                    std::cout << "Le diste un panzaso efectivo a metapod\n";
                                }
                                else {
                                    std::cout << "Tu charmander le pego a una roca y fallo\n";
                                }
                            }
                            if (tipo_de_ataque == 2) {
                                numero_aleatorio = rand() % 11;
                                if (numero_aleatorio > 4) {
                                    vida_metapod = vida_metapod - (ascuas_charmander * 2) + metapod_duro_resistencia;
                                    std::cout << "Tu charmander acerto el ataque\n";
                                }
                                else {
                                    std::cout << "Tu charmander incinero a otro maestro pokemon y fallo\n";
                                }

                            }
                            if (tipo_de_ataque == 3) {
                                numero_aleatorio = rand() % 11;
                                if (numero_aleatorio > 3) {
                                    vida_metapod = vida_metapod - aranazo_charmander + metapod_duro_resistencia;
                                    std::cout << "Tu charmander acerto el ataque\n";
                                }
                                else {
                                    std::cout << "Tu charmander fallo\n";
                                }
                            }
                            if (tipo_de_ataque == 4) {
                                numero_aleatorio = rand() % 11;
                                if (numero_aleatorio > 1) {
                                    std::cout << "Tu charmander se defendio\n";
                                    defensa= true; 
                                }
                                else {
                                    std::cout << "Tu charmander fallo en defenderse \n";
                                }
                            }
                            if (vida_metapod <= 0) {
                                std::cout << "Derrotaste a metapod\n";
                                break;
                            }
                            std::cout << "Metapod esta pensando que hacer\n";
                            Ataque_metapod = rand() % 11;
                            if (Ataque_metapod > 5) {
                                numero_aleatorio = rand() % 11;
                                //std::cout<< numero_aleatorio;
                                if (numero_aleatorio > 4) {
                                    std::cout << "Metapod esta bien duro y le pego a tu largatija de fuego\n";
                                    if (defensa) {
                                        placaje_metapod=0;
                                        std::cout<< "charmander se defendio y no recibio daño\n ";
                                        defensa=false;

                                    }
                                    vida_charmander = vida_charmander - placaje_metapod;
                                    placaje_metapod=10; 
                                
                                }
                                else {
                                    std::cout << "Metapod es tan inutil que fallo\n";
                                }
                            }
                            if (Ataque_metapod < 6) {
                                numero_aleatorio = rand() % 11;
                                //std::cout<< numero_aleatorio;
                                if (numero_aleatorio > 2) {
                                    metapod_duro_resistencia = metapod_duro_resistencia + 5;
                                    std::cout << " Metapod se puso bien duro\n";
                                }
                                else {
                                    std::cout << "Metapod es tan inutil que fallo\n";
                                }
                            }
                            if (vida_charmander <= 0) {
                                std::cout << "Tu charmander se debilito no puede continuar\n";

                            }

                        }
                    }

                }

            } while (pelear_huir==2);
            
          

        }

    }
    //hasta aqui ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

    if (pokemon == 2) {
        std::cout << "Elegiste a bulbasaour\n";
        //agregar arte ascci
       /* std::cout << ("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n");
        std::cout << ("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀          ⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀ std::cout << ("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                ⡠⠉⢳⠴⢲⠂⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀std::cout << ("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀           ⠀⣀⣠⠤⠤⠤⠤⠤⠤⠤⠤⠤⠖⠊⠀⣠⠎⠀⡞⢹⠏⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀std::cout << ("⠀⠀⠀⠀⠀⠀⠀⠀          ⠀⠀⡴⠊⠁⠀⠀⠀⠀⠀⢀⡠⠤⠄⠀⠀⠀⠁⠀⠀⢀⠀⢸⠀⠀⠀⠀⠀
        std::cout << ("⠀⠀⠀⠀⠀               ⣠⠤⠤⠄⣀⠀⠀⠀⠀⢀⣌⠀⠀⠀⠀⠀⢀⣠⣆⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡀⠘⡄⠀⠀⠀⠀
        std::cout << ("⠀⠀⠀⠀              ⠀⡴⠁⠀⠀⠐⠛⠉⠁⠀⠀⣉⠉⠉⠉⠑⠒⠉⠁⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢧⠀⠱⡀⠀⠀⠀
        std::cout << ("⠀⠀               ⢰⣥⠆⠀⠀⠀⣠⣴⣶⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡆⠀⠑⡄⠀⠀
        std::cout << ("⠀              ⢀⡜⠁⠀⠀⢀⠀⠻⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠀⠀⠸⡀⠀
        std::cout << ("⠀            ⢀⣮⢖⣧⢠⠀⣿⠇⠀⠀⠁⠀⠀⠀⠠⠀⢀⣠⣴⣤⡀⠀⠀⠀⠈⡗⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢱⠀
        std::cout << ("⠀           ⠀⣼⠃⣼⣿⠘⠀⠀⠀⢠⣶⣿⡆⠀⠀⠁⣠⠊⣸⣿⣿⣿⡄⠀⠀⠀⡇⠀⢑⣄⠀⠀⠀⠀⠀⠀⢠⠃⠀⠀⠸⡆
        std::cout << ("⠀           ⠀⣿⢰⣿⣿⠀⠀⠀⠀⠙⠻⠿⠁⠀⠀⠠⠁⠀⣿⣿⣿⣿⡇⠀⠀⠀⠇⠀⢻⣿⣷⣦⣀⡀⣀⠠⠋⠀⠀⠀⢀⡇
        std::cout << ("⠀           ⠈⠉⠺⠿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⢿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⢦⡀⠀⠀⠀⠀⡸⠀
        std::cout << ("⠀          ⠘⣟⠦⢀⠀⠀⢠⠀⠀⡠⠀⠀⠀⠀⠀⠀⠉⠉⠉⠉⠁⣀⠔⠀⠀⠀⠀⠀⠀⠀⠛⠻⠟⠋⠀⠙⢦⠀⣠⠜⠀⠀
        std::cout << ("⠀          ⠀⠈⠑⠤⡙⠳⣶⣦⣤⣤⣤⣤⣤⣤⣤⣤⣴⣶⡶⠞⠁⠀⠀⣠⠖⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠈⢯⠁⠀⠀⠀
        std::cout << ("⠀        ⠀⠀⠀⠀⠈⢳⠤⣙⡻⠿⣿⣿⣿⣿⡿⠿⠛⠉⠀⢀⣀⡤⡚⠁⠀⠀⠀⠀⠀⠀⣧⠖⣁⣤⣦⠀⠀⠈⢇⠀⠀⠀
        std::cout << ("⠀       ⠀⠀⠀⠀⠀⢸⠀⢀⣩⣍⠓⠒⣒⠒⠒⠒⠒⠊⠉⠁⢀⡟⠀⠀⣾⣷⠀⠀⠀⠀⠏⢴⣿⣿⣿⠀⠀⠀⢸⠀⠀⠀
        std::cout << ("⠀       ⠀⠀⠀⠀⠀⠘⣶⣿⣿⣿⠀⠀⠈⠒⢄⣀⡀⠀⠀⠀⣼⣶⣿⡇⠈⠋⠀⠀⠀⡼⠀⠈⠻⣿⡿⠀⠀⠀⢸⠀⠀⠀
        std::cout << ("⠀      ⠀⠀⠀⠀⠀⠀⠹⡿⠿⠋⠀⠀⠀⠀⡜⠁⠈⢯⡀⢺⣿⣿⣿⠃⠀⠀⠀⢀⣼⣇⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⠀
        std::cout << ("⠀    ⠀⠀⠀⠀⠀⠀⠀⣿⣦⣄⣠⣀⣠⠞⠀⠀⠀⠈⠛⣿⡛⠛⠁⠀⠀⠀⣠⠊⠀⠈⢦⣄⣀⣀⣀⣀⢀⡼⠁⠀⠀⠀
        std::cout << ("⠀ ⠀⠀⠀⠀⠀⠀    ⠀⠉⠉⠉⠛⠉⠀⠀⠀⠀⠀⠀⠘⠛⠿⣿⠷⡾⠗⠊⠁⠀⠀⠀⠈⠉⠙⠛⠛⠛⠉⠀⠀*/
        do
        {
            std::cout << "Ha aparecido un pokemon salvaje\n";
            std::cout << "1)pelear, 2) huir\n";
            std::cin >> pelear_huir;
            if (pelear_huir == 2){
                    std::cout<< "huiste del pokemon y no entraste en la batalla"<<std::endl; 
                }
            if (pelear_huir == 1) {
                std::cout << "Tu enemigo es un metapod\n";
                //agregar arte ascci
                while (pelear_huir == 1 && vida_bulbasaur > 0 && vida_metapod > 0) {
                    std::cout << "Tu bulbasaur tiene " << vida_bulbasaur << "pts de vida \n";
                    std::cout << "Tu enemigo metapod tiene " << vida_metapod << " pts de vida \n";
                    std::cout << "¿Que quieres hacer? 1) atacar, 2) huir\n";
                    std::cin >> Accion;

                    if (Accion == 1) {

                        std::cout << " 1) placaje, 2) latigo sepa, 3) defensa\n";
                        tipo_de_ataque = 0;
                        std::cin >> tipo_de_ataque;
                        if (tipo_de_ataque == 1) {
                            numero_aleatorio = rand() % 11;
                            //std::cout<< numero_aleatorio;
                            if (numero_aleatorio > 1) {
                                vida_metapod = vida_metapod - placaje + metapod_duro_resistencia;
                                std::cout << "Le diste un golpe efectivo a metapod\n";
                            }
                            else {
                                std::cout << "Tu bulbasaur le pego a una roca y fallo\n";
                            }
                        }
                        if (tipo_de_ataque == 2) {
                            numero_aleatorio = rand() % 11;
                            if (numero_aleatorio > 4) {
                                vida_metapod = vida_metapod - (latigo_sepa_bulbasaur) + metapod_duro_resistencia;
                                std::cout << "Tu bulbasaur acerto el ataque\n";
                            }
                            else {
                                std::cout << "Tu bulbasaur  fallo\n";
                            }

                        }
                        if (tipo_de_ataque == 3) {
                            numero_aleatorio = rand() % 11;
                            if (numero_aleatorio > 1) {
                                std::cout << "Tu bulbasaur se defendio\n";
                                defensa= true; 
                            }
                            else {
                                std::cout << "Tu bulbasaur fallo\n";
                            }
                        }
                        if (vida_metapod <= 0) {
                            std::cout << "Derrotaste a metapod\n";
                            break;
                        }
                        std::cout << "Metapod esta pensando que hacer\n";
                        Ataque_metapod = rand() % 11;
                        if (Ataque_metapod > 5) {
                            numero_aleatorio = rand() % 11;
                            //std::cout<< numero_aleatorio;
                            if (numero_aleatorio > 4) {
                                std::cout << "Metapod le pego a tu flor no nacida\n";
                                if(defensa){ 
                                    placaje_metapod=0; 
                                    std::cout<< "Bulbasaur se defendio y no recibio daño\n ";
                                    defensa=false; 
                                }
                                vida_bulbasaur = vida_bulbasaur - placaje_metapod;
                                placaje_metapod=10; 
                            
                            }
                            else {
                                std::cout << "Metapod es tan inutil que fallo\n";
                            }
                        }
                        if (Ataque_metapod < 6) {
                            numero_aleatorio = rand() % 11;
                            //std::cout<< numero_aleatorio;
                            if (numero_aleatorio > 2) {
                                metapod_duro_resistencia = metapod_duro_resistencia + 5;
                                std::cout << " Metapod se puso  duro\n";
                            }
                            else {
                                std::cout << "Metapod es tan inutil que fallo\n";
                            }
                        }
                        if (vida_bulbasaur<= 0) {
                            std::cout << "Tu bulbasaur se debilito no puede continuar\n";

                        }

                    }
                }

            }
        } while (pelear_huir==2);
    }

    if (pokemon == 3) {
    std::cout << "Elegiste a Squirtle\n";
            //agregar arte ascci
        /* std::cout << ("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀  \n");
            ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣠⠤⠤⠤⠤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⠶⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀ ⠉⠙⠢⣄⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠁⠀⠀⠀⠀⢀⣀⡐⢄⠀⠀⠀⠀⠀⠀⠈⠳⣄⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡞⠁⠀⠀⠀⠀⠀⡜⠁⠀⣿⡌⠀⠀⠀⠀⠀⠀⠀⠀⠈⢆⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠀⠀⠀⠀⠀⠀ ⣸⣷⣤⣾⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠊⣼⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⢤⡀⠀⠀⠀⢰⡇⠀⠀⠀⠀⠀⠀⣿⣿⣿⣿⣿⠇⠀⠀⠀⠀⠀⠀⠀⠀⡜⣼⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡎⠀⠉⠲⣄⣀⣼⡇⠀⠀⠀⠀⠀⠀⠻⠿⣿⣟⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠉⠉⠁⠀⡏⠑⠌⠓⢬⣧⠀⠀⠀⠀⠘⢄⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⠿⡀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⠀⠀⠀⠇⠀⠀⠀⠀⠙⣆⠀⠀⠀⠀⠀⠈⠉⠓⠒⠲⠤⢤⣀⠀⠂⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀
        ⠀⠀⠀⠀⢀⣠⠤⠖⠒⠒⠒⠦⢤⡀⠀⠀⠀⠀⠀⢸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠈⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠲⠤⠤⠒⠋⢉⠟⠀⠀⠀⠀
        ⠀⠀⢀⡴⠋⠁⠀⠀⠀⠀⠀⠀⠀⠙⢦⠀⠀⠀⢠⡞⠹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡠⠋⠀⠀⠀⠀⠀
        ⠀⣠⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢇⠀⢠⡟⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⠈⠑⠢⢤⣀⣀⠀⠀⠀⠀⢀⣀⡤⠖⠯⣀⠀⠀⠀⠀⠀⠀
        ⢀⡟⠀⠀⠀⠀⠠⠴⠤⣀⠀⠀⠀⠀⠀⢸⣠⡟⠀⠀⠀⠀⢹⣄⠀⠀⠀⠀⠀⠀⢀⣼⡁⠀⠀⠀⠀⠀⠈⠉⠉⠉⠉⢻⠀⠀⠀⠀⠀⠉⠢⣄⣀⡀⠀
        ⢸⡇⠀⠀⠀⠀⠀⠀⠀⠘⡆⠀⠀⠀⠀⢈⣿⡇⠀⠀⠀⠀⢸⠉⢢⣀⡀⢀⣀⣴⠟⠀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⢇⡀
        ⠘⣇⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⢸⡇⣷⠀⠀⠀⢀⡞⠀⢰⠏⠉⠉⠁⢸⡀⠀⠀⠀⠈⠓⠶⠤⣤⣄⣀⣠⡤⠴⡇⠀⠀⠀⠀⠀⠀⠀⠀⡔⠁
        ⠀⠹⣆⠀⠀⠀⠀⠀⢀⡼⠁⠀⠀⠀⠀⢸⠁⠸⡆⠀⣠⠞⠀⢀⡞⠀⠀⠀⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⠀⢰⣧⣀⣀⡀⠀⢀⣀⣠⠴⠃⠀
        ⠀⠀⠹⡓⠦⠤⠤⠖⠋⠀⠀⠀⠀⠀⠀⢸⠀⠀⠹⡴⠁⠀⢠⠞⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⠀⠀⠀⠀⠀⡞⠀⠀⠀⣸⠀⠀⠉⠉⠉⠉⠀⠀⠀⠀⠀
        ⠀⠀⠀⠘⢆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⠀⢸⢁⡠⠴⢧⡀⠀⠀⠀⠀⣀⠔⠳⣄⠀⠀⠀⠀⠀⠀⡼⠁⠀⠀⢠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠑⢄⠀⠀⠀⠀⠀⠀⠀⠀⠘⣇⣠⡿⠋⠀⠀⠀⠙⢦⣀⡠⠞⠁⠀⠀⠈⠙⠶⣤⣀⡀⣰⠃⠀⠀⣠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠙⢦⣀⠀⠀⠀⠀⠀⠀⣸⠏⠀⠀⠀⠀⠀⠀⠈⢻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⣹⠋⠉⠉⣹⠏⠙⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⠲⢤⣄⣀⣠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠈⣇⠀⠀⠀⠀⠀⠀⠀⠀⡰⠃⢀⣤⠞⠁⠀⠀⠘⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⡽⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣻⠶⠤⠤⠤⠤⠤⢤⣞⡥⠖⠋⠀⠀⠀⠀⠀⠀⢹⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠟⠒⠀⠀⠒⠒⠺⢯⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⡴⠃⠀⠀⠀⠀⠀⠀⠀⠀⠙⢦⡀⠀⠀⠀⠀⠀⠀⠀⢄⣈⠆⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⢄⡀⠀⠀⠀⠀⠀⠀⢀⠞⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣄⠀⠀⠀⠀⢀⣠⠴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢇⣀⡤⠖⢄⠀⣰⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠳⠒⠒⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
        ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀⠈⠙⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
                ⠀*/
        do
        {
            std::cout << "Ha aparecido un pokemon salvaje\n";
            std::cout << "1)pelear, 2) huir\n";
            std::cin >> pelear_huir; 
            if (pelear_huir == 2){
                    std::cout<< "huiste del pokemon y no entraste en la batalla"<<std::endl; 
             }
            if (pelear_huir == 1) {
                std::cout << "Tu enemigo es un metapod\n";
                //agregar arte ascci
                while (pelear_huir == 1 && vida_squirtle > 0 && vida_metapod > 0) {
                    std::cout << "Tu squirtle tiene " << vida_squirtle << "pts de vida \n";
                    std::cout << "Tu enemigo metapod tiene " << vida_metapod << " pts de vida \n";
                    std::cout << "¿Que quieres hacer? 1) atacar, 2) huir\n";
                    std::cin >> Accion;

                    if (Accion == 1) {

                        std::cout << " 1) placaje, 2) pistola de agua, 3) defensa\n";
                        tipo_de_ataque = 0;
                        std::cin >> tipo_de_ataque;
                        if (tipo_de_ataque == 1) {
                            numero_aleatorio = rand() % 11;
                            //std::cout<< numero_aleatorio;
                            if (numero_aleatorio > 1) {
                                vida_metapod = vida_metapod - placaje + metapod_duro_resistencia;
                                std::cout << "Le diste un panzaso efectivo a metapod\n";
                            }
                            else {
                                std::cout << "Tu squirtle fallo\n";
                            }
                        }
                            if (tipo_de_ataque == 2) {
                            numero_aleatorio = rand() % 11;
                            if (numero_aleatorio > 4) {
                                vida_metapod = vida_metapod - pistola_de_agua_squirtle  + metapod_duro_resistencia;
                                std::cout << "Tu squirtle acerto el ataque\n";
                            }
                            else {
                                std::cout << "Tu squirtle fallo\n";
                            }

                        }
                            if (tipo_de_ataque == 3) {
                            numero_aleatorio = rand() % 11;
                            if (numero_aleatorio > 1) {
                                std::cout << "Tu squirtle se defendio\n";
                                defensa= true; 
                            }
                            else {
                                std::cout << "Tu squirtle fallo\n";
                            }
                        }
                        if (vida_metapod <= 0) {
                            std::cout << "Derrotaste a metapod\n";
                            break;
                        }
                        std::cout << "Metapod esta pensando que hacer\n";
                        Ataque_metapod = rand() % 11;
                        if (Ataque_metapod > 5) {
                            numero_aleatorio = rand() % 11;
                            //std::cout<< numero_aleatorio;
                                if (numero_aleatorio > 4) {
                                std::cout << "Metapod le pego a tu tortuga\n";
                                if(defensa){ 
                                    placaje_metapod=0; 
                                    std::cout<< " Squirtle se defendio y no recibio daño\n ";
                                    defensa=false; 
                                }
                                vida_squirtle = vida_squirtle - placaje_metapod;
                                placaje_metapod=10; 
                            }
                            else {
                                std::cout << "Metapod es tan inutil que fallo\n";
                            }
                        }
                            if (Ataque_metapod < 6) {
                                numero_aleatorio = rand() % 11;
                                //std::cout<< numero_aleatorio;
                                if (numero_aleatorio > 2) {
                                    metapod_duro_resistencia = metapod_duro_resistencia + 5;
                                    std::cout << " Metapod se puso bien duro\n";
                                }
                                else {
                                    std::cout << "Metapod es tan inutil que fallo\n";
                                }
                            }
                            if (vida_squirtle <= 0) {
                                std::cout << "Tu squirtle se debilito no puede continuar\n";

                             }

                    }
                }

            }
        } while (pelear_huir==2);
    
    }

    
}

