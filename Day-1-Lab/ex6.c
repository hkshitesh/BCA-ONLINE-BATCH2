#include<stdio.h>
void main()
{
    int a[10];
    int i;
    for(i=0;i<10;i++)
    {
        a[i]=i*i;
    }

    for(i=0;i<10;i++)
    {
        printf("\t%d",a[i]);
    }
}