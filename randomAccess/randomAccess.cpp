// randomAccess.cpp : Ejemplo de Random Acces Iterator 
//

#include <iostream>
#include<vector>
#include<math.h>

using namespace std;

// funcion template para mostrar lo elementos de un vector

template<class Iter>

void mostrarEnpantalla(Iter inicio,Iter final)
{
    while (inicio!=final)
    {
        cout << *inicio << endl;
        inicio++;
    }
}


int main()
{
    vector<char> letras(10); // definicion del vector en este caso de letras

    //llenamos el vector con letras aleatorias

    for (int i = 0; i < 10; i++)
    {
        letras[i] = 'A' + (rand() % 26);
    }

    // mostrar datos 
    mostrarEnpantalla(letras.begin(),letras.end());
    cout << endl;

    // mostrar datos de forma inversa
    mostrarEnpantalla(letras.rbegin(), letras.rend());
    cout << endl;

    // mostrar datos de forma aleatoria
    mostrarEnpantalla(letras.begin()+1, letras.end()-1);
    cout << endl;


    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;
}


