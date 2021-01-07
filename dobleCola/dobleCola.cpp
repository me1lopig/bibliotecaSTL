// dobleCola.cpp : Uso de elementos de doble cola
// se pueden insertar elementos por los dos extremos 
//

#include <iostream>
#include<deque>

using namespace std;

int main()
{
    deque<char> letras; // declaracion del deque

    // entrada de datos
    letras.push_front('a'); // agregamos elementos al principio de la cola
    letras.push_front('b');
    letras.push_front('d');
    letras.push_front('e');
    letras.push_front('f');
    letras.push_back('4'); // por el final de la cola

    // eliminar elementos del deque
    letras.pop_front(); // elimina un elemento del principio del deque
    letras.pop_back(); // elimina un elemento del final del deque


    cout << "Numero de elementos del deque es  " << letras.size() << endl;
    cout << "Elementos del deque " << endl;

    // mostrar los elememtos del deque

    for (int i = 0; i < letras.size(); i++)
    {
        cout << "Elemento [" << i << "]=" << letras[i] << endl;
    }


    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;
}


