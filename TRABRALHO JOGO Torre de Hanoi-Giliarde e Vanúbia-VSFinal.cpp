//Discentes:Giliarde Reis Pereira & Vanúbia Santos Lima

#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <time.h> 
#define TAM 10
#include<locale.h>

	int l1=3, l2=5, l3=7;
struct pilha{
	int topo;
	int elementos[TAM];
};
typedef struct pilha Pilha;

void push1(Pilha *p, int x);
void push2(Pilha *p, int x);
void push3(Pilha *p, int x);
int pop1(Pilha*p);
int pop2(Pilha*p);
int pop3(Pilha*p);
int cheia1(Pilha p);
int cheia2(Pilha p);
int cheia3(Pilha p);
int vazia1(Pilha p);
int vazia2(Pilha p);
int vazia3(Pilha p);
void imprimir1(Pilha p1,Pilha p2,Pilha p3);
void imprimir2(Pilha p1,Pilha p2,Pilha p3);
void imprimir3(Pilha p1,Pilha p2,Pilha p3);
int conferir1(Pilha p);
int conferir2(Pilha p);
int conferir3(Pilha p);
	
int main(){
	setlocale(LC_ALL, "portuguese");
	Pilha p1, p2, p3;
	int lv;
	char opc;
	p1.topo = -1;
	p2.topo = -1;
	p3.topo = -1;	
	fflush(stdin);
	system("cls");
	
		
		while(opc != 'n'||opc == 'N'){
			system("cls");	
			int lv;
			p1.topo = -1;
			p2.topo = -1;
			p3.topo = -1;
			
			
			system("color f9 ");
			printf("\n\n\n\n\n_______________________________________________________________________________\n");
			printf("_______________________________________________________________________________\n");
			printf("_____________                                                    ______________\n");
			printf("_____________ ¦¦¦¦¦¦ ¦¦¦¦¦  ¦¦    ¦¦  ¦¦¦¦  ¦¦¦¦¦    ¦¦¦¦¦ ¦¦¦¦  ______________\n");
			printf("_____________   ¦¦   ¦¦ ¦¦  ¦¦    ¦¦  ¦¦    ¦¦ ¦¦    ¦¦ ¦¦ ¦¦    ______________\n");
			printf("_____________   ¦¦   ¦¦ ¦¦  ¦¦    ¦¦  ¦¦¦¦  ¦¦¦¦¦    ¦¦ ¦¦ ¦¦¦¦  ______________\n");
			printf("_____________   ¦¦   ¦¦ ¦¦  ¦¦ ¦¦ ¦¦  ¦¦    ¦¦¦¦     ¦¦ ¦¦ ¦¦    ______________\n");
			printf("_____________   ¦¦   ¦¦¦¦¦  ¦¦¦¦¦¦¦¦  ¦¦¦¦  ¦¦ ¦¦    ¦¦¦¦¦ ¦¦    ______________\n");
			printf("_____________                                                    ______________\n");
			printf("_____________                                                    ______________\n");
			printf("_____________        ¦¦  ¦¦  ¦¦¦  ¦¦    ¦¦ ¦¦¦¦¦ ¦¦¦¦¦¦          ______________\n");
			printf("_____________        ¦¦  ¦¦ ¦¦ ¦¦ ¦¦¦¦  ¦¦ ¦¦ ¦¦   ¦¦            ______________\n");
			printf("_____________        ¦¦¦¦¦¦ ¦¦¦¦¦ ¦¦ ¦¦ ¦¦ ¦¦ ¦¦   ¦¦            ______________\n");
			printf("_____________        ¦¦  ¦¦ ¦¦ ¦¦ ¦¦  ¦¦¦¦ ¦¦ ¦¦   ¦¦            ______________\n");
			printf("_____________        ¦¦  ¦¦ ¦¦ ¦¦ ¦¦    ¦¦ ¦¦¦¦¦ ¦¦¦¦¦¦          ______________\n");
			printf("_____________                                                    ______________\n");
			printf("_______________________________________________________________________________\n");
			printf("_______________________________________________________________________________\n");
	
			printf("\n\t\t\tDesenvolvido por Giliarde e Vanúbia.\n\t    Bem vindo ao Jogo! Pressione qualquer tecla para começar.\n");
			printf("\n\n\t\t\t\t     START\n\t\t\t\t       ");
			getch();
			system("cls");
			
			printf("\nPara ganhar o jogo é necessario considerar as seguintes regras:\n");
			printf("\n*Movimentar uma só peça de cada vez.\n*Uma peça maior não pode ficar acima de uma menor.\n*Não é permitido movimentar uma peça que esteja abaixo de outra.");
			printf("\n\n\n\n\n\n\t\t\tEm qual nivel deseja jogar: \n\n\t\t\t\t(1) Facil \n\t\t\t\t(2) Medio \n\t\t\t\t(3) Dificil\n\t\t\t\t ");
			scanf("%i", &lv);
			fflush(stdin);
			system("cls");	
		
			if(lv==1){
		
				
				int resu,rec2=0;
				push1(&p1, 3);
				push1(&p1, 2);
				push1(&p1, 1);
				push1(&p2, 0);
				push1(&p2, 0);
				push1(&p2, 0);
				push1(&p3, 0);
				push1(&p3, 0);
				push1(&p3, 0);
				p2.topo = -1;
				p3.topo = -1;
				int i=0;
				
				//horário de inicío
				struct tm *data_hora_inicio;         
					time_t seg;
					time(&seg);   
					data_hora_inicio = localtime(&seg);  
				  
					int hi=data_hora_inicio->tm_hour;
					int mi=data_hora_inicio->tm_min; 
					int si=data_hora_inicio->tm_sec;
					  
					
					
				while(rec2 == 0  ){
					system("color f0 ");
					char resp;
					imprimir1(p1,p2,p3);	
					printf("\n\n\nQual opção você escolhe?");
					printf("\nA) Da torre 1 para torre 2.");
					printf("\nB) Da torre 1 para torre 3.");
					printf("\nC) Da torre 2 para torre 1.");
					printf("\nD) Da torre 2 para torre 3.");
					printf("\nE) Da torre 3 para torre 1.");
					printf("\nF) Da torre 3 para torre 2.\n\n");
					printf("\nNumero de Movimentos: %i\n",i);
					scanf("%c", &resp);
					
					system("cls");
					fflush(stdin);
					
					if(resp=='A' || resp=='a'){
						if( p1.elementos[p1.topo]>p2.elementos[p2.topo] && p2.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop1(&p1);
						push1(&p2,i);
						}
					}
					else if(resp=='B' || resp=='b'){
						if(p1.elementos[p1.topo]>p3.elementos[p3.topo] && p3.topo>-1 ){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
							
						}else{
							int i;
							i=pop1(&p1);
							push1(&p3,i);
						}
						
					}
					else if(resp=='C' || resp=='c'){
						if( p2.elementos[p2.topo]>p1.elementos[p1.topo] && p1.topo>-1){
						printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
							
						}else{
						
						int i;
						i=pop1(&p2);
						push1(&p1,i);
						}
					}
					else if(resp=='D' || resp=='d'){
						if( p2.elementos[p2.topo]>p3.elementos[p3.topo] && p3.topo>-1){
						printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
							
						}else{
						int i;
						i=pop1(&p2);
						push1(&p3,i);
						}
					}
					else if(resp=='E' || resp=='e'){
						if( p3.elementos[p3.topo]>p1.elementos[p1.topo] && p1.topo>-1){
						printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
							
						}else{
						int i;
						i=pop1(&p3);
						push1(&p1,i);
						}
					}
					else if(resp=='F' || resp=='f'){
						if( p3.elementos[p3.topo]>p2.elementos[p2.topo] && p2.topo>-1){
						printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
							
						}else{
						int i;
						i=pop1(&p3);
						push1(&p2,i);
						}
					}
					else{
						printf("\nOPÇÃO INVALIDA!!\n");
					}
					
					rec2 = cheia1(p3);
					i=i+1;
					}
					if(rec2 == 1){
						resu=conferir1(p3);
					if(resu == 1){
						imprimir1(p1,p2,p3);
						
						//tempo de jogo
						struct tm *data_hora_final; 
						time_t segun;
						time(&segun);   
						data_hora_final = localtime(&segun);  
						
						int hf=data_hora_final->tm_hour;
					    int mf=data_hora_final->tm_min; 
					    int sf=data_hora_final->tm_sec;
					    int h_jogada,m_jogada,s_jogada;
					    
					    h_jogada=hf-hi;
					    m_jogada=mf-mi;
					    s_jogada=sf-si;
					    
					    printf("\n\n[ Você concluiu o jogo em %ih:%im:%is ]\n\n",h_jogada,m_jogada,s_jogada);
												
						printf("\n________VOCE GANHOU!________\n Deseja jogar novamente ?\n Precione 'Enter' para sim e (N) para não.\n ");
					}
					else{
						imprimir1(p1,p2,p3);
						
						//tempo de jogo
						struct tm *data_hora_final; 
						time_t segun;
						time(&segun);   
						data_hora_final = localtime(&segun);  
						
						int hf=data_hora_final->tm_hour;
					    int mf=data_hora_final->tm_min; 
					    int sf=data_hora_final->tm_sec;
					    int h_jogada,m_jogada,s_jogada;
					    
					    h_jogada=hf-hi;
					    m_jogada=mf-mi;
					    s_jogada=sf-si;
					    
					    printf("\n\n[ Você concluiu o jogo em %ih:%im:%is ]\n\n",h_jogada,m_jogada,s_jogada);

						printf("\n________VOCE PERDEU! ________\n Deseja jogar novamente ?\n Precione 'Enter' para sim e (N) para não.\n ");
					}
				}
			}
			else if(lv==2){
				
				system("color f0 ");
				int resu,rec2=0;
				push2(&p1, 5);
				push2(&p1, 4);
				push2(&p1, 3);
				push2(&p1, 2);
				push2(&p1, 1);
				push2(&p2, 0);
				push2(&p2, 0);
				push2(&p2, 0);
				push2(&p2, 0);
				push2(&p2, 0);
				push2(&p3, 0);
				push2(&p3, 0);
				push2(&p3, 0);
				push2(&p3, 0);
				push2(&p3, 0);
			
				p2.topo = -1;
				p3.topo = -1;
				int i=0;
				
				//horário de inicío
				struct tm *data_hora_inicio;         
					time_t seg;
					time(&seg);   
					data_hora_inicio = localtime(&seg);  
				  
					int hi=data_hora_inicio->tm_hour;
					int mi=data_hora_inicio->tm_min; 
					int si=data_hora_inicio->tm_sec;
					  
					
				
				while(rec2 == 0  ){
					fflush(stdin);
					char resp;
					imprimir2(p1,p2,p3);	
					printf("\n\n\n\Qual opção você escolhe?");
					printf("\nA) Da torre 1 para torre 2.");
					printf("\nB) Da torre 1 para torre 3.");
					printf("\nC) Da torre 2 para torre 1.");
					printf("\nD) Da torre 2 para torre 3.");
					printf("\nE) Da torre 3 para torre 1.");
					printf("\nF) Da torre 3 para torre 2.\n\n");
					printf("\nNumero de Movimentos: %i\n",i);
					scanf("%c", &resp);
					system("cls");
					fflush(stdin);
					
					if(resp=='A' || resp=='a'){
						if( p1.elementos[p1.topo]>p2.elementos[p2.topo] && p2.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop2(&p1);
						push2(&p2,i);
						}
					}
					else if(resp=='B' || resp=='b'){
						if( p1.elementos[p1.topo]>p3.elementos[p3.topo] && p3.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop2(&p1);
						push2(&p3,i);
						}
					}
					else if(resp=='C' || resp=='c'){
						if( p2.elementos[p2.topo]>p1.elementos[p1.topo] && p1.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor  um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop2(&p2);
						push2(&p1,i);
						}
					}	
					else if(resp=='D' || resp=='d'){
						if( p2.elementos[p2.topo]>p3.elementos[p3.topo] && p3.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop2(&p2);
						push2(&p3,i);
						}
					}
					else if(resp=='E' || resp=='e'){
						if( p3.elementos[p3.topo]>p1.elementos[p1.topo] && p1.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop2(&p3);
						push2(&p1,i);
						}
					}	
					else if(resp=='F' || resp=='f'){
						if( p3.elementos[p3.topo]>p2.elementos[p2.topo] && p2.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop2(&p3);
						push2(&p2,i);
						}
					}
					else{
						printf("\nOPÇÃO INVALIDA!!\n");
					}
					fflush(stdin);
					rec2 = cheia2(p3);
					i=i+1;
					}
					if(rec2 == 1){
						resu=conferir2(p3);
					if(resu == 1){
						imprimir2(p1,p2,p3);
						
						//tempo de jogo
						struct tm *data_hora_final; 
						time_t segun;
						time(&segun);   
						data_hora_final = localtime(&segun);  
						
						int hf=data_hora_final->tm_hour;
					    int mf=data_hora_final->tm_min; 
					    int sf=data_hora_final->tm_sec;
					    int h_jogada,m_jogada,s_jogada;
					    
					    h_jogada=hf-hi;
					    m_jogada=mf-mi;
					    s_jogada=sf-si;
					    
					    printf("\n\n[ Você concluiu o jogo em %ih:%im:%is ]\n\n",h_jogada,m_jogada,s_jogada);
						printf("\n________VOCE GANHOU________\n Deseja jogar novamente ?\n Precione 'Enter' para sim e (N) para não.\n ");
					}
					else{
						imprimir2(p1,p2,p3);
						
						//tempo de jogo
						struct tm *data_hora_final; 
						time_t segun;
						time(&segun);   
						data_hora_final = localtime(&segun);  
						
						int hf=data_hora_final->tm_hour;
					    int mf=data_hora_final->tm_min; 
					    int sf=data_hora_final->tm_sec;
					    int h_jogada,m_jogada,s_jogada;
					    
					    h_jogada=hf-hi;
					    m_jogada=mf-mi;
					    s_jogada=sf-si;
					    
					    printf("\n\n[ Você concluiu o jogo em %ih:%im:%is ]\n\n",h_jogada,m_jogada,s_jogada);
						printf("\n________VOCE PERDEU________\n Deseja jogar novamente ?\n Precione 'Enter' para sim e (N) para não.\n ");
					}
				}
			}
			else if(lv==3){
				system("color f0 ");
				int resu,rec2=0;
				push3(&p1, 7);
				push3(&p1, 6);
				push3(&p1, 5);
				push3(&p1, 4);
				push3(&p1, 3);
				push3(&p1, 2);
				push3(&p1, 1);
				push3(&p2, 0);
				push3(&p2, 0);
				push3(&p2, 0);
				push3(&p2, 0);
				push3(&p2, 0);
				push3(&p2, 0);
				push3(&p2, 0);
				push3(&p3, 0);
				push3(&p3, 0);
				push3(&p3, 0);
				push3(&p3, 0);
				push3(&p3, 0);
				push3(&p3, 0);
				push3(&p3, 0);
				
				p2.topo = -1;
				p3.topo = -1;
				int i=0;
				
				//horário de inicío
				struct tm *data_hora_inicio;         
					time_t seg;
					time(&seg);   
					data_hora_inicio = localtime(&seg);  
				  
					int hi=data_hora_inicio->tm_hour;
					int mi=data_hora_inicio->tm_min; 
					int si=data_hora_inicio->tm_sec;
					  
					
				
				while(rec2 == 0  ){
					fflush(stdin);
					char resp;
					imprimir3(p1,p2,p3);	
					printf("\n\n\n\Qual opção você escolhe?");
					printf("\nA) Da torre 1 para torre 2.");
					printf("\nB) Da torre 1 para torre 3.");
					printf("\nC) Da torre 2 para torre 1.");
					printf("\nD) Da torre 2 para torre 3.");
					printf("\nE) Da torre 3 para torre 1.");
					printf("\nF) Da torre 3 para torre 2.\n\n");
					printf("\nNumero de Movimentos: %i\n",i);
					scanf("%c", &resp);
					system("cls");
					fflush(stdin);
					
					if(resp=='A' || resp=='a'){
						if( p1.elementos[p1.topo]>p2.elementos[p2.topo] && p2.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop3(&p1);
						push3(&p2,i);
						}
					}
					else if(resp=='B' || resp=='b'){
						if( p1.elementos[p1.topo]>p3.elementos[p3.topo] && p3.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop3(&p1);
						push3(&p3,i);
						}
					}
					else if(resp=='C' || resp=='c'){
						if( p2.elementos[p2.topo]>p1.elementos[p1.topo] && p1.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop3(&p2);
						push3(&p1,i);
						}
					}
					else if(resp=='D' || resp=='d'){
						if( p2.elementos[p2.topo]>p3.elementos[p3.topo] && p3.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop3(&p2);
						push3(&p3,i);
						}
					}
					else if(resp=='E' || resp=='e'){
						if( p3.elementos[p3.topo]>p1.elementos[p1.topo] && p1.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop3(&p3);
						push3(&p1,i);
						}
					}
					else if(resp=='F' || resp=='f'){
						if( p3.elementos[p3.topo]>p2.elementos[p2.topo] && p2.topo>-1){
							printf("Ops!Um elemento maior não pode sobrepor um elemento menor. Faça outra Jogada!\n\n");
						}else{
						
						int i;
						i=pop3(&p3);
						push3(&p2,i);
						}
					}
					else{
						printf("\nOPÇÃO INVALIDA!!\n");
					}
					fflush(stdin);
					rec2 = cheia3(p3);
					i=i+1;
					}
					if(rec2 == 1){
						resu=conferir3(p3);
					if(resu == 1){
						
						imprimir3(p1,p2,p3);
						
						//tempo de jogo
						struct tm *data_hora_final; 
						time_t segun;
						time(&segun);   
						data_hora_final = localtime(&segun);  
						
						int hf=data_hora_final->tm_hour;
					    int mf=data_hora_final->tm_min; 
					    int sf=data_hora_final->tm_sec;
					    int h_jogada,m_jogada,s_jogada;
					    
					    h_jogada=hf-hi;
					    m_jogada=mf-mi;
					    s_jogada=sf-si;
					    
					    printf("\n\n[ Você concluiu o jogo em %ih:%im:%is ]\n\n",h_jogada,m_jogada,s_jogada);
						printf("\n________VOCE GANHOU________\n Deseja jogar novamente ?\n Precione 'Enter' para sim e (N) para não.\n ");
					}
					else{
						
						imprimir3(p1,p2,p3);
						
						//tempo de jogo
						struct tm *data_hora_final; 
						time_t segun;
						time(&segun);   
						data_hora_final = localtime(&segun);  
						
						int hf=data_hora_final->tm_hour;
					    int mf=data_hora_final->tm_min; 
					    int sf=data_hora_final->tm_sec;
					    int h_jogada,m_jogada,s_jogada;
					    
					    h_jogada=hf-hi;
					    m_jogada=mf-mi;
					    s_jogada=sf-si;
					    
					    printf("\n\n[ Você concluiu o jogo em %ih:%im:%is ]\n\n",h_jogada,m_jogada,s_jogada);
						printf("\n________VOCE PERDEU________\n Deseja jogar novamente ?\n Precione 'Enter' para sim e (N) para não.\n ");
					}
				}
			}
			else{
				printf("OPÇÃO INVALIDA!!  \n\nPrecione 'Enter' para retornar.\n");
				
			}
	
		scanf("%c", &opc);
	}
}
void push1(Pilha *p, int x){
	if(cheia1(*p)==0){
		p->topo++;
		p->elementos[p->topo] = x;
	}
	else{
	printf("A pilha esta cheia.\n");
	}
}
void push2(Pilha *p, int x){
	if(cheia2(*p)==0){
		p->topo++;
		p->elementos[p->topo] = x;
	}
	else{
	printf("A pilha esta cheia.\n");
	}
}
void push3(Pilha *p, int x){
	if(cheia3(*p)==0){
		p->topo++;
		p->elementos[p->topo] = x;
	}
	else{
	printf("A pilha esta cheia.\n");
	}
}
int pop1(Pilha*p){
	if(vazia1(*p)==0){
		int res;
		res=p->elementos[p->topo];
		p->elementos[p->topo]=0;
		p->topo--;
		return res;
	}
	else{
		printf("A pilha esta vazia.\n");
	}	
}
int pop2(Pilha*p){
	if(vazia2(*p)==0){
		int res;
		res=p->elementos[p->topo];
		p->elementos[p->topo]=0;
		p->topo--;
		return res;
	}
	else{
		printf("A pilha esta vazia.\n");
	}	
}
int pop3(Pilha*p){
	if(vazia3(*p)==0){
		int res;
		res=p->elementos[p->topo];
		p->elementos[p->topo]=0;
		p->topo--;
		return res;
	}
	else{
		printf("A pilha esta vazia.\n");
	}	
}
int cheia1(Pilha p){ //retorna 1 cheia, retorna 0 vazio
	if(p.topo==l1-1){
		return 1;
	}
	else{
		return 0;
	}
}
int cheia2(Pilha p){ //retorna 1 cheia, retorna 0 vazio
	if(p.topo==l2-1){
		return 1;
	}
	else{
		return 0;
	}
}
int cheia3(Pilha p){ //retorna 1 cheia, retorna 0 vazio
	if(p.topo==l3-1){
		return 1;
	}
	else{
		return 0;
	}
}
int vazia1(Pilha p){ // retorna 1 vazia, retorna 0 cheia
	
	if(p.topo==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int vazia2(Pilha p){ // retorna 1 vazia, retorna 0 cheia
	
	if(p.topo==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int vazia3(Pilha p){ // retorna 1 vazia, retorna 0 cheia
	
	if(p.topo==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void imprimir1(Pilha p1,Pilha p2,Pilha p3){
	int i=2;
	printf("Torre 1			Torre 2			Torre 3\n");
	for( i; i>=0; i--){
		printf("   %i			   %i	   		   %i\n", p1.elementos[i], p2.elementos[i],p3.elementos[i]);
	}
	fflush(stdin);
}
void imprimir2(Pilha p1,Pilha p2,Pilha p3){
	int i=4;
	printf("Torre 1			Torre 2			Torre 3\n");
	for( i; i>=0; i--){
		printf("   %i			   %i	   		   %i\n", p1.elementos[i], p2.elementos[i],p3.elementos[i]);
	}
	fflush(stdin);
}
void imprimir3(Pilha p1,Pilha p2,Pilha p3){
	int i=6;
	printf("Torre 1			Torre 2			Torre 3\n");
	for( i; i>=0; i--){
		printf("   %i			   %i	   		   %i\n", p1.elementos[i], p2.elementos[i],p3.elementos[i]);
	}
	fflush(stdin);
}
int conferir1(Pilha p){
	int som, i=l1;
	if(p.elementos[2] == 1){
		if(p.elementos[1] == 2){
			if(p.elementos[0] == 3){
				return 1;
			}
			else{
				return 0;
			}
		}
		else{
			return 0;
		}
	}
	else{
		return 0;
	}
}
int conferir2(Pilha p){
	int som, i=l1;
	
	if(p.elementos[4] == 1){
		if(p.elementos[3] == 2){
			if(p.elementos[2] == 3){
				if(p.elementos[1] ==4){
					if(p.elementos[0] == 5){
				return 1;
					}
					else{
						return 0;
					}
				}
				else{
					return 0;
				}
			}
			else{
				return 0;
			}
		}
		else{
			return 0;
		}
	}
	else{
		return 0;
	}
}
int conferir3(Pilha p){
	int som, i=l1;
	
	if(p.elementos[6] == 1){
		if(p.elementos[5] == 2){
			if(p.elementos[4] == 3){
				if(p.elementos[3] ==4){
					if(p.elementos[2] == 5){
						if(p.elementos[1]== 6){
							if(p.elementos[0] == 7){
								return 1;
								}
								else{
									return 0;
								}
							}
							else{
								return 0;
							}
						}
						else{
							return 0;
						}
				
					}
					else{
						return 0;
					}
				}
				else{
					return 0;
				}
			}
			else{
				return 0;
			}
		}
		else{
			return 0;
		}

}

