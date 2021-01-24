// forwardIterator.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include<iterator>
#include<fstream> //libreria de archivos
#include<vector>
#include<cstdlib>


using namespace std;

int main()
{
    ifstream archivo;
    archivo.open("documento.txt", ios::in);

    if (archivo.fail())
    {
        cout << "No se puede acceder al archivo de datos" << endl;
        exit(1);
    }


    // creamos el iterador
    istream_iterator<char> p(archivo);

    vector<char> frase; // definimos el vector en el que vamos a guardar el contenido del archivo.

    while (!archivo.eof()) // mientras no sea el final del archivo se hace lo que indica el bucle
    {
        // almacenamos el caracter en el vector
        frase.push_back(*p);
        p++;

    }

    // mostramos el vector con los datos del archivo

    for (int i = 0; i < frase.size(); i++)
    {
        cout << frase[i];
    }
    cout << endl;

    archivo.close(); // cerramos el archivo

    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;
}


