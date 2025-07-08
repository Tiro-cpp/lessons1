#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	printf("Input the first Num : ");
	scanf("%d" , &num1);
	printf("Input the secont one : ");
	scanf("%d" , &num2);

	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
	printf("num1 = %d \nnum2 = %d \n " , num1 , num2);
return 0;
}
