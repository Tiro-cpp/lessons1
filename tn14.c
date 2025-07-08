#include <stdio.h>

int main()
{
	char c = 0;
	printf("Enter a uppercase letter : ");
	scanf(" %c" , &c);
	printf("lowercase: %c \n" , c + 32);

	return 0;
}

