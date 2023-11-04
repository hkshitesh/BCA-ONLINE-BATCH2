#include<stdio.h>
void main()
{
    int a;
    int b;
    int sum;
    int diff;
    printf("Enter the value of a :");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    sum = a+b;
    diff = a-b;
    printf("Sum is : %d ", sum);
    printf("\nDiff is : %d", diff);

}