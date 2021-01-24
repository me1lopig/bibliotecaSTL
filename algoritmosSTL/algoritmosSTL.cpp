// algor    ºASR-+
. B

`PQ*
Ñ,JXtmosSTL.cpp : Ejemplos 
//

#include <iostream>
#include<iterator>
#include<algorithm>
#include<list>
#include<cstdlib>

using namespace std;

int numerosAleatorios()
{
    // funcion de generacion de numeros aleatorios
    return rand() % 10;

}


int main()
{
    list<int> valores(10); // lita de 10 elementos enteros

    //generamos numeros aleatorios en un rango de la lista
    generate(valores.begin(),valores.end(),numerosAleatorios); // llenamos la lista con valores aleatorios

    ostream_iterator <int> salida(cout, "\n");

    copy(valores.begin(), valores.end(), salida);

    cout << endl;

    // buscamos un elemento dentro de la lista

    list<int>::iterator i;
    i = find(valores.begin(), valores.end(),8); // busacamos el primer 8 desde el inicio al final 
    if (i != valores.end())
    {
        cout << "El elemento si ha sido encontrado en la lista" << endl;
        cout << "en la posicion " << endl;
    }
    else


    {
        cout << "El elemento no ha sido encontrado" << endl;
    }


    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;
}


