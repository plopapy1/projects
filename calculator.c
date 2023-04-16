#include <stdio.h>
/**
 * main - simple calculator
 * Return: solution
 */
void main()
{
	int a;
	int b;
	int sum, sub, multiply, divid, remainder;
	char operand;

	printf("This is a calculator\n");
	printf("input numbers and opperand followed by an enter key \n");
	scanf("%d %c %d", &a, &operand, &b);
	printf("The answer is\n");

	switch (operand)
	{
		case '+':
			sum = a + b;
			printf("%d", sum);
			break;
		case '-':
			sub = a - b;
			printf("%d", sub);
			break;
		case '*':
			multiply = a * b;
			printf("%d", multiply);
			break;
		case '/':
			divid = a / b;
			printf("%d", divid);
			break;
		case '%':
			remainder = a % b;
			printf("%d", remainder);
			break;
		default:
			printf("input correct figures");
	}
}
