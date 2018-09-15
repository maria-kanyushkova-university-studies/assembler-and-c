#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Pi 3.14
main()
  {
    int R_0;
    char A;
    float Area;
    clrscr();
    printf("Программа подсчета площади окружности по радиусу \n \n");
  METKA:
    printf("Введите радиус : ");
    scanf("%d", &R_0);
    if (R_0 < 0)
      {
	printf("\n    Ошибка введенных данных \n\n");
	goto METKA;
      }
    Area = Pi * R_0 * R_0;
    printf("Площадь круга  : ");
    printf("%0.2f", Area);
    printf("\n\n");
  KLAV:
    printf("Для продолжения работы нажмите 'Enter' для выхода нажмите 'Esc' \n");
    A = getch();
    printf("\n\n");
    if (A == 13) goto METKA;
    if (A == 27) exit(0);
    printf("Нажата не та клавиша");
    goto KLAV;
  }
