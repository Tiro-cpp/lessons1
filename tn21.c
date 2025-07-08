#include <stdio.h>

int main(){

	int digit = 34;
	int num = 0;
	printf("Enter the number : ");
	scanf("%d" , &num);
	printf("%d \n" , (1 << num) ^ digit);
return 0;
}
