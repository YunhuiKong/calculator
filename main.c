#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int number1, number2, number3;
	char operator;
	
	printf("수식을 입력하세요: ");
	scanf("%d %c %d", &number1, &operator, &number2);
	
	switch (operator)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = sub(a, b);
			break;
		case '*':
			c = multi(a, b);
			break;
		case '/':
			c = div(a, b);
			break;
	}
	
	printf("result is %d.\n", c);
	
	return 0;
}
 
int add(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return 0;
}
 
int div(int a, int b)
{
	//TODO implementation
	return 0;
}