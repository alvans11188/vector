/*
Resumen del problema
Dado un vector de enteros, debes:

Leer n, la cantidad de elementos.

Leer los n enteros.

Eliminar el elemento en la posición x (1-based index).

Eliminar todos los elementos entre las posiciones a y b (inclusive a, exclusivo b), tambien usando indices que empiezan desde 1.

Imprimir el tamanioo final del vector.

Imprimir todos los elementos restantes en una linea.
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int tamanio,dato;
    cin>>tamanio;
    vector<int> arreglo;
    for(int i=0;i<tamanio;i++){
        cin>>dato;
        arreglo.push_back(dato);
    }
    
    int eliminar1,eliminar2,eliminar3;
    cin>>eliminar1>>eliminar2>>eliminar3;
    
    arreglo.erase(arreglo.begin()+(eliminar1-1));
    
    arreglo.erase(arreglo.begin()+(eliminar2-1),arreglo.begin()+(eliminar3-1));
    
    
    cout<<arreglo.size()<<endl;
    for(int k=0;k<arreglo.size();k++){
        cout<<arreglo[k]<< " ";
    }
    
    return 0;
}
