/*
-Escribir un programa que llene un arreglo con los números enteros comprendidos entre 4 y 14
*/
#include <bits/stdc++.h>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(){
	int numero,cantidad;
	srand(time(0));
	cin>>cantidad;
	vector<int> arreglo;
	for(int i=0;i<cantidad;i++){
		numero=rand()%4+14;
		arreglo.push_back(numero);
	}
	
	for(int j=0;j<cantidad;j++){
		cout<<arreglo[j]<<endl;
	}
	
	return 0;
}