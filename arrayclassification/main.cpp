#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	
	int i = 0;
	int asize = 10;
	int zcount = 0;
	int array[asize] = {1, 2, 3, 0, 5, 6, 0, 8, 0, 0};
	int zarray[asize] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	
	//array é = à 1230560800, zarray deve ser = à 0000123568 (zeros alinhados à esquerda).
	
	//conta numero de zeros:
	for(i=0; i<asize; i++)
	{
	  if(array[i]==0)
	  {
	   zcount++; 	
	  }
	}
	
	//aqui, zcount = 4
	
	//preenche zarray com não zeros à partir do indice = zcount:
	for(i=0; i<asize; i++)
	{
	  if(array[i]!=0)
	  {
	   zarray[zcount] = array[i];
	   zcount++;	
	  }	 		
	}
	
	//imprime os dois arrays para verificar:
	cout << "array: \n";
	for (i=0; i < 10; i++) 
	{
		cout << array[i];
	}
	cout << "\nzarray: \n";
 	for (i=0; i < 10; i++) 
	{
		cout << zarray[i];
	}   	
	
	return 0;
}
