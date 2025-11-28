#include<stdio.h>

struct Demo
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
};

int main()
{
    printf("Size of Demo is : %lu\n",sizeof(struct Demo));          // 20

    return 0;
}