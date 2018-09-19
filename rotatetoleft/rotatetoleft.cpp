#include <iostream>

using namespace std;

static void rotate_to_left(int *array, const int len) {
    int change = len-1;

    for (int idx = len-1; idx >= 0; idx--) {
        if (array[idx] != 0) {
            array[change--] = array[idx]; 
        }
    }
    
    for (int idx = 0; idx <= change; idx++) {
        array[idx] = 0;
    }
}

int main()
{
    int array [] = {1,2,0,6,5,0,0,6,0};
    const int len = sizeof(array)/sizeof(array[0]);
    
    rotate_to_left(array, len);   
    
    for (int idx = 0; idx < len; idx++) {
        printf("%d, ", array[idx]);
    }
    
    printf("End of program.\n");    
    return 0;
}
