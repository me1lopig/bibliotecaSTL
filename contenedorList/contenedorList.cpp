// contenedorList.cpp : Ejemplo del contenedor List
// 
//

#include <iostream>
#include<list>

using namespace std;


int main()
{
    
    list<int> datos; // lista de numeros enteros

    // agregamos elementos a la lista 

    datos.push_back(5); // dato por el fnal de la lista
    datos.push_back(8);
    datos.push_back(3);

    datos.push_front(2);// datos por el principio de la lista
    datos.push_front(4);

    // ordenamos los elementos de menor a mayor, con reverse() es de es de mayor a menor
    datos.sort();
   

    // eliminamos lo elementos iniciales y finales
    datos.pop_back();
    datos.pop_front();



    //representacion de los datos introducidos
    cout << "Numero de elementos del deque es  " << datos.size() << endl;
    cout << "Elementos del deque ordenados" << endl;

    // creamos un iterador de la lista y lo recorremos
    // despues de cada cambio hay que reiniciar el iterador

    list<int>::iterator i;
    i = datos.begin(); // apuntamos el principio de la lista

    while (i!=datos.end())
    {
        cout << *i << endl;
        i++;
    }
    cout << endl;




    cout << "Pulsa una tecla para terminar" << endl;
    cin.get();
    return 0;
}


