#include <stdio.h>

float soma (float n, float n2);

int main(){
	
	float peso, alt, imc;
	printf("Calculadora de IMC\n");
	printf("Digite o peso em kg: ");
	scanf("%f", &peso);
	printf("Digite a altura em metros: ");
	scanf("%f", &alt);
	
	imc=soma(peso,alt);
	
	printf("O Imc e: %.2f", imc);
	
	
}

	float soma(float peso, float alt){
		float cal, res;
		cal= alt*alt;
		res=peso/cal;
		return res;
		
	
	
}
