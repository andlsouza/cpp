#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
	
	int len = 10;
	int vetor[len] = {1, 2, 3, 3, 4, 5, 6, 7, 8 , 9};
	int numbuscado = 7;
	int inicial = 0;
	int final = len;
	int meio;
	//int i = 0;
	
	while(inicial <= final)
	{
		meio = (inicial+final) / 2; //aqui, meio = 5, na 1ª iteração
		
		if(vetor[meio] == numbuscado)
		{
		 cout << "numbuscado encontrado na pos: ";
		 cout << meio;	
		 return meio;
		}
		else if(numbuscado > vetor[meio]) //numbuscado está a direita
		{
		 inicial = meio + 1;	
		}
		else //numbuscado < vetor[meio], numbuscado está a esquerda
		{
		 final = meio - 1;	
		}
	}
	
	cout << "numbuscado nao encontrado no vetor: ";
	
	return -1;
}
