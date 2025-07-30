/*
1- CREA UN VECTOR Y ORDENALO
usa un tamanio varaibles y valores varaiblaes y que imprima  el vector de forma ordenada
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int tamanio,valor;
    cin>>tamanio;
    vector<int>arreglo;
    for(int i=0;i<tamanio;i++)   {
        cin>>valor;
        arreglo.push_back(valor);
    }
    sort(arreglo.begin(),arreglo.end());
    for(int j=0;j<tamanio;j++)   {
        cout<<arreglo[j]<<" ";
    }
    return 0;
}
