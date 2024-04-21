// 002_Valor_Absoluto.

#include <iostream>
using namespace std; 

int main()
{
    int numero, resultado; 
    cout << "Esta aplicacion da un valor absoluto, por favor, introduzca un numero";
    cin >> numero;
    if (numero < 0) { 
        resultado = numero * -1;
        cout <<"El valor absoluto es" << resultado;

    }
    else {cout <<" El valor absoluto es" << numero; }


    
}

