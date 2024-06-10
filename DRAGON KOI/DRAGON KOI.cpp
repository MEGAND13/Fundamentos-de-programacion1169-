// DRAGON_KOI.cpp 
//

#include <iostream>
#include <string> 
#include <cmath> 



double Posicion(double posicion_inicial, double peso, double aceleracion, double friccion, double velocidad_inicial, double euler, double tiempo, int menu) {
    double potenciae;
    double Resultado_posicion_inical;
    potenciae = pow(euler, (-(friccion / peso) * tiempo));
    if (menu == 1)
    {
        std::cout << "Esta es la formula de posicion" << std::endl;
        std::cout << "x(t)= Xo + (mg/b)*t-(Vo-mg/b)(m/b)(e^(-b/m*t))";
        std::cout << "Aplicando los datos nos queda : " << std::endl;
        std::cout << "dx/dt[x(t)]=  (" << posicion_inicial << "+" << peso << "*" << aceleracion << "/" << friccion << "*" << tiempo << ") - (" << velocidad_inicial << "-" << peso << "*" << aceleracion << "/" << friccion << ")" << peso << "/" << friccion << "*" << potenciae << std::endl;
    }
    Resultado_posicion_inical = (posicion_inicial + ((peso * aceleracion) / friccion) * tiempo) - (velocidad_inicial - ((peso * aceleracion) / friccion)) * (peso / friccion) * potenciae;

    return Resultado_posicion_inical;
}

double primeraDerivada(double peso, double aceleracion, double friccion, double velocidad_inicial, double posicion_inicial, double euler, double tiempo, int menu) {

    double potenciae;
    double velocidad;
    potenciae = pow(euler, (-(friccion / peso) * tiempo));
    if (menu == 1)
    {
        std::cout << potenciae;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "El pez se mueve a partir de la sigiente formula de posicion que es: " << std::endl;
        std::cout << "x(t)= Xo + (mg/b)*t-(Vo-mg/b)(m/b)(e^(-b/m*t)) " << std::endl;// Formula de movimiento
        std::cout << std::endl;
        std::cout << "La cual derivaremos para poder obtener la velocidad" << std::endl;
        std::cout << "dx/dt(x(t))=dx/dt[Xo]+ dx/dt[(mg/b)*t]-dx/dt[(Vo-mg/b)(m/b)*(e^(-b/m*t))] " << std::endl; //Derivamos por partes 
        std::cout << std::endl;
        std::cout << "Empezamos derivando el primer termino el cual es: " << std::endl;
        std::cout << "dx/dt[Xo] = 0" << std::endl;// X0=0
        std::cout << "continuamos derivando el segundo termino que es: " << std::endl;
        std::cout << "dx/dt[(mg/b)*t] = (mg/b)" << std::endl;//al derivar "t" nos da 1 y al multiplicar nos queda (mg/b)
        std::cout << "continuamos derivando el ultimo termino aplicando la ley de la cadena nos queda como: " << std::endl;
        std::cout << "dx/dt[-(Vo-mg/b)(m/b)*e^(-b/mt)] = -(Vo-mg/b)(m/b)*e^(-b/mt)*(-b/m)" << std::endl; // Aplicamos la ley de la cadena
        std::cout << "simplificamos la ultima derivada eliminando los terminos la cual nos queda como: ";
        std::cout << "dx/dt[-(Vo-mg/b)(m/b)*e^(-b/mt)] = +(Vo-mg/b)*e^(-b/mt)" << std::endl;
        std::cout << "juntamos los resultados de las 3 derivadas " << std::endl;
        std::cout << "dx/dt=(mg/b) +(Vo-mg/b)*e^(-b/mt) " << std::endl;
        std::cout << std::endl;
        std::cout << "Al derivar la formula de la posición ahora podemos obtener la velocidad sustituyendo los valores " << std::endl;

        std::cout << "Aplicando los datos nos queda : " << std::endl;
        std::cout << "dx/dt[x(t)] = (" << peso << "*" << aceleracion << "/" << friccion << ")+(" << velocidad_inicial << "-" << peso << "*" << aceleracion << "/" << friccion << "*" << euler << " ^(- " << friccion << "/" << peso << "*" << tiempo << ") " << std::endl;
    }


    velocidad = ((peso * aceleracion) / friccion) + (velocidad_inicial - (peso * aceleracion) / friccion) * potenciae;

    return velocidad;
}
double segundaDerivada(double velocidad_inicial, double peso, double aceleracion, double friccion, double euler, double tiempo, int menu) {
    double potenciae;
    double Resultado_De_aceleracion;
    potenciae = pow(euler, (-(friccion / peso) * tiempo));
    if (menu == 1)
    {
        std::cout << "Tomando la ultima derivada que nos dio la formula de velocidad,\n volveremos a derivar para poder calcular la aceleracion" << std::endl;
        std::cout << "dx/dt=(mg/b) +(Vo-mg/b)*e^(-b/mt) " << std::endl;// Esta es la formula que derivamos paara  aceleracion 
        std::cout << std::endl;
        std::cout << "Volvemos a derivar por partes, comenzando por el primer termino" << std::endl;
        std::cout << "dx/dt(mg/b)=0" << std::endl;// Al no tener "t" se toman los terminos como constantes, por lo que al derivarlas dan 0
        std::cout << "contimuamos derivando el segundo termino aplicando la ley de la cadena y nos queda: " << std::endl;
        std::cout << "dx/dt(Vo-mg/b)(m/b)*e^(-b/mt) = (Vo-mg/b)(m/b)*e^(-b/mt)*(-b/m)" << std::endl;
        std::cout << "Simplificamos sacando el signo negativo" << std::endl;
        std::cout << "(Vo-mg/b)(m/b)*e^(-b/mt)*-(b/m)" << std::endl;
        std::cout << std::endl;
        std::cout << " Como resultado nos queda: " << std::endl;
        std::cout << "-(Vo-mg/b)(m/b)*e^(-b/mt)*(b/m)" << std::endl;
        std::cout << std::endl;
        std::cout << "Aplicando los datos nos queda : " << std::endl;
        std::cout << "dx/dt[x(t)] = (-" << velocidad_inicial << "-" << peso << "*" << aceleracion << "/" << friccion << "*" << euler << " ^(- " << friccion << "/" << peso << "*" << tiempo << ")(" << friccion << "/" << peso << ")" << std::endl;
    }


    Resultado_De_aceleracion = -(velocidad_inicial - (peso * aceleracion) / friccion) * (potenciae) * (friccion / peso);
    return Resultado_De_aceleracion;
}

