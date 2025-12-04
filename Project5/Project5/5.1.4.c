#include <stdio.h>
#include <Windows.h>

int fine_It(int v, int vMax) {
	if (v < vMax + 1) return 0;
	if (v < vMax + 11) return 110;
	if (v < vMax + 41) return 380;
	if (v < vMax + 61) return 1170;
	return 1680;
}
void main3() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;

	printf("Введите 3 целых числа\n");
	printf("1. Разрешенную скорость. \n");
	printf("2. Начало анализируемого интервала\n");
	printf("3. Конец анализируемого интервала\n");
	printf("БИБИБИБИБИ");
	printf("AVAVAVAVAVAVAVV");

	int n = scanf("%d%d%d", &a, &b, &c);

	if (n != 3) {
		printf("Ошибка\n");
		return;
	}
	int vMax = a;
	int v = b;
	do {
		printf("Если вы едете со скоростью %d вместо %d это вам встанет в %d\n", v, vMax, fine_It(v, vMax));
		v += 1;
	} while (v <= c);
}