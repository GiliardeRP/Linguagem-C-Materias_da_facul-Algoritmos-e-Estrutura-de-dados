#include <stdio.h>
#include <locale.h>

int soma(int x, int y);

int main(){
	
	int resultado,control,add;
	setlocale(LC_ALL, "portuguese");
	printf("Digite os números para à multiplicação. \n\nDigite o primeiro número: ");
	scanf("%i", &control);
	printf("\nDigite o segundo número: ");
	scanf("%i", &add);
	
	resultado=soma(control, add);
	printf("\nO resultado da multiplicação é : %i", resultado);
}

int soma(int x, int y){
	
	int resul;

	if(x==0){
		
		return 0;
		
	}else{
		resul = y + soma(x-1,y);
		
	}
	return resul;
}
