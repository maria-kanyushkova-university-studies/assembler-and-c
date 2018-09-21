#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define k 3

int wwod(char *T)
  {
     int temp;
     do
       {
	 printf("Введите %s сторону", T);
	 scanf("%d", &temp);
	 if (temp < 0)
	   puts("Ошибка введенных данных");
       }
     while (temp < 0);
     return temp;
  }

main()
  {
    int A, B, C;

    A = wwod("первую");
    B = wwod("вторую");
    C = wwod("третью");

    getch();
  }
