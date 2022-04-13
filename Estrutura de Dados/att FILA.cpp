#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

struct fila{
	int f, r;
	float elementos[TAM];
};

typedef struct fila Fila;

void inserir(Fila*x, int y);
int cheio(Fila x);
void remover(Fila*x);
int vazia(Fila x);
void imprimir(Fila x);
void calc(Fila x);// (Atividade 1) Calcula e mostra a quantidade de elementos presentes na fila. (função calc).
void furafila(Fila*x, int y);// (Atividade 2) Adicionar a função "furafila" para poder colocar um elemento no inicio da fila.
void inverterfila(Fila x);// (Atividade 3) Inverter a fila.
void esvaziar(Fila x);


int main(){
	setlocale(LC_ALL, "portuguese");
	Fila x = {-1, -1};
	int i=0, n;
	printf("Ola, Seja Bem Vindo \nFila desenvolvida por Giliarde\n");
	
	while(i==0){
		
		printf("\n\nEscolha uma opção:");
		printf("\n1) Inserir um número.");
		printf("\n2) Retirar o primeiro número.");
		printf("\n3) Calcular a quantidade de elementos na fila.");
		printf("\n4) Furar Fila.");
		printf("\n5) Inverter Fila.");
		printf("\n6) Sair\n");
		scanf("%i", &n);
		
		if(n==1){
			system("cls");
			int recp;
			printf("\nDigite o número:");
			scanf("%i", &recp);
			system("cls");
			inserir(&x, recp);
			imprimir(x);
		}
		else if(n==2){
			system("cls");
			remover(&x);
			imprimir(x);
		}
		else if(n==3){
			system("cls");
			calc(x);
		}
		else if(n==4){
			system("cls");
			int i;
			printf("Digite o número: ");
			scanf("%i", &i);
			furafila(&x, i);
			imprimir(x);
		}
		else if(n==5){
			fflush(stdin);
			system("cls");
			imprimir(x);
			inverterfila(x);
		}
		else if(n==6){
			i=1;
			system("cls");
		}
		else{
			system("cls");
			printf("\nOpção invalida, Escolha uma opção valida para continuar.");
		}
	}
}

void inserir(Fila*x, int y){
	if(cheio(*x)==0){
		x->r = (x->r+1) % TAM;
		x->elementos[x->r]= y;
		if(x->f==-1){
			x->f++;
		}
	}
	else{
		printf("\nA fila esta cheia, não é possivel inserir elementos.");
	}
}
int cheio(Fila x){
	if(x.r==TAM-1 && x.f==0 || x.r==x.f-1){
		return 1;
	}
	else{
		return 0;	
	}
}
void remover(Fila*x){
	if(vazia(*x)==0){
		if(x->f==x->r){
			x->f=-1;
			x->r=-1;
		}
		else{
			if(x->f==TAM-1){
				x->f=0;
			}
			else{
			x->f++;
		}
	}
	}
	else{
		printf("\nA fila esta vazia, não é possivel retirar elementos.");
	}
}
int vazia(Fila x){
	if(x.f==-1 ){
		return 1;
	}
	else{
		return 0;
	}
}
void imprimir(Fila x){
	if(x.r!=-1){
		if(vazia(x)==0){
			printf("\n\nFila = ");
				if(x.f<=x.r){
					for(int i=x.f; i<=x.r; i++){
					printf("%.0f ", x.elementos[i]);
					}
				}
				else{
					for(int i=x.f; i<=TAM-1; i++){
					printf("%.0f ", x.elementos[i]);
				}
				for(int i=0; i<=x.r; i++){
					printf("%.0f ", x.elementos[i]);
				}
			}
		}
		else{
			printf("\nA fila esta vazia, impossivel concluir a impressão.");
		}
	}
	else{
		printf("A fila está vazia!!\nInsira elementos para começar!.");
	}
}
void calc(Fila x){// (Atividade 1) Calcula e mostra a quantidade de elementos presentes na fila. (função calc).
	if(vazia(x)==0){
		int resu=0;
		if(x.f<=x.r){
			for(int i=x.f; i<=x.r; i++){
				resu= resu+1;
			}
			printf("\nA quantidade de elementos e: %.0i", resu);
		}
		else{
			for(int i=x.f; i<=TAM-1; i++){
				resu=resu+1;
			}
			for(int i=0; i<=x.r; i++){
				resu=resu+1;
			}
			printf("\nA quantidade de elementos e: %.0i", resu);
		}
	}
	else{
		printf("\nA fila esta vazia, impossivel concluir o cálculo.");
	}
}
void furafila(Fila*x, int y){// (Atividade 2) Adicionar a função "furafila" para poder colocar um elemento no inicio da fila.
	if(cheio(*x)==1){
		printf("\nA fila esta cheia, não é possivel inserir elementos.");
	}
	else{
		if(x->f==0){
			x->f=TAM-1;
			x->elementos[x->f]= y;
		}
		else{
		x->f--;
		x->elementos[x->f]= y;
		}
	}
}
void inverterfila(Fila x){// (Atividade 3) Inverter a Fila.
	int j=0,i,b=0,aux[TAM];
	if(vazia(x)==0){
		if(x.r<=x.f){
			for(i=x.r; i>=0; i--){
				aux[j++]=x.elementos[i];	
			}
			for(i=TAM-1; i>=x.f; i--){
				aux[j++]=x.elementos[i];
			}
		}
		else{
			for(i=x.r; i>=x.f; i--){
			aux[j++]=x.elementos[i];
			}
		}
		printf("\n\nA fila Invertida é: ");
		Fila x {-1, -1};
		for(i=0; i<j; i++){
			inserir(&x, aux[i]);
			fflush(stdin);
		}
		imprimir(x);
		fflush(stdin);
		
	}
	else{
		printf("A fila esta vazia.");
	}
}