int main()
{
    std::cout << " _____  _____            _____  ____  _   _    _  ______ _____" << std::endl;
    std::cout << "|  __ )|  __  )    /)   / ____|/ __ )| ) | |  | |/ / __ )_   _|" << std::endl;
    std::cout << "| |  | | |__) |   /  ) | |  __| |  | |  )| |  | ' / |  | || |  " << std::endl;
    std::cout << "| |  | |  _  /   / /) )| | |_ | |  | | . ` |  |  <| |  | || |  " << std::endl;
    std::cout << "| |__| | | ) )  / ____ ) |__| | |__| | |)  |  | . ) |__| || |_ " << std::endl;
    std::cout << "|_____/|_|  )_)/_/    )_)_____|(____/|_| )_|  |_|(_)____/_____|" << std::endl;

    //variables de logica de programacion (seleccion de camino)
    std::string s1, s2, s3;
    int pez = 0;
    int seleccion = 0;
    int cambio_nombres = 0;

    //condiciones de victoria
    double posicion_final = 0;
    double velocidad_maxima = 0;

    // variables matematicas
    double regreso;
    double tiempo = 0;
    double peso = 0;
    double aceleracion = 0;
    double friccion = 0;
    double velocidad_inicial = 0;
    double posicion_inicial = 0;
    double euler = 2.71828;

    // Variable de menu
    int menu;


    std::cout << "Quieres jugar viendo el codigo de juego, si es asi: preisiona 1) si, 2) no ";
    std::cin >> menu;




    std::cout << " Bienvenido a tu camino a la transicion" << std::endl;
    std::cout << "Por favor, elige a tu viajero: 1)super pez, 2) No pescado, 3) Si pescado " << std::endl;
    std::cin >> pez;
    switch (pez)
    {
    case 1:
        peso = 2;
        aceleracion = 3;
        velocidad_maxima = 2.999999;
        posicion_final = 130;
        std::cout << "Escogiste a super pez " << std::endl;
        std::cout << "       / * _         _" << std::endl;
        std::cout << "  .-*'`    `*-.._.-'(" << std::endl;
        std::cout << "< * ))     ,       ( " << std::endl;
        std::cout << " `*-._`._(__.--* `*(" << std::endl;
        std::cout << "El peso de super pez es:" << peso << "kg" << std::endl;
        std::cout << "Su aceleracion es de:" << aceleracion << "m/s^2" << std::endl;
        std::cout << " Tu mision es  subir la cascada de asmul" << std::endl;
        std::cout << "Tienes que alcanzar tu velocidad maxima en lo mas alto de la cascada: " << std::endl;

        break;
    case 2:
        peso = 4;
        aceleracion = 2;
        velocidad_maxima = 3.999999;
        posicion_final = 190;
        std::cout << "Escogiste a no pescado " << std::endl;
        std::cout << "                            ";
        std::cout << "                o      ______/~/~/~/__          /((" << std::endl;
        std::cout << "                o      ______/~/~/~/__          /((" << std::endl;
        std::cout << "                o   // __            ====__    /_((" << std::endl;
        std::cout << "                o  //  @))       ))))      ===/__((" << std::endl;
        std::cout << "                   ))           )))))))        __((" << std::endl;
        std::cout << "                    \\     ())     ))))    __===() _((" << std::endl;
        std::cout << "                    \\_______________====      )_((" << std::endl;
        std::cout << "                                               )((" << std::endl;
        std::cout << "El peso de no pescado es:" << peso << "kg" << std::endl;
        std::cout << "Su aceleracion es de:" << aceleracion << "m/s^2" << std::endl;
        std::cout << " Tu mision es subir la cascada de asmul" << std::endl;
        std::cout << "Tienes que alcanzar tu velocidad maxima en lo mas alto de la cascada: " << std::endl;
        break;
    case 3:
        peso = 1;
        aceleracion = 1;
        velocidad_maxima = 0.4999999;
        posicion_final = 40;
        std::cout << "Escogiste a si pescado " << std::endl;
        std::cout << "            | )    ) ) ) ) ) )      __  " << std::endl;
        std::cout << "            |   )   ) ) ) ) ) ) )   | O~-_" << std::endl;
        std::cout << "            |   >----|-|-|-|-|-|-|--|  __/" << std::endl;
        std::cout << "            |   )    )  ) ) ) ) ) ) |__)  " << std::endl;
        std::cout << "            |  )    )  ) ) ) ) )" << std::endl;
        std::cout << "El peso de si pescado es:" << peso << "kg" << std::endl;
        std::cout << "Su aceleracion es de:" << aceleracion << "m/s^2" << std::endl;
        std::cout << " Tu mision es subir la cascada de asmul" << std::endl;
        std::cout << "Tienes que alcanzar tu velocidad maxima en lo mas alto de la cascada: " << std::endl;
        break;
    }
    while (posicion_inicial < posicion_final)
    {
        switch (cambio_nombres)
        {
        case 0: s1 = "Rocoso"; s2 = "Rapidos"; s3 = "Desconocido";
            break;
        case 1: s1 = "Osos hambrientos"; s2 = "Calaveras con sombrero"; s3 = "Camino a la demencia";
            break;
        case 2: s1 = "Camino de patos"; s2 = "Pescadores"; s3 = "El camino soleado";
            break;

        }

        std::cout << "Selecciona tu camino para recorrer la cascada 1)" << s1 << " 2)" << s2 << " 3)" << s3 << std::endl;
        std::cin >> seleccion;

        switch (seleccion) {
        case 1:
            std::cout << "Elegiste el camino " << s1 << std::endl;
            friccion = 4;
            tiempo = 6;

            velocidad_inicial = primeraDerivada(peso, aceleracion, friccion, velocidad_inicial, posicion_inicial, euler, tiempo, menu);
            regreso = segundaDerivada(velocidad_inicial, peso, aceleracion, friccion, euler, tiempo, menu);
            posicion_inicial = Posicion(posicion_inicial, peso, aceleracion, friccion, velocidad_inicial, euler, tiempo, menu);

            if (menu == 1) {
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++  La velocidad es: " << velocidad_inicial << " m/s ++++++++++++++++++++++++++++";
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++  La aceleracion es: " << regreso << " m/s^2 ++++++++++++++++++++++++++++";
                std::cout << std::endl;
                std::cout << "posicion " << posicion_inicial << std::endl;
            }
            if (posicion_inicial <= (posicion_final / 2)) {
                std::cout << "Parece ser un buen camino " << std::endl;
            }
            if (posicion_inicial > (posicion_final / 2) && posicion_inicial < (posicion_final * 0.8)) {
                std::cout << "Presientes que no llegaras muy lejos " << std::endl;
            }
            if (posicion_inicial >= (posicion_final * 0.8)) {
                std::cout << "No siempre el camino mas seguro es el mas rapido" << std::endl;
            }

            break;
        case 2:
            std::cout << "Elegiste el camino " << s2 << std::endl;
            friccion = 5;
            tiempo = 3;



            velocidad_inicial = primeraDerivada(peso, aceleracion, friccion, velocidad_inicial, posicion_inicial, euler, tiempo, menu);
            regreso = segundaDerivada(velocidad_inicial, peso, aceleracion, friccion, euler, tiempo, menu);
            posicion_inicial = Posicion(posicion_inicial, peso, aceleracion, friccion, velocidad_inicial, euler, tiempo, menu);
            if (menu == 1) {
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++  La velocidad es: " << velocidad_inicial << " m/s ++++++++++++++++++++++++++++";
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++  La aceleracion es: " << regreso << " m/s^2 ++++++++++++++++++++++++++++";
                std::cout << std::endl;
                std::cout << "posicion " << posicion_inicial << std::endl;
            }
            if (posicion_inicial <= (posicion_final / 2)) {
                std::cout << "El esfuerzo a la larga siempre da frutos " << std::endl;
            }
            if (posicion_inicial > (posicion_final / 2) && posicion_inicial < (posicion_final * 0.8)) {
                std::cout << "El camino a la gloria en veces es turbulento " << std::endl;
            }
            if (posicion_inicial >= (posicion_final * 0.8)) {
                std::cout << "Si te acercas mucho al cielo te puedes quemar" << std::endl;
            }
            break;

        case 3:
            std::cout << "Elegiste el camino " << s3 << std::endl;
            friccion = 2;
            tiempo = 2;



            velocidad_inicial = primeraDerivada(peso, aceleracion, friccion, velocidad_inicial, posicion_inicial, euler, tiempo, menu);
            regreso = segundaDerivada(velocidad_inicial, peso, aceleracion, friccion, euler, tiempo, menu);
            posicion_inicial = Posicion(posicion_inicial, peso, aceleracion, friccion, velocidad_inicial, euler, tiempo, menu);
            if (menu == 1) {
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++  La velocidad es: " << velocidad_inicial << " m/s ++++++++++++++++++++++++++++";
                std::cout << std::endl;
                std::cout << "++++++++++++++++++++++++++  La aceleracion es: " << regreso << " m/s^2 ++++++++++++++++++++++++++++";
                std::cout << std::endl;
                std::cout << "posicion " << posicion_inicial << std::endl;
            }
            if (posicion_inicial <= (posicion_final / 2)) {
                std::cout << "Parece ser que no es la mejor opcion " << std::endl;
            }
            if (posicion_inicial > (posicion_final / 2) && posicion_inicial < (posicion_final * 0.8)) {
                std::cout << "La energia que das es la energia que recibiras" << std::endl;
            }
            if (posicion_inicial >= (posicion_final * 0.8)) {
                std::cout << "Sientes el fuego por tus venas" << std::endl;
            }
            break;

        }
        cambio_nombres++;
        if (cambio_nombres == 3) { cambio_nombres = 0; }
    }

    if (velocidad_inicial >= velocidad_maxima) {
        std::cout << "tu velocidad es tan alta que empiezas a sentir como te elevas por los cielos  " << std::endl;
        std::cout << "                                     ^    ^                 " << std::endl;
        std::cout << "                                    / \\  / \\                 " << std::endl;
        std::cout << "                                    /.  \\/  \\      |\\___/|   " << std::endl;
        std::cout << "                *----*           / / |  \\    \\  __/  O  O \\   " << std::endl;
        std::cout << "                |   /          /  /  |   \\    \\_\\/  \\    \\    " << std::endl;
        std::cout << "                / / /         /   /   |    \\   _\\/    '@___@)      " << std::endl;
        std::cout << "                /  /         /    /    |     \\ _\\/       |U       " << std::endl;
        std::cout << "                |  |       /     /     |      \\\\/        |        " << std::endl;
        std::cout << "                |  |     /_     /      |       \\  )   \\ _|_       " << std::endl;
        std::cout << "                |   )       ~-./_ _    |    .- ; (  \\_ _ _,\'       " << std::endl;
        std::cout << "               ~    ~.           .-~-.|.-*      _        {-,        " << std::endl;
        std::cout << "                (      ~-. _ .-~                 \\      /\'         " << std::endl;
        std::cout << "                (                   }            {   .*             " << std::endl;
        std::cout << "                ~.                 '-/        /.-~----.             " << std::endl;
        std::cout << "                    ~- _             /        >..----.\\           " << std::endl;
        std::cout << "                        ~ - - - - ^}_ _ _ _ _ _ _.-\\             " << std::endl;
        std::cout << "y te transformas en un super dragon  " << std::endl;

    }
    else {
        std::cout << "tu velocidad es tan alta que empiezas a sentir como te elevas por los cielos  " << std::endl;
        switch (pez)
        {
        case 1:
            std::cout << "parece ser que te quedaste atrapado en una bolsa de plastico :(" << std::endl;


            break;
        case 2:
            std::cout << "Sientes como el fuego del dragon arde por tus venas " << std::endl;
            std::cout << "Sin embargo te das cuenta que estas en un sarten los pescadores te atraparon :(" << std::endl;



            break;
        case 3:
            std::cout << "plop twist siempre estuviste muerto :( " << std::endl;


            break;
        }
        std::cout << "                               " << std::endl;
        std::cout << "               @@@@@@@@@         " << std::endl;
        std::cout << "        @@@@@@#       @@           " << std::endl;
        std::cout << "   @@@@            @@@               " << std::endl;
        std::cout << "               ####                    " << std::endl;
        std::cout << " @@            @@@@                      " << std::endl;
        std::cout << " @@            @@                          " << std::endl;
        std::cout << "@@                 @@                        " << std::endl;
        std::cout << " @@                   @@                       " << std::endl;
        std::cout << "     -#          @@                              " << std::endl;
        std::cout << "   @@@         @@@         @@                      " << std::endl;
        std::cout << " @@@           @@@@@@@@  @@            @@@@@@@@@@@@  " << std::endl;
        std::cout << " @@@        @@        @@          @@@@            @@@@@ " << std::endl;
        std::cout << " @@          @@                 @@@@                      @@" << std::endl;
        std::cout << "@@          @@                 @@@@                        @@ " << std::endl;
        std::cout << " @@          @@              @@@       @@   @@     @@     @@   " << std::endl;
        std::cout << "@@          @@            @@             @@            @@@@@   " << std::endl;
        std::cout << "@@            @@     @@@@@     @@     @@   @@       @@   @@   " << std::endl;
        std::cout << "@@                             @@                   @@   @@   " << std::endl;
        std::cout << "@@               @@@@          @@                 @@     @@   " << std::endl;
        std::cout << " @@@                          @@              -@@      @@@     " << std::endl;
        std::cout << " %@@                       @@@  @@            @@@      @@@     " << std::endl;
        std::cout << " @@@                     @@     @@                   @@@     " << std::endl;
        std::cout << "   ++                 @@          *                 -+        " << std::endl;
        std::cout << "   @@                .@@         -@@              @@        " << std::endl;
        std::cout << "   @@                 @@            @@@@          @@        " << std::endl;
        std::cout << "     @@            @@+           *@@    @@@@@   @@          " << std::endl;
        std::cout << "         #          @@@       @@@@            @@             " << std::endl;
        std::cout << "        @@         @@@       @@@@:           @@             " << std::endl;
        std::cout << "          @@@@        @@@@@@@            @@@@               " << std::endl;
        std::cout << "               @@@@@@@           #@@@@@@                    " << std::endl;
        std::cout << "                     @@@@@@@@@@@                           " << std::endl;
    }


}
