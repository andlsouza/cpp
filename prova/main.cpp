//18) classificação otimizada:

#include <iostream>
using namespace std;

int main() {
    int array[] = {2, 3, 0, 4, 8, 0, 5, 9, 0, 0, 11, 0, 45, 0, 23, 21, 0, 36};
    int arraySize = sizeof(array)/sizeof(int) - 1;
    int change = arraySize;
    int index = 0;
  
    //rearrange the array:
    for(index = arraySize; index >= 0; index --)
    {
     if(array[index] != 0)
     {
      array[change--] = array[index];
     }     
    }

    //fill zeros:
    for(index = 0; index <= change; index++)
    {
     array[index] = 0;  
    }
    
    //print:
    for (int i = 0; i < arraySize;i++)
      cout << array[i] << ", ";
    cout << array[arraySize];
    return 0;
}

/* 17) busca binária:

#include <iostream>
using namespace std;
int findIndex(int * array, int searchNumber, int arraySize){
  
  int ini = 0;
  int end = arraySize;
  int mid;
  
  while(ini <= end)
  {
    mid = (ini+end) / 2;
    
    if(array[mid] == searchNumber)
    {
     return mid;
    }
    else if(searchNumber > array[mid])
    {
     ini = mid + 1;  
    }
    else
    {
     end = mid - 1;  
    }
  }
  
    return -1;
}

int main() {    
    int input;
    int array[] = {1,5,8,13,21,37,70,95,150};
    
    cin>>input; //Don't change this otherwise test will fail
    
    int answer = findIndex(array ,input, (sizeof(array)/sizeof(int)) );
    
    cout << answer;  //Don't change this otherwise test will fail
    return 0;
}
*/

/*
int check  (int v[], int vectorSize) {
   int i;
   if (vectorSize > 1) 
      for (i = 1; i < vectorSize; i++) 
         if (v[i-1] >= v[i]) 
             return 0; 
   return 1; 
}

int main() {
int retorno = 0;

int V[] = { 8, 12, 15, 18, 26, 289};

retorno = check(V, 6);

cout << "retorno = ";
cout << retorno;

}

//resposta: retorna 1 que quer dizer que o vetor esta organizado de forma crescente ou ascendente
*/


/*	
int y = 0;

int z = 1;

int x = (y == 0) ? z-- : ++z; //x = o retorno da expressão de y. se y for = à 0 então decrementa z senão incrementa z. como y é = 0, o retorno é = 1 (x = 1) e z é decrementado.

cout << "valor de x: "; //1
cout << x;
cout << "valor de z: "; //0
cout << z;
  
  return 0;
  
//resposta: x = 1 e z = 0
*/  

/*
public class Test {
  public static void main(String [] args) {
    int x = 10;
    for (int y = 0; y < 5; y++) {
      System.out.print(" " + x);
      x -= 1;
      if(x == 7) {
        break; //interrompe for
      }
    }
  }
}

//resposta: 10 9 8
*/
