//Write a program to make a square and cube of number.
#include<stdio.h>

int main()
{
	long n,square,cube;

	printf("Enter the number :--> ");
	scanf("%d", &n);

	square = n * n;
	cube = n * n * n;

	printf("Square of the number :--> %ld", square);
	printf("\nCube of the number :--> %ld", cube);

	return 0;

}
