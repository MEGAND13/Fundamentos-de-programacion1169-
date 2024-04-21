// 004_Entrada_y_salida_de_datos (consultorio medico)
#include <iostream>
#include <math.h>
using namespace std; 


int main()
{
    bool requiere_cita;
    string cita;
    string Nombre; 
    char sexo;
    int edad;
    int peso;
    float estatura;
    
    cout << 
        "Hola, requiere asistencia medica? \n si la respuesta es si seleccione 1 \n si la respuesta es no seleccione 0 ";
    cin >> requiere_cita;
    if (requiere_cita) { 
        cita = "si";
        cout << "cual es tu nombre";
        cin >> Nombre; 
        cout << " Un placer atenderte" << Nombre;
        cout << " Selecciona tu sexo M/F";
        cin >> sexo;
        cout << "Indica tu edad";
        cin >> edad;
        cout << "Indica tu estatura en m²";
        cin >> estatura;
        cout << "Indica tu peso";
        cin >> peso;
        cout << "Tu IMC es" << peso / pow(estatura,2); 

    }
    else { 
        cita = "no"; 
        cout << "Ten un buen dia";
    }



    
}

