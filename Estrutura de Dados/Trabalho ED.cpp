#include <stdio.h>
#define TAM 10
	//p1.topo = p2.topo = p3.topo = -1;
struct pilha{
	int topo;
	int elementos[TAM];
};
typedef struct pilha Pilha;

void push (Pilha*p,int x);
int pop (Pilha*p);
int top (Pilha*p);
int cheia(Pilha*p);
int vazia(Pilha*p);
void imprimir(Pilha p1,Pilha p2,Pilha p3);
	
int main(){
	
	int lv;
	Pilha p1, p2, p3;
	p2.topo = -1;
	p3.topo = -1;	
	printf("Bem vindo ao Jogo: Torre de Hanoi desenvolvido por Giliarde.\n\nPor favor escolher a dificuldade: \n(1) Facil \n(2) Medio \n(3) Dificil\n ");
	scanf("i%", &lv);
	
	if(lv==1){
		int rec = 0, rec2 = 0;
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
		
		while(rec == 0 || rec2 == 0){
		rec =  cheia(&p2);
		rec2 = cheia(&p3);
		
		}
	}
	else if(lv==2){
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
	}
	else if(lv==3){
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
		push(&p1, 4);
	}
	else{
		printf("opcao invalida, por favor escolha uma opcao valida!");
		
	}
	return 0;

}


void push (Pilha*p,int x){
	if(cheia(p)==0){
		p->topo++;
		p->elementos[p->topo] = x;
	}
	else{
	printf("A pilha esta cheia.\n");
	}
}
int pop (Pilha*p){
	if(vazia(p)==0){
		int res;
		res=p->elementos[p->topo];
		p->topo--;
		return res;
	}
	else{
		printf("A pilha esta vazia.\n");
	}	
}
int top (Pilha p){
	return p.elementos[p.topo];
}
int cheia(Pilha p){ //retorna 1 cheia, retorna 0 vazio
	if(p.topo==TAM-1){
		return 1;
	}
	else{
		return 0;
	}
}
int vazia(Pilha p){ // retorna 1 vazia, retorna 0 cheia
	
	if(p.topo==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void imprimir(Pilha p1,Pilha p2,Pilha p3){
	for(int i=p1.topo; i>=0; i--){
		printf("%i			%i			%i\n ", p1.elementos[i], p2.elementos[i],p3.elementos[i]);
	}
}

