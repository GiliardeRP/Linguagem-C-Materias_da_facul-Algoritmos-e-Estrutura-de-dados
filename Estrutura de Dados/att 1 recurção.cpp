#include <stdio.h>
#include <locale.h>

int soma(int x, int y);

int main(){
	
	int resultado,control,add;
	setlocale(LC_ALL, "portuguese");
	printf("Digite os n�meros para � multiplica��o. \n\nDigite o primeiro n�mero: ");
	scanf("%i", &control);
	printf("\nDigite o segundo n�mero: ");
	scanf("%i", &add);
	
	resultado=soma(control, add);
	printf("\nO resultado da multiplica��o � : %i", resultado);
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
