#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

struct Hello
{
    int iNo;
    float fMarks;
    struct Demo dObj;       //Nested Structure  
};

int main()
{
    printf("Size of Hello is : %lu\n",sizeof(struct Hello));        // 16

    return 0;
}