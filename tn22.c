#include <stdio.h>

int main()
{
	char c = 0;
	printf("Enter a lowercase letter : ");
	scanf(" %c" , &c);
	printf("Uppercase: %c \n" , c - 32);

	return 0;
}
