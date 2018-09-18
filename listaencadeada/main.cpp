#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

struct reg {
      int         conteudo; 
      struct reg *prox;
   };
   
typedef struct reg celula;  // célula   

celula buffcel;
int tambuffcel = 10;

// Esta função recebe um inteiro x e uma
// lista encadeada le de inteiros e devolve
// o endereço de uma celula que contém x.
// Se tal celula não existe, devolve NULL.

celula *busca (int x, celula *le)
{
   celula *p;
   p = le;
   while (p != NULL && p->conteudo != x) 
      p = p->prox; 
   return p;
}

preenchebuffcel()
{
	int i = 0;
	
	for(i=0; i<tambuffcel; i++)
	{
	 buffcel.conteudo = i*100; //0, 100, 200, 300...
	 buffcel.prox = i+1; //0, 1, 2, 3...		
	}
	
}

int main(int argc, char** argv) {
	
	int i = 0;
	celula retornocel;
	
	preenchebuffcel();
	
	for(i=0; i<tambuffcel; i++)
	{
	 printf("buffcel.conteudo[%d] = %d \n", i, buffcel->conteudo);
	 printf("buffcel.prox[%d] = %d \n", i, buffcel->prox);	
	}
	
	retornocel = busca(300, buffcel);
	
	printf("retornocel.conteudo = %d \n", retornocel.conteudo);
	printf("retornocel.prox = %d \n", retornocel.prox);
	
	return 0;
}
