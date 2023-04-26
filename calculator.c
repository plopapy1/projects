#include <stdio.h>
/**
 * main - simple calculator
 * Return: solution
 */
void main(void)
{
	int a;
	int b;
	int sum, sub, multiply, divid, remainder;
	char operand;

	printf("This is a calculator\n");
	printf("input numbers and opperand followed by an enter key \n");
	scanf("%d %c %d", &a, &operand, &b);
	printf("The answer is:  ");

	switch (operand)
	{
		case '+':
			sum = a + b;
			printf("%d\n", sum);
			break;
		case '-':
			sub = a - b;
			printf("%d\n", sub);
			break;
		case '*':
			multiply = a * b;
			printf("%d\n", multiply);
			break;
		case '/':
			divid = a / b;
			printf("%d\n", divid);
			break;
		case '%':
			remainder = a % b;
			printf("%d\n", remainder);
			break;
		default:
			printf("input correct figures");
	}
}
