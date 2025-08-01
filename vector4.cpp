/*
Diseñe un programa que llene un arreglo con números enteros otro con números decimales, otro que contenga las vocales y otro con nombre de personas, 
los datos serán tecleados por el usuario como la cantidad de elementos que debe de tener los arreglos
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int tamamnio;
	vector<int> entero;
	vector<float> decimales;
	vector<char> vocales;
	vector<string> personas;
	
	cin>>tamamnio;
	cout<<"ENTEROS:"<<endl;
	int ent;
	for(int i=0;i<tamamnio;i++){
		cin>>ent;
		entero.push_back(ent);
	}
	cout<<"DECIMALES:"<<endl;
	float dec;
	for(int i=0;i<tamamnio;i++){
		cin>>dec;
		decimales.push_back(dec);
	}
	cout<<"VOCALES:"<<endl;
	char voc;
	for(int i=0;i<tamamnio;i++){
		cin>>voc;
		vocales.push_back(voc);
	}
	string per;
	cout<<"PERSONAS:"<<endl;
	for(int i=0;i<tamamnio;i++){
		cin>>per;
		personas.push_back(per);
	}
	
	cout<<"LAS LISTAS INGRESADAS SON:"<<endl;
	for(int i=0;i<tamamnio;i++){
		cout<<entero[i]<<" ";
	}
	for(int i=0;i<tamamnio;i++){
		cout<<decimales[i]<<" ";
	}
	for(int i=0;i<tamamnio;i++){
		cout<<vocales[i]<<" ";
	}
	for(int i=0;i<tamamnio;i++){
		cout<<personas[i]<<" ";
	}
	return 0;
}