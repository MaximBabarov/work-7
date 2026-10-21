#define _CRT_SECURE_NO_WARNINGS

#define _USE_MATH_DEFINES 

#include <locale.h>

#include <stdio.h>

int work1();
int work2();
int work3();

int main()
{
	setlocale(LC_ALL, "RUS");
	printf("Задание 1\n");
	work1();
	printf("Задание 2\n");
	work2();
	printf("Задание 3\n");
	work3();

}
int work1() {
	char c;
	printf("Введите цифру или букву: ");
	scanf("%c", &c);
	switch (c)
	{
	case '1':
		printf("Это цифра.\n");
		break;
	case '2':
		printf("Это цифра.\n");
		break;
	case '3':
		printf("Это цифра.\n");
		break;
	case '4':
		printf("Это цифра.\n");
		break;
	case '5':
		printf("Это цифра.\n");
		break;
	case '6':
		printf("Это цифра.\n");
		break;
	case '7':
		printf("Это цифра.\n");
		break;
	case '8':
		printf("Это цифра.\n");
		break;
	case '9':
		printf("Это цифра.\n");
		break;
	case '0':
		printf("Это цифра.\n");
		break;
	default:
		printf("Это буква\n");
	}
	return 0;
}
int work2()
{
	float a, b;
	char c;
	printf("введите цифру:");
	scanf("%f", &a);
	printf("\n");
	printf("введите вторую цифру:");
	scanf("%f", &b);
	printf("\n");
	printf("введите что сделать с цифрами\n");
	printf("(+ сложение - вычитание * умножение / деление):");
	scanf(" %c", &c);
	printf("\n");
	printf("%f%c%f", a, c, b);
	switch (c)
	{
	case '+':
		printf("=%f", a + b);
		break;
	case '-':
		printf("=%f", a - b);
		break;
	case '*':
		printf("=%f", a * b);
		break;
	case '/':
		printf("=%f", a / b);
		break;
	}
	printf("\n");
	return 0;
}
int work3()
{
	int N;
	printf("Введите двухзначное число:");
	scanf("%d", &N);
	printf("\n");
	switch (N % 10)
	{
	case '2':
		printf("Последняя цифра числа - не простое число");
		break;
	case '4':
		printf("Последняя цифра числа - не простое число");
		break;
	case '6':
		printf("Последняя цифра числа - не простое число");
		break;
	case '8':
		printf("Последняя цифра числа - не простое число");
		break;
	case '9':
		printf("Последняя цифра числа - не простое число");
		break;
	default:
		printf("Последняя цифра числа - простое число");
		break;
	}
	printf("\n");
	return 0;
}
