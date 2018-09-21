#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Pi 3.14
main()
  {
    int R_0;
    float Area;
    clrscr();
    printf("Программа подсчета площади окружности по радиусу \n \n");
  METKA:
    printf("Введите радиус : ");
    scanf("%d", &R_0);
    if (R_0 == 0) exit(0);
    Area = Pi * R_0 * R_0;
    printf("Площадь круга  : ");
    printf("%0.2f", Area);
    printf("\n\n");
    goto METKA;
  }
