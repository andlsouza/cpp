#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	int tamanho = 10;
	int vetor[tamanho] = {0, 3, 2, 1, 7, 5, 6, 9, 8, 4};
	int vaux = 0;
	int i = 0;
	int j = 0;
	
	for(i=0; i<tamanho; i++)
	{
		
	  for(j=0; j<tamanho; j++)
	  {
	  
	   if(vetor[i] < vetor[j])
	     {
	     	
	      //aqui acontece a troca dos valores:	
	      vaux = vetor[i];
	      vetor[i] = vetor[j]; 
		  vetor[j] = vaux;
		  	
		 }
	  	
	  }	
		
	}
	
	//imprime vetor:
	cout << "vetor ordenado: ";
	for(i=0; i<tamanho; i++)
	{
	cout << vetor[i];
	}
	
	return 0;
}
