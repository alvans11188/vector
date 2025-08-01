/*
obtener mayor y menor numero de un arreglo usando vectores
*/
#include <bits/stdc++.h>
//#include <iostream>
using namespace std;

int main(){
	int tamanio,dato;
	cin>>tamanio;
	vector<int> arreglo;
	
	for(int i=0;i<tamanio;i++){
		cin>>dato;
		arreglo.push_back(dato);
	}
	
	for(int i=0;i<tamanio;i++){
		cout<<arreglo[i];

	}
	cout<<"VALOR MAXIMO"<<endl;
	int maximo=*max_element(arreglo.begin(),arreglo.end()); //retorna un puntero, apartir de este lo paso , se usa el * para desrreferenciarlo y obtener el numero real
	cout<<maximo<<endl;
	cout<<"VALOR MINIMO"<<endl;
	int minimo=*min_element(arreglo.begin(),arreglo.end());
	cout<<minimo<<endl;
	return 0;
}
