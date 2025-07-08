#include <stdio.h>
#define PI 3.14

int main()
{
	int r = 0;
	printf("Enter radius: ");
	scanf("%d" , &r);
	printf("Area %.2f \n" , PI * r * r);
	return 0;
}
