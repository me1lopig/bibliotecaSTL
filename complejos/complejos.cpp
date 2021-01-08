// complejos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// ejemplo de uso de números complejos
//
//

#include <iostream>
#include<complex>


using namespace std;


int main()
{
    // declaarcion de variables de declaracion de numeros complejos
    complex<double>c1,c2;
    c1 = complex<double>(3.3, 4.7);
    c2 = complex<double>(-2., 8);

    // operaciones con complejos
    cout << "Suma de complejos " << c1 << "+" << c2 << "=" << c1 + c2 << endl;
    cout << "Resta de complejos " << c1 << "-" << c2 << "=" << c1 - c2 << endl;

    cout << "Producto de complejos " << c1 << "*" << c2 << "=" << c1 * c2 << endl;
    cout << "Division de complejos " << c1 << "/" << c2 << "=" << c1 / c2 << endl;

    cout << "La parte real de " << c1 << " es " << real(c1) << endl;
    cout << "La parte imaginaria de " << c1 << " es " << imag(c1) << endl;


    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;
}


