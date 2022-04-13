#include <stdio.h>
#include <locale.h>

int funrecu(int x, int y);
void imprimir(int x);

int main(){
	int i=0,soma, resul;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o númeiro. (Este número deve ser positivo e inteiro).\n");
	scanf("%i", &soma);
	
	if(soma>0){
		printf("\nOs números naturais de 0 até %i em ordem decrescente são :\n", soma);
		funrecu(soma, i);
	}else{
		printf("O número digitado não é positivo!!");
	}
	
}

int funrecu(int x, int y){
	if(x>y){
		imprimir(x);
		if(x>y){
			return funrecu(x-1,y);
		}
		
	}
}
void imprimir(int x){
	printf("%i \n", x);
}
