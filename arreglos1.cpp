/*
¿Qué pide el problema?
Tienes un arreglo ordenado de n enteros.

Luego tienes q consultas, donde en cada una te dan un número x y debes:

Decir si x está en el arreglo.

Si sí está, imprime: "Yes" y su posición (1-based).

Si no está, imprime: "No" y el índice (1-based) del menor número que sea mayor o igual a x (el primer número mayor que x o igual a x).
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tamanio;
    cin>>tamanio;
    int arreglo[tamanio];
    for(int i=0;i<tamanio;i++){
        cin>>arreglo[i];
    }
    int busqueda,consultas;
    cin>>consultas;
    for(int i=0;i<consultas;i++){
        cin>>busqueda;
        
        int posicion=-1;
        for(int j=0;j<tamanio;j++){
            if(arreglo[j]>=busqueda){
                posicion=j;
                break;
            }
        }
        if(arreglo[posicion]==busqueda){
            cout<<"Yes "<<(posicion +1)<<endl;
            
        }else{
            cout<<"No "<<(posicion+1)<<endl;
        }
    }
    return 0;
}
