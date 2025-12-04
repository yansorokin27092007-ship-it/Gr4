#include <stdio.h>
#include <Windows.h>

void aboutMe() {
	printf("Концевой\n");
	printf("Дмитрий\n");
	printf("Алексеевич\n");
	printf("\n");
	printf("Группа: ИСЭбд-11\n");
	printf("Дата:03.10.2025\n");
	printf("Предмет: Основы алгоритмизации и программирование\n");
	printf("Лабораторная работа №5\n");
}

void main4() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	aboutMe();
}