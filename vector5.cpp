/*
 Escribir un programa que calcule la media aritmética de los siguientes números:                                    
  2,10,8,20,45,12,89,12,4 los números están almacenados en un arreglo. 
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	vector<int> numeros = {2,10,8,20,45,12,89,12,4};
	
	int suma = accumulate(numeros.begin(),numeros.end(),0);
	cout<<"suma"<<suma<<endl;;
	double media=static_cast<double>(suma) / numeros.size();
	
	cout<<"media: "<<media;
	return 0;
}