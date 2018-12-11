#include <iostream>
using namespace std;

int main(){
	int i=1,tamanho,j,inicio=0;
	cout <<"Insira o tamanho\n";
	cin >> tamanho;
	int lista[tamanho];
	cout <<"Insira os elementos\n";
	for(i=1;i<=tamanho;i++)
		cin>>lista[i];
	
	for (i=1;i<=tamanho;i++){		
		inicio=lista[i];
		j=i-1;
		while(j!=0 && lista[j]>inicio){
			lista[j+1]=lista[j];
			j=j-1;
			lista[j+1]=inicio;
		}
	}
	for (i=1;i<=tamanho;i++){
	cout << lista[i];
	}
	return 0;
}

