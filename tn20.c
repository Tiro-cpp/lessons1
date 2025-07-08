#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	printf("Before swaping \na = ");
	scanf("%d" , &a);
	printf("b = ");
	scanf("%d" , &b);
	
	a = a + b;
	b = -(b - a);
	a = a - b;
	printf("After swap\na = %d \n" , a);
	printf("b = %d \n" , b);
	return 0;
}
	
