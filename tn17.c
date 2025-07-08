#include <stdio.h>

int main(){

	int digit = 34;
	int num = 0;
	printf("Enter number : ");
	scanf("%d" , &num);
	printf("%d \n" , digit | (1 << num));
	
return 0;
}
