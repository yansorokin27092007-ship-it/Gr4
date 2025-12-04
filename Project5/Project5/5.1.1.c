#include <stdio.h>
#include <Windows.h>

int isLeapYear(int year) {
	if (year % 400 == 0)
		return 1;
	if (year % 100 == 0)
		return 0;
	if (year % 4 == 0)
		return 1;
	return 0;
}

void main1() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;

	printf("Введите 2 целых числа\n");
	int n = scanf("%d%d", &a, &b);

	if (n != 2) {
		printf("Ошибка\n");
		return;
	}
	printf("1. Начало анализируемого интервала\n");
	printf("2. Конец анализируемого интервала\n");
	printf("%d %d\n", a, b);

	int num = a;
	do {
		if (isLeapYear(num))
			printf("%d\t", num);
		num++;
	} while (num <= b);
}