#include<stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo dObj;

    dObj.i = 11;
    dObj.f = 90.4f;
    dObj.j = 21;

    printf("%d\n",dObj.i);
    printf("%f\n",dObj.f);
    printf("%d\n",dObj.j);
    
    return 0;
}