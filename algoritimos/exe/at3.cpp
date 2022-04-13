#include <stdio.h>
#define TAM 1000

void preencher(int v[], int n);
void imprimir(int v[], int n);
int soma(int v[], int n);

int main(){
	
	int v[TAM],n,res;
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &n);
	preencher(v,n);
	imprimir(v,n);
	res=soma(v,n);
	
	printf("O valor da soma dos elementos do vetor e: %i", res);
	
	
}

void preencher(int v[], int n){
	for(int i=0; i<n; i++){
		printf("Digite os elementos: ");
		scanf("%i", &v[i]);
	}	
}
void imprimir(int v[], int n){
	for(int i=0; i<n; i++){
		printf("%i\n", v[i]);
	}
}
int soma(int v[], int n){
	int somav=0;
	for(int i=0; i<n; i++){
		somav=somav+v[i];	
	}
	return somav;
}

