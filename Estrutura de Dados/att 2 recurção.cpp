#include <stdio.h>
#include <locale.h>

int funrecu(int x);

int main(){
	int recp,user;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o número para a soma:\n");
	scanf("%i",&user);
	
	recp=funrecu(user);
	printf("\n\nA soma dos numeros pares de 0 até %i é : %i.", user, recp);
	
}

int funrecu(int x){
	int volt;
	if(x%2==0){
		if(x==0){
			return 0;
		}else{
			volt= x + funrecu(x-2);		
		}
		return volt;
		
	}else{
		x = x-1;
		if(x==0){
			return 0;
		}else{
			volt= x + funrecu(x-2);		
		}
		return volt;	
	}
}
