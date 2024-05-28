//009_condicionales
#include <iostream>
#include <cmath>
int main() {
    //Utilizar decisiones múltiples para realizar una calculadora. Case 5: Valor Absoluto Case 6: Mayor y menor que

    std::cout << "Esto es una calculadora de suma, resta, multiplicación, división, valor absoluto y comparador de numeros" << std::endl;
	int a1, a2; 
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
    // 
    float valor;
    std::cout << " Escribe un numero: " << std::endl;
    std::cin >> valor;
    float valorAbsoluto = abs(valor);
    std::cout << "El valor absoluto es " << valorAbsoluto << std::endl;
    // //////
    int b1, b2;
    std::cout << "Comparador de numeros, por favor, introduce dos numeros" << std::endl;
    std::cin >> b1;
    std::cin >> b2;
    if (b1 > b2) {
        std::cout << "El numero " << b1 << " Es mayor que " << b2 << std::endl;
    }
    if (b1 == b2) {
        std::cout << "El numero " << b1 << " es igual que " << b2 << std::endl;
    }
    else { std::cout << "El numero " << b1 << " Es menor que " << b2 << std::endl; }

}