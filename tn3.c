#include <stdio.h>

int main(){

	int num = 0;
	printf("Enter the num : ");
	scanf("%d" , &num);
	if(num & 1){
		printf("2x - 1 \n");
	}
	else{
		printf("2x \n");
	}
return 0;
}
