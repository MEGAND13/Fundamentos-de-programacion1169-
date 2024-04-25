// 001_Hola_Mundo.

#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>
using namespace std;

int main()

{

	setlocale(LC_ALL, "es_MX.UTF-8");//Librería para incluir caractere del Español 
	/*// std::cout sirve para mostrar en la terminal.
	std::cout << "Hola Mundo!\n";

	// Ahora interactuemos un poco con el usuario
	//Operadores y tipos de variables.


	int a1, a2; // La variable tipo int es solo para valores enteros
	std::cout << "Comencemos \nIntroduce un numero del tipo entero (< 32 bits)\n";
	std::cin >> a1;
	std::cout << a1;

	//Excelente, ahora comencemos con operaciones utilizando la misma variable.
	int Suma;
	std::cout << "\n Ahora introduce 2 enteros (int) numeros para realizar una suma \n";
	std::cin >> a1;
	std::cin >> a2;
	Suma = a1 + a2;
	std::cout << "Tu resultado es \n" << Suma;


	int Resta;
	std::cout << "\n Ahora introduce 2 numeros para realizar una resta \n";
	std::cin >> a1;
	std::cin >> a2;
	Resta = a1 - a2;
	std::cout << "Tu resultado es \n" << Resta;

	int Multiplicacion;
	std::cout << "\n Ahora introduce 2 numeros para realizar una multiplicacion \n";
	std::cin >> a1;
	std::cin >> a2;
	Multiplicacion = a1 * a2;
	std::cout << "Tu resultado es \n" << Multiplicacion;

	int Division;
	std::cout << "\n Ahora introduce 2 numeros para realizar una division \n";
	std::cin >> a1;
	std::cin >> a2;
	Division = a1 / a2;
	std::cout << "Tu resultado es \n" << Division;

	int Raiz;
	std::cout << "\n Ahora calcula la raiz \n";
	std::cin >> a1;
	Raiz = sqrt (a1);//sqrt se utiliza para sacar raíz cuadrada
	std::cout << "La raíz cuadrada de "<< a1 <<" es: "<< Raiz;

	int Potencia;
	std::cout << "\n Ahora elevaremos un numero a la potencia que tu quieras \n";
	std::cin >> a1;
	std::cin >> a2;
	Potencia = pow(a1,a2);
	std::cout << "Tu resultado es \n" << Potencia;


	//Sigamos con otro tipo de variable.
	double b1,b2;
	double Suma_double;//La variable "double" es muy parecida a la variable "int" tambien son valores enteros, pero esta tiene mayor capacidad de datos.
	std::cout << "\n Ahora introduce 2 numeros (double) para realizar una suma \n";
	std::cin >> b1;
	std::cin >> b2;
	Suma_double = b1 + b2;
	std::cout << "Tu resultado es \n" << Suma_double;


	double Resta_double;
	std::cout << "\n Ahora introduce 2 numeros para realizar una resta \n";
	std::cin >> b1;
	std::cin >> b2;
	Resta_double = b1 - b2;
	std::cout << "Tu resultado es \n" << Resta_double;

	double Multiplicacion_double;
	std::cout << "\n Ahora introduce 2 numeros para realizar una multiplicacion \n";
	std::cin >> b1;
	std::cin >> b2;
	Multiplicacion_double = b1 * b2;
	std::cout << "Tu resultado es \n" << Multiplicacion_double;

	double Division_double;
	std::cout << "\n Ahora introduce 2 numeros para realizar una division \n";
	std::cin >> b1;
	std::cin >> b2;
	Division_double = b1 / b2;
	std::cout << "Tu resultado es \n" << Division_double;

	double Raiz_double;
	std::cout << "\n Ahora calcula la raiz \n";
	std::cin >> b1;
	Raiz_double = sqrt(b1);//sqrt se utiliza para sacar raíz cuadrada
	std::cout << "La raíz cuadrada de " << b1 << " es: " << Raiz_double;

	double Potencia_double;
	std::cout << "\n Ahora elevaremos un numero a la potencia que tu quieras\n";
	std::cin >> b1;
	std::cin >> b2;
	Potencia_double = pow(b1, b2);
	std::cout << "Tu resultado es \n" << Potencia_double;


	//Sigamos con nuestro siguiente tipo de variable.
	float c1, c2;
	float Suma_float;//La variable "float" se utiliza para valores con punto decimal.
	std::cout << "\n Ahora introduce 2 numeros con punto decimal (float) para realizar una suma \n";
	std::cin >> c1;
	std::cin >> c2;
	Suma_float = c1 + c2;
	std::cout << "Tu resultado es \n" << Suma_float;


	float Resta_float;
	std::cout << "\n Ahora introduce 2 numeros con punto decimal para realizar una resta \n";
	std::cin >> c1;
	std::cin >> c2;
	Resta_float = c1 - c2;
	std::cout << "Tu resultado es \n" << Resta_float;

	float Multiplicacion_float;
	std::cout << "\n Ahora introduce 2 numeros para realizar una multiplicacion \n";
	std::cin >> c1;
	std::cin >> c2;
	Multiplicacion_float = c1 * c2;
	std::cout << "Tu resultado es \n" << Multiplicacion_float;

	float Division_float;
	std::cout << "\n Ahora introduce 2 numeros para realizar una division \n";
	std::cin >> c1;
	std::cin >> c2;
	Division_float = c1 / c2;
	std::cout << "Tu resultado es \n" << Division_float;

	float Raiz_float;
	std::cout << "\n Ahora calcula la raiz \n";
	std::cin >> c1;
	Raiz_float = sqrt(c1);
	std::cout << "La raíz cuadrada de " << c1 << " es: " << Raiz_float;

	float Potencia_float,c1,c2;
	std::cout << "\n Ahora elevaremos un numero a la potencia que tu quieras \n";
	 std::cin >>  c1;
	 std::cin >> c2;
	Potencia_float = pow(c1, c2);
	std::cout << "Tu resultado es \n" << Potencia_float << endl;

	//Sigamos con nuestro siguiente tipo de variable.
	int d1, d2;
	bool resultado;// La variable bool es una variable logica, por lo que solo se maneja en verdadero o falso.
	std::cout << "Introduce dos numeros";
	std::cin >> d1;
	std::cin >> d2;
	resultado = d1 > d2;
	if (resultado) { std::cout << "El primer numero es mayor que el segundo"; }
	else { std::cout << "El segundo numero es mayor que el primero" << endl; }*/

	//Sigamos con nuestro siguiente tipo de variable.
	char sexo;// char es una variable que solo almacena un caracter, estos se declaran en comillas simples ' '.
	std::cout << "selecciona tu sexo m/f" << endl;
	std::cin >> sexo;
	if (sexo == 'm') { std::cout << "Usted es masculino"; }
	else { std::cout << "Usted es femenino" << endl; }

	//Sigamos con nuestro siguiente tipo de variable.
	string Nombre; // la variable string es una cadena de caracteres.
	std::cout << "Hola\n cual es tu nombre? " << endl;
	std::cin.ignore();
	getline(std::cin, Nombre);
	std::cout << "Hola " << Nombre << endl;

	// Avancemos un poco más, pídele al usuraio su edad.
	int edad = 0;
	std::cout << "¿Cual es tu edad?" << endl;
	std::cin >> edad;
	std::cout << "Entonces tienes " << edad << " años";





}

