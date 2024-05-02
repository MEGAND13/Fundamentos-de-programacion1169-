// P005 Operadores Aritmeticos_Bibliotecas y funciones (revisar despues de operaciones aritmeticas).

#include <iostream>
#include <locale.h>
#include <string>
#include <math.h>


int main()
/*En esta practica, seguiremos practicando con los tipos de datos
realizando operaciones aritmeticas, pero ahora trabajaremos con funciones*/


{
	/*Valor absoluto :
	abs(x) Esta función devuelve el valor absoluto de un número.*/
	int numero = 0;
	std::cout << "Esta funcion te dara el valor abosoluto de un numero entero \n"" por favor Introduce un numero \n";
	std::cin >> numero;
	int valorabsoluto = abs(numero);
	std::cout << " El valor absoluto de " << numero << " es " << valorabsoluto << "\n";

	/*Raiz cuadrada: sqrt(x)
	sqrt (x) devuelve la raíz cuadrada de un numero.*/
	float numero2 = 0;
	std::cout << "Esta funcion te dara el la raiz cuadrada de un numero\n"" por favor Introduce un numero \n";
	std::cin >> numero2;
	float raiz = sqrt(numero2);
	std::cout << " La raiz cuadrada de " << numero2 << " es " << sqrt(numero2) << "\n";

	/*Raíz cúbica: cbrt(x)
	cbrt(x) devuelve la raíz cubica de un numero*/
	float numero3 = 0;
	std::cout << "Esta funcion te dara el la raiz cubica de un numero\n"" por favor Introduce un numero \n";
	std::cin >> numero3;
	float raizcubica = cbrt(numero3);
	std::cout << " La raiz cubica de " << numero3 << " es " << cbrt(numero3) << "\n";

	/*Potencia: pow(x, y)
	Esta función multiplica x elevado a y*/
	float x = 0;
	float y = 0;
	std::cout << "Esta funcion elevara cualquier numero a la potencia del numero que indiques\n"" por favor Introduce dos numero  \n";
	std::cin >> x;
	std::cin >> y;
	float resultado = pow(x, y);
	std::cout << " El numero " << x << " elevado a " << y << " es " << resultado << "\n";

	/*Exponencial: exp(x)
	Esta función multiplica el valor de e(2, 71828) elevado a x*/
	float a = 0;
	std::cout << "Esta funcion multiplica el valor de e(2, 71828) (valor euler) elevado a\n" << a << "\n";
	std::cin >> a;
	float result = exp(a);
	std::cout << " El numero " << a << " multiplicado por el valor e \n" " es " << result << "\n";


	/*Logaritmo natural: log(x)
	Esta función devuelve el logaritmo natural de un número.
	El logaritmo natural de un número es básicamente la cantidad de veces que 
	necesitas multiplicar el número 'e' (2.71828) 
	por sí mismo para obtener ese número específico. 
	Es una herramienta útil en matemáticas para 
	resolver problemas relacionados con el crecimiento exponencial o decaimiento.*/

	float b = 0;
	std::cout << "Esta funcion te dara el logaritmo natural de un numero que indiques\n""por favor, introduce un numero \n";
	std::cin >> b;
	float ResulnaturalLog = log(b);
	std::cout << " El logaritmo natural de" << b << "es"  << ResulnaturalLog << "\n";

	/*Logaritmo de base 10: log10(x)
	Esta función calcula el logaritmo en base 10 de un número.*/

	float c = 0;
	std::cout << "Esta funcion calcula el logaritmo base 10 de un numero\n "" por favor, introduce un numero \n";
	std::cin >> c;
	float log10Valor = log10(c);
	std::cout << " El logaritmo base 10 de " << b << "es" << log10Valor << "\n";

	/*Logaritmo de base 2: log2(x)
	Esta función calcula el logaritmo de base 2 de un número.*/ 
	float d = 0;
	std::cout << "Esta funcion calcula el logaritmo base 2 de un numero\n "" por favor, introduce un numero \n";
	std::cin >> d;
	float log2Valor = log2(d);
	std::cout << " El logaritmo base 2 de " << b << "es" << log2Valor << "\n";

	/*Piso: piso(x)
	Esta función devuelve el número entero más grande que sea menor o igual a x.*/
	float e = 0;
	std::cout << "Esta funcion devuelve el número entero más grande que sea menor o igual a un numero\n "" por favor, introduce un numero<< \n";
	std::cin >> e;
	float floorValor = floor(e);
	std::cout << " El valor minimo de " << e << "es" << floorValor << "\n";

	/*Techo: techo(x)
	Esta función devuelve el número entero más pequeño que sea mayor o igual a x.*/
	float f = 0;
	std::cout << "Esta funcion devuelve el número entero más pequeño que sea mayor o igual a un número \n "" por favor, introduce un numero<< \n";
	std::cin >> f;
	float ceilValor = ceil(f);
	std::cout << " El valor minimo de " << f << "es" << ceilValor << "\n";

	/*Ronda: ronda (x)
	Esta función redondea x al entero más cercano.*/
	float g = 0;
	std::cout << "Esta funcion redondeo numeros al entero mas cercano\n "" por favor, introduce un numero \n";
	std::cin >> g;
	float  roundedValor = round(g);
	std::cout << " El numero " << g << " redondeado es" << roundedValor << "\n";

	/*Seno: sin(x)
	Esta función devuelve el seno de x en radianes.*/
	float h = 0;
	std::cout << "Esta funcion devuelve el seno de un numero en radianes\n "" por favor, introduce un numero<< \n";
	std::cin >> h;
	float  sinValor = sin(h);
	std::cout << " El seno de " << h << " en radianes es" << sinValor << "\n";

	/*Coseno: cos(x)
	Esta función devuelve el coseno de x en radianes.*/
	float I = 0;
	std::cout << "Esta funcion devuelve el coseno de un numero en radianes\n "" por favor, introduce un numero<< \n";
	std::cin >> I;
	float  cosinValor = cos(I);
	std::cout << " El coseno de " << I << " redondeado es" << cosinValor << "\n";

	/*Tangente: tan(x)
	Esta función devuelve la tangente de x en radianes.*/
	float J = 0;
	std::cout << "Esta función devuelve la tangente de un numero en radianes\n "" por favor, introduce un numero<< \n";
	std::cin >> J;
	float  tangentValor = tan(J);
	std::cout << " La tangente de " << J << " en radianes es" << tangentValor << "\n";

	/*Arcocoseno: acos(x)
	Esta función devuelve el arcocoseno de x en radianes.*/
	float l = 0;
	std::cout << "Esta función devuelve el arcoseno de un numero en radianes.\n "" por favor, introduce un numero<< \n";
	std::cin >> l;
	float  arccosineValor = acos(l);
	std::cout << " El arcoseno de " << l << " en radianes es" << arccosineValor << "\n";

	/*Arctangente: atan(x)
	Esta función devuelve el arcotangente de x en radianes.*/
	float m = 0;
	std::cout << "Esta función devuelve el arcotangente de un numero en radianes.\n "" por favor, introduce un numero \n";
	std::cin >> m;
	float  arcoTanValor = atan(m);
	std::cout << " El arcotangente de " << m << " en radianes es" << arcoTanValor << "\n";

	/*Seno hiperbólico : sinh(x)
	Esta función devuelve el seno hiperbólico de x .*/ 
	float n = 0;
	std::cout << "Esta función devuelve el seno hiperbólico de un numero.\n "" por favor, introduce un numero<< \n";
	std::cin >> n;
	float  hyperbolicSine = sinh(n);
	std::cout << " El seno hiperbolico de " << n << " es " << arccosineValor << "\n";

	/*Coseno hiperbólico : cosh(x)
	Esta función devuelve el coseno hiperbólico de x .*/
	float o = 0;
	std::cout << "Esta función devuelve el coseno hiperbólico de un numero.\n "" por favor, introduce un numero \n";
	std::cin >> o;
	float hyperbolicCosine = cosh(o);
	std::cout << " La arcotangente con cos de " << o << " en radianes es " << arccosineValor << "\n";

	/*Tangente hiperbólica : tanh(x)
	Esta función devuelve la tangente hiperbólica de x.*/
	float p = 0;
	std::cout << "Esta función devuelve la tangente hiperbólica de un numero.\n "" por favor, introduce un numero \n";
	std::cin >> p;
	float hyperbolicTangent = tanh(p);
	std::cout << " La arcotangente de " << p << " en radianes es " << arccosineValor << "\n";


	



	










	 



	}




