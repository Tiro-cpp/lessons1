#include <stdio.h>

int main()
{
	int a = 0 , b = 0 , c = 0;
	printf("Enter three numbers:");
	scanf("%d %d %d" , &a , &b , &c);
	float res = a + b + c;
	printf("Total: %.0f \n" , res);
	printf("Average: %.2f \n" , res/3);
	return 0;
}
