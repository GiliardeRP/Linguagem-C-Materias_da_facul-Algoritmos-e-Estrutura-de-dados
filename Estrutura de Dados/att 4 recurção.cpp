#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void preencher( int x, int vetor[]);
void ordem( int vetor[], int x);
void imprimir(int vetor[], int x);
void buscabi(int vetor[], int x );



int main(){
	setlocale(LC_ALL, "portuguese");
	int x, busca,resul;
	int vetor[x];
	
	
	printf("Digite o tamanho do vetor: ");
	scanf("%i", &x);
	
	preencher(x, vetor);
	ordem(vetor,x);
	imprimir(vetor, x);
	buscabi(vetor, x);
	
	
	
}
void preencher( int x, int vetor[]){
	printf("\nDigite os elementos:\n");
	for(int i=0; i<x; i++){
		scanf("%i", &vetor[i]);
	}
}
void ordem( int vetor[], int x){
	int i, k, aux;
	for(i=0; i<x; i++){
		for(k=i+1;k<x; k++){
			if(vetor[i]>vetor[k]){
				aux=vetor[i];
				vetor[i]=vetor[k];
				vetor[k]=aux;
			}
		}
	}
}
void imprimir(int vetor [], int x){
	for(int i=0; i<x; i++){
		printf("%i ", vetor[i]);
	}
}
void buscabi(int vetor[], int x ){
	
	int rep,y, meio, soma, inicio=0, fim=x-1;
	printf("\nDigite o número á ser procurado : ");
	scanf("%i", &y);
	while(inicio <= fim){
		meio=(inicio + fim)/2;
		if(vetor[meio]==y){
			printf("O número buscado foi encontrado!!");
			inicio++;
			rep=1;
		}else if(y < vetor[meio]){
			fim=meio-1;
		}
		else{
			inicio=meio+1;
		}
	}
	if(rep!=1){
	printf("Número não encontrado");
 	}
}

