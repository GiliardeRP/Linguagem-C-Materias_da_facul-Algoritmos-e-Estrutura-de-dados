#include <stdio.h>

void resu(float n, float n2, char a);

int main(){
	
	float num1, num2;
	char a;
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	printf("Digite a operacao(+,-,*): ");
	scanf("%s", &a);

	resu(num1,num2,a);
	
}
void resu(float n1, float n2, char a){
	
	if(a=='+'){
		float soma;
		soma=n1+n2;
		printf("O valor da soma e: %.2f", soma);
		
	}
	if(a=='-'){
		float soma;
		soma=n1-n2;
		printf("O valor da subitracao e: %.2f", soma);
		
	}
	if(a=='*'){
		float soma;
		soma=n1*n2;
		printf("O valor da multiplicação e: %.2f", soma);
		
}

}

