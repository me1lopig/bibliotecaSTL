// Matematicas.cpp : uso de algoritmos matemáticos
//Funcionoes matematicas que están incluidas en la librería STL
//los datos se separan por espacios
// se usa punto decimal


#include<iostream>
#include<iterator>
#include<fstream> //libreria de archivos
#include<vector>
#include<algorithm> // libreria que contiene las funciones matematicas
#include<numeric> // otra liberia de STL


using namespace std;

//funcion logica para encontrar numeros positivos
template <class T>
bool esPositivo(T valor)
{
    // retorna verdadero si es positivo
    return (valor >= 0);
}


int main()
{
    // definimos un vector para almacenar los datos del archivo
    vector <float> numeros;

    // abrimos el archivo en modo lectura
    ifstream archivo("archivo.txt" ,ios::in);

    // copiamos todos lo elementos del archivo al vector
    // recorremos el archivo hasta el final y lo volcamos en el vector numeros
    copy(istream_iterator<float>(archivo),istream_iterator<float>(),back_inserter(numeros));


    // calculo del maximo de losvalores de  la lista
    cout << "El valor maximo es: " << *max_element(numeros.begin(), numeros.end())<<endl;
    cout << "El valor minimo es: " << *min_element(numeros.begin(), numeros.end())<<endl;

    // calculamos el valor promedio
    cout << "El valor promedio es: " << accumulate(numeros.begin(),numeros.end(),0.0)/numeros.size()<<endl;
    cout << endl;

    // contar los elementos positivos de la lista
    cout << "La cantidad de numeros positivos es: " << count_if(numeros.begin(), numeros.end(), esPositivo<float>)<<endl;


    archivo.close(); // cerramos archivo

    cout << "Pulsa una tecla para terminar " << endl;
    cin.get();

    return 0;

}


