#include <stdio.h>
#include <locale.h>

int funrecu(int x, int y);
void imprimir(int x);

int main(){
	int i=0,soma, resul;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o n�meiro. (Este n�mero deve ser positivo e inteiro).\n");
	scanf("%i", &soma);
	
	if(soma>0){
		printf("\nOs n�meros naturais de 0 at� %i em ordem decrescente s�o :\n", soma);
		funrecu(soma, i);
	}else{
		printf("O n�mero digitado n�o � positivo!!");
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
