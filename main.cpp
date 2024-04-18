#include <iostream>

using namespace std;

int main()
{
    ///Ejercicio 1
    int ValorIngresado = 5;

    for (int iterador = 0; iterador <= 9; iterador++){
        cout << "su multiplicacion es: " << iterador*ValorIngresado << endl;
    }

    ///Ejercicio2
    int num;
    cout << "ingrese un Numero: ";
    cin >> num;

    for (int i = 0; i <= num; i++){
        if (i % 2 == 0){
            cout << "estos numeros son pares: " << i << endl;
            }
    }
    return 0;
}
/*
el usuario ingrese un numero y nosotros hasta ese numero se saquen los pares
*/
