#include <iostream>
using namespace std;

int main(){
	int i=1,menor,aux,tamanho,j;
	cout <<"Insira o tamanho\n";
	cin >> tamanho;
	int lista[tamanho];
	cout <<"Insira os elementos\n";
	for(i=1;i<=tamanho;i++)
		cin>>lista[i];

	for (i=0;i<tamanho-1;i++){	
		menor = i;
		for (j=i+1;j<tamanho;j++){	
			if(lista[j]<lista[menor])
				menor=j;
				}
		if(lista[i]!=lista[menor])
				aux=lista[i];	
				lista[i]=lista[menor];
				lista[menor]=aux;	
		}
	for (i=1;i<=tamanho;i++){
	cout << lista[i];
	}
	return 0;
}
