//Write a program to print the number in reverse order.
#include<stdio.h>
int main(){
	int n, reverse = 0, r;

  printf("Enter an integer: ");
  scanf("%d", &n);

   (n != 0);
   {
    r = n % 15;
    reverse = reverse * 15 + r;
    n /= 15;
  }

  printf("Reversed number = %d", reverse);

  return 0;
}
