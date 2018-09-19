#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	
	int len = 10;
	int array[len] = {1, 2, 3, 0, 0, 6, 0, 8, 9, 0};
	int change = len - 1;
	int idx = 0;
	
	for(idx = len-1; idx >= 0; idx--)
	{
	 if(array[idx] != 0)
	 {
	  array[change--] = array[idx];
	 }   	
	}
	
	for(idx = 0; idx <= change; idx++)
	{
	 array[idx] = 0;	
	}
	
	cout << "array: ";
	for(idx = 0; idx < len; idx++)
	{
	 cout << array[idx];		
	}
	
	return 0;
}
