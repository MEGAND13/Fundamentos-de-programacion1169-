// 003 Mayor_que_menor_que

#include <iostream>
using namespace std;


int main()
{
    int a1, a2;
    cout << "Comparador de numeros, por favor, introduce dos numeros";
    cin >> a1;
    cin >> a2; 
    if (a1 > a2) {
        cout << "El numero " << a1 << " Es mayor que " << a2;
    }
    else { cout << "El numero " << a1 << " Es menor que " << a2; }

}

