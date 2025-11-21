#include<stdio.h>
#include<stdlib.h>

int main()
{
    int * Arr = NULL;

    //Allocate the memory
    Arr = (int *)malloc(5 * sizeof(int));           //Allocate 20 bytes

    Arr = (int *)realloc(Arr,10*sizeof(int));       //Now arr contains 40 bytes

    //Use the memory

    //Deallocate the memory
    free(Arr);

    return 0;
}