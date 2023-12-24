//Write a program to find the simple Interest & Compound Interest.
#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,p,r,n;
    printf("Enter the value of p: ");
    scanf("%d",&p);
    printf("\nEnter the value of r: ");
    scanf("%d",&r);
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    x=p*r*n/100;
    printf("\nThe simple interest is : %f",x);
    printf("\nFor Compound Interest.....");
    printf("\nEnter the value of p: ");
    scanf("%d",&p);
    printf("\nEnter the value of r: ");
    scanf("%d",&r);
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    y=p*((1+r/100));
    printf("\nThe compound interest is : %f",y);
}
