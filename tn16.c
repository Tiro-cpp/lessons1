#include <stdio.h>

int main()
{

	printf("Task1 \n");
	int a = 0;
	printf("Task1. input integer value ");
	scanf("%d" , &a);
	printf("int a =  %d\n \n" , a);

	printf("Task2 \n");
	double b = 0;
        printf("Task2. input double value ");
        scanf("%lf" , &b);
        printf("double b = %lf\n \n" , b);

	printf("Task3 \n");
	char c = 0;
        printf("Task3. input charecter ");
        scanf(" %c" , &c);
        printf("char c = %c\n \n" , c);

	printf("Task4 \n");
	int x = 0;
	printf("give me number for Task4 ");
	scanf("%d" , &x);
	int res4 = 0;
	res4 = (4 * x + 21 * x * x - 12);
	printf("result is %d \n \n" , res4);
	
	printf("Task5 \n");
	float y = 0;
	printf("give me number for Task5 ");
	scanf("%f" , &y);
	float res5 = 0;
	res5 = y / (5 + 2) + y * 30 - 51;
	printf("result is %f \n \n" , res5);
	
	printf("Task6 \n");
	float t = 0;
	float w = 0;
	printf("input t .  ");
	scanf("%f" , &t);
	printf("input w .  ");
	scanf("%f" , &w);
	float res6 = 0;
	res6 = (t * w + 21 * t / w - 200);
	printf("result is %f \n \n" , res6);

	printf("Task7 \n");
	float num1 = 0;
	float num2 = 0;
	printf("num1 = ");
	scanf("%f" , &num1);
	printf("num2 = ");
	scanf("%f" , &num2);
	printf("the average is %f \n" , (num1 + num2)/2);

	return 0;
}
