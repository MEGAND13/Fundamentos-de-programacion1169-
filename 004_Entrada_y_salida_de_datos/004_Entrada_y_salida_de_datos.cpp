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
    float IMC;

    cout << "Hola, requiere asistencia medica? \n si la respuesta es si seleccione 1 \n si la respuesta es no seleccione 0 ";
    cin >> requiere_cita;
    if (requiere_cita) {
        cita = "si";
        cout << "cual es tu nombre";
        cin >> Nombre;
        cout << " Un placer atenderte " << Nombre;
        cout << " Selecciona tu sexo M/F ";
        cin >> sexo;
        cout << "Indica tu edad ";
        cin >> edad;
        cout << "Indica tu estatura en m² ";
        cin >> estatura;
        cout << "Indica tu peso";
        cin >> peso;
        IMC = peso / pow(estatura, 2);
        cout << "Indica tu peso ";
        cout << "Tu IMC es " << IMC;
        if (IMC <= 18.5) {
            cout << "Usted se encuentra en rango de peso insuficiente";
        }
        if (IMC >= 18.5 && IMC < 25) {
            cout << "Usted se encuentra en rango de peso saludable";
        }
        if (IMC >= 25 && IMC < 30) {
            cout << "Usted tiene sobre peso";
        }
        if (IMC >= 30) {
            cout << "Usted se encuentra dentro del rango de obesidad";
        }
        else {
            cita = "no";
            cout << "Ten un buen dia ";
        }




    }
}

