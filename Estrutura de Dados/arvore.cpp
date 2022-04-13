#include <stdio.h>
#include <stdlib.h>

struct arv{
	int info;
	struct arv *esq;
    struct arv *dir;
};

typedef struct arv arvbb;

arvbb* inserir (arvbb *a, int x);
arvbb* remover (arvbb *a, int x);
int buscabb (arvbb *a, int x);
int altura (arvbb *a);
int qtdfolha (arvbb *a);
void pre_ordem(arvbb *a);
void in_ordem (arvbb *arv);
void pos_ordem(arvbb *a);

int main () {
	int resp;

arvbb *a = NULL;

//a = inserir (a, 50);

//resp=buscabb(a, 30);
//if(resp == 0){
//	printf("\nNumero nao encontrado\n");
//}else{
//	printf("\nNumero encontrado\n");
//}
//printf("\n A altura da arvore e: %i", altura(a));

//	printf("\nA quantidade de folhas e: %i\n", qtdfolha(a));

	int i=1, receb;
	while(i==1){
		
		printf("\nDigite a opçao desejada: \n");
		printf("\n1_Inserir um numero.");
		printf("\n2_Remover um numero.");
		printf("\n3_Buscar um numero.");
		printf("\n4_Mostar a altura da arvore.");
		printf("\n5_Mostar a quantidades de folhas.");
		printf("\n6_Pre_ordem.");
		printf("\n7_In_ordem.");
		printf("\n8_Pos_ordem.");
		printf("\n9_Sair.\n\n");
		scanf("%i", &receb);
		
		if(receb==1){
			system("cls");
			int b;
			printf("Digite o numero: \n");
			scanf("%i", &b);
			a = inserir(a, b);
			system("cls");
		}
		else if(receb==2){
			system("cls");
			int b;
			printf("Digite o numero: \n");
			scanf("%i", &b);
			a = remover(a, b);
		}
		else if(receb==3){
			system("cls");
			int b, c;
			printf("Digite o numero: \n");
			scanf("%i", &b);
			c = buscabb(a, b);
			if(c == 0){
				printf("\nNumero nao encontrado\n");
			}	
			else{
				printf("\nNumero encontrado\n");
			}
		}
		else if(receb==4){
			system("cls");
			printf("\nA altura da arvore e: %i\n", altura(a));
		}
		else if(receb==5){
			system("cls");
			printf("\nA quantidade de folhas e: %i\n", qtdfolha(a));
		}
		else if(receb==6){
			system("cls");
			pre_ordem(a);
			printf("\n");
		}
		else if(receb==7){
			system("cls");
			in_ordem(a);
			printf("\n");
		}
		else if(receb==8){
			system("cls");
			pos_ordem(a);
			printf("\n");
		}
		else if(receb==9){
			i=0;
		}
		else{
			system("cls");
			printf("Opcao invalida!!");
		}
	}
}

arvbb* inserir (arvbb *a, int x){
    if(a == NULL){
        a=(arvbb*)malloc(sizeof(arvbb));
        a->info = x;
        a->esq = NULL;
        a->dir = NULL;
    }
    else if(x < a->info){
        a->esq = inserir(a->esq,x);
    }
    else{
        a->dir = inserir(a->dir,x);
    }
    return a;
}

arvbb* remover (arvbb *a, int x){
    if(a == NULL){
        return NULL;
    }
    else{
        if(a->info >x){
            a->esq = remover (a->esq,x);
        }
        else if (a->info <x){
            a->dir = remover (a->dir,x);
        }
        else{
            if((a->esq == NULL) && (a->dir == NULL)){
                free(a);
                a=NULL;
            }
            else if(a->dir == NULL){
                arvbb *tmp = a;
                a = a -> esq;
                free (tmp);
            }
            else if(a->esq == NULL){
                arvbb *tmp = a;
                a = a -> dir;
                free (tmp);
            }																																
            else{
                arvbb *tmp = a->dir;
                while(tmp->esq != NULL){
                    tmp=tmp->esq;
                }
                a->info = tmp->info;
                tmp->info = x;
                a->dir = remover(a->dir,x);
            }
        }
    }
    return a;
}
int buscabb (arvbb *a, int x){
	if(a == NULL){
		return 0;
	}else{
		if(a->info==x){
			return 1;
		}else{
			if(x > a->info){
				return buscabb(a->dir, x);
			}else{
				return buscabb(a->esq, x);
			}
		}
	}
}
int altura (arvbb *a){
	if(a==NULL){
		return -1;
	}else{
		int left = altura(a->esq);
		int right = altura(a->dir);
		if(left > right){
			return left +1;
		}else{
			return right +1;
		}
	}
}
int qtdfolha (arvbb *a){
	if(a== NULL){
		return 0;
	}else if(a->esq == NULL && a->dir == NULL){
		return 1;
	}else{
		return qtdfolha (a->esq)+ qtdfolha (a->dir);
	}
	
}
void in_ordem (arvbb *arv) {
   if (arv != NULL) {
      in_ordem (arv->esq);
      printf ("%d, ", arv->info);
      in_ordem (arv->dir);
   }
}
void pre_ordem(arvbb *a){
	if (a != NULL){
		printf ("%d, ", a->info);
		pre_ordem(a->esq);
		pre_ordem(a->dir);
	}
}
void pos_ordem(arvbb *a){
	if (a != NULL){
		pos_ordem(a->esq);
		pos_ordem(a->dir);
		printf("%d, ", a->info);
	}
}
