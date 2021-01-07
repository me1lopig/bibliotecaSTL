// bibliotecaSTL.cpp : Ejemplo de biblioteca STL
// manejo de vectores 
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros; // declaracion del vector sin limite de dimension
    vector<int>numeros2; // declaracion de vector con limite de dimension
    

    // insertamos un valor al final del vector con pushback para vectores no limitados
    numeros.push_back(5); 
    numeros.push_back(10);
    numeros.push_back(4);
    numeros.push_back(-5);
    numeros.push_back(9);

    // entrada de valores para vectores con limitacion de dimensión igual que un arreglo normal

    numeros2= { 1,2,3,4,5 };
   
    // eliminacion de elementos de un arreglo

    //numeros.pop_back(); // eliminamos el último elemento del vector del 1 al 2, comenzamos con el valor 0
    numeros.erase(numeros.begin()+1,numeros.begin()+3);




    // mostramos lo elementos de los vectores

    cout << "Numero de elementos del vector 1 es  " << numeros.size() << endl;
    cout << "Elementos del vector 1" << endl;

    // mostrar los elememtos del vector numeros
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << "Elemento ["<<i<<"]="<<numeros[i] <<endl;
    }


    cout << "Numero de elementos del vector 2 es  " << numeros2.size() << endl;
    cout << "Elementos del vector 2" << endl;

    for (int i = 0; i < numeros2.size(); i++)
    {
        cout << "Elemento [" << i << "]=" << numeros2[i] << endl;
    }


    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;


}


