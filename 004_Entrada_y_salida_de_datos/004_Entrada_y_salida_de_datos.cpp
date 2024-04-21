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
        cout << "Tu IMC es " << IMC;
        if (sexo == 'f' && IMC < 19) {
            cout<< "\nUsted se encuentra en un rango de peso insuficiente\n";
        }
        if (sexo == 'f' && IMC >= 19 && IMC < 25) {
            cout << "\nUsted se encuentra en un rango de peso saludable\n";
        }
        if (sexo == 'f' && IMC >= 25 && IMC < 28) {
            cout << "\n  Usted se encuentra en un rango de ligero sobrepeso\n";
        }
        if (sexo == 'f' && IMC >= 28) {
           cout << "\nUsted se encuentra en un rango de obesidad severa\n";
        }
        if (sexo == 'm' && IMC < 19) {
            cout << "\nUsted se encuentra en un rango de peso insuficiente\n";
        }
        if (sexo == 'm' && IMC >= 19 && IMC < 25) {
            cout << "\nUsted se encuentra en un rango de peso saludable\n";
        }
        if (sexo == 'm' && IMC >= 25 && IMC < 29) {
            cout << "\n  Usted se encuentra en un rango de ligero sobrepeso\n";
        }
        if (sexo == 'm' && IMC >= 29) {
            cout << "\nUsted se encuentra en un rango de obesidad severa";
        }
        else {
            cita = "no";
            cout << "\nTen un buen dia ";
        }




    }
}

