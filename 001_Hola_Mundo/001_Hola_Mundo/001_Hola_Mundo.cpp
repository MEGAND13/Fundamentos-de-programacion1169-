// 001_Hola_Mundo.

#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>
using namespace std; 

int main()

{

	setlocale(LC_ALL, "es_MX.UTF-8");//Librería para incluir caractere del Español 
	// cout sirve para mostrar en la terminal. 
	cout << "Hola Mundo!\n";

	// Ahora interactuemos un poco con el usuario 
	//Operadores y tipos de variables. 


	int a1, a2; // La variable tipo int es solo para valores enteros
	cout << "Comencemos \n""Introduce un numero \n";
	cin >> a1;
	cout << a1;

	//Excelente, ahora comencemos con operaciones utilizando la misma variable.
	int Suma;
	cout << "\n Ahora introduce 2 enteros (int) numeros para realizar una suma \n";
	cin >> a1;
	cin >> a2;
	Suma = a1 + a2;
	cout << "Tu resultado es \n" << Suma;


	int Resta;
	cout << "\n Ahora introduce 2 numeros para realizar una resta \n";
	cin >> a1;
	cin >> a2;
	Resta = a1 - a2;
	cout << "Tu resultado es \n" << Resta;

	int Multiplicacion;
	cout << "\n Ahora introduce 2 numeros para realizar una multiplicacion \n";
	cin >> a1;
	cin >> a2;
	Multiplicacion = a1 * a2;
	cout << "Tu resultado es \n" << Multiplicacion;

	int Division;
	cout << "\n Ahora introduce 2 numeros para realizar una division \n";
	cin >> a1;
	cin >> a2;
	Division = a1 / a2;
	cout << "Tu resultado es \n" << Division;

	int Raiz;
	cout << "\n Ahora calcula la raiz \n";
	cin >> a1;
	Raiz = sqrt (a1);//sqrt se utiliza para sacar raíz cuadrada
	cout << "La raíz cuadrada de "<< a1 <<" es: "<< Raiz;

	int Potencia;
	cout << "\n Ahora elevaremos un numero a la potencia que tu quieras \n";
	cin >> a1;
	cin >> a2;
	Potencia = pow(a1,a2);
	cout << "Tu resultado es \n" << Potencia;


	//Sigamos con otro tipo de variable.
	double b1,b2;
	double Suma_double;//La variable "double" es muy parecida a la variable "int" tambien son valores enteros, pero esta tiene mayor capacidad de datos.
	cout << "\n Ahora introduce 2 numeros enteros (double) para realizar una suma \n";
	cin >> b1;
	cin >> b2;
	Suma_double = b1 + b2;
	cout << "Tu resultado es \n" << Suma_double;


	double Resta_double;
	cout << "\n Ahora introduce 2 numeros para realizar una resta \n";
	cin >> b1;
	cin >> b2;
	Resta_double = b1 - b2;
	cout << "Tu resultado es \n" << Resta_double;

	double Multiplicacion_double;
	cout << "\n Ahora introduce 2 numeros para realizar una multiplicacion \n";
	cin >> b1;
	cin >> b2;
	Multiplicacion_double = b1 * b2;
	cout << "Tu resultado es \n" << Multiplicacion_double;

	double Division_double;
	cout << "\n Ahora introduce 2 numeros para realizar una division \n";
	cin >> b1;
	cin >> b2;
	Division_double = b1 / b2;
	cout << "Tu resultado es \n" << Division_double;

	double Raiz_double;
	cout << "\n Ahora calcula la raiz \n";
	cin >> b1;
	Raiz_double = sqrt(b1);//sqrt se utiliza para sacar raíz cuadrada
	cout << "La raíz cuadrada de " << b1 << " es: " << Raiz_double;

	double Potencia_double;
	cout << "\n Ahora elevaremos un numero a la potencia que tu quieras\n";
	cin >> b1;
	cin >> b2;
	Potencia_double = pow(b1, b2);
	cout << "Tu resultado es \n" << Potencia_double;


	//Sigamos con nuestro siguiente tipo de variable.
	float c1, c2;
	float Suma_float;//La variable "float" se utiliza para valores con punto decimal.
	cout << "\n Ahora introduce 2 numeros con punto decimal (float) para realizar una suma \n";
	cin >> c1;
	cin >> c2;
	Suma_float = c1 + c2;
	cout << "Tu resultado es \n" << Suma_float;


	float Resta_float;
	cout << "\n Ahora introduce 2 numeros con punto decimal para realizar una resta \n";
	cin >> c1;
	cin >> c2;
	Resta_float = c1 - c2;
	cout << "Tu resultado es \n" << Resta_float;

	float Multiplicacion_float;
	cout << "\n Ahora introduce 2 numeros para realizar una multiplicacion \n";
	cin >> c1;
	cin >> c2;
	Multiplicacion_float = c1 * c2;
	cout << "Tu resultado es \n" << Multiplicacion_float;

	float Division_float;
	cout << "\n Ahora introduce 2 numeros para realizar una division \n";
	cin >> c1;
	cin >> c2;
	Division_float = c1 / c2;
	cout << "Tu resultado es \n" << Division_float;

	float Raiz_float;
	cout << "\n Ahora calcula la raiz \n";
	cin >> c1;
	Raiz_float = sqrt(c1);
	cout << "La raíz cuadrada de " << c1 << " es: " << Raiz_float;

	float Potencia_float;
	cout << "\n Ahora elevaremos un numero a la potencia que tu quieras \n";
	cin >> c1;
	cin >> c2;
	Potencia_float = pow(c1, c2);
	cout << "Tu resultado es \n" << Potencia_float;

	//Sigamos con nuestro siguiente tipo de variable.
	int d1, d2;
	bool resultado;// La variable bool es una variable logica, por lo que solo se maneja en verdadero o falso. 
	cout << "Introduce dos numeros";
	cin >> d1;
	cin >> d2;
	resultado = d1 > d2;
	if (resultado) { cout << "El primer numero es mayor que el segundo"; }
	else { cout << "El segundo numero es mayor que el primero"; }

	//Sigamos con nuestro siguiente tipo de variable.
	char sexo;// char es una variable que solo almacena un caracter, estos se declaran en comillas simples ' '.
	cout << "selecciona tu sexo m/f";
	cin >> sexo;
	if (sexo == 'm') { cout << "Usted es masculino"; }
	else { cout << "Usted es femenino"; }

	//Sigamos con nuestro siguiente tipo de variable.
	string Nombre;// la variable string es una cadena de caracteres.
	cout << "Hola\n cual es tu nombre?";
	cin >> Nombre; 
	cout << "Hola "<< Nombre;



	// Avancemos un poco más, pídele al usuraio su edad.
	int edad;
	cout << "¿Cual es tu edad?";
	cin >> edad;
	cout << "Entonces tienes " << edad << " años";



	


	

	



}

