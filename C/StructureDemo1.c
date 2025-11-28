#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo Dobj;

    printf("Size of Demo is : %lu\n",sizeof(struct Demo));      // 12

    printf("Size of object is : %lu\n",sizeof(Dobj));           // 12

    return 0;
}