#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define Max 100
#define MaxRan 100

main()
  {
    int A[Max]={0};
    int l, x, Index;

    clrscr();
    /*randomize();         */

    do
      {
	 printf("Введите число элементов ");
	 scanf("%d", &l);
	 if (l<=0 || l>Max)
	   printf("Ошибка введенных данных\n ");
      }
    while (l<=0 || l>Max);

    printf("\n");

    for (x=0;x<l-1;x++)
      {
	do
	  Index = random(MaxRan)+1;
	while (A[Index] != 0);
	printf("%4d", Index);
	A[Index] = 1;
      }

    getch();
  }
