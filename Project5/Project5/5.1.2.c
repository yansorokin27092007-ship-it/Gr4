#include <stdio.h>
#include <Windows.h>

int isPrime(int num) {
	int del = 2;
	while (del < num) {
		if (num % del == 0) {
			return 0;
		}
		del++;
	}
	return 1;
}
void main2() {

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
		if (isPrime(num))
			printf("%d\t", num);
		num++;
	} while (num <= b);
}