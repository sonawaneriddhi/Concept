#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength = 0;
    int * Arr = NULL;

    printf("Enter Number of elments : ");
    scanf("%d",&iLength);

    //Allocate the memory
    Arr = (int *)malloc(iLength * sizeof(int));

    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");
    }
    else
    {
        printf("Memory gets sucessfully allocated\n");
    }

    //Use the memory

    //Deallocate the memory
    free(Arr);

    return 0;
}