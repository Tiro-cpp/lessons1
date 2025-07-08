#include <stdio.h>

int main(){

	int digit = 34;
	int num = 0;
	printf("enter the number : ");
	scanf("%d" , &num);
	printf("%d" , ~(1 << (num)) & digit);
return 0;
}
