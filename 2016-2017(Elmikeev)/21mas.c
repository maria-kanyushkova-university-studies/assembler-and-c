#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define Max 100

main()
  {
    int A[Max]={51,51,3,9,8,7,7,3,9,17,11,20,13,16,15,8,17,2,19,21};
    int l, x, Max1, Max2;

    clrscr();

    do
      {
	 printf("Введите число элементов в массиве ");
	 scanf("%d", &l);
	 if (l<=0 || l>Max)
	   printf("Ошибка введенных данных\n ");
      }
    while (l<=0 || l>Max);

    printf("\n");


    for (x=0;x<l;x++)
      printf("%4d", A[x]);

    printf("\n");

    Max1 = 0;
    Max2 = 0;

    for (x=0;x<l;x++)
      {
	if (Max1 < A[x])
	  {
	    Max1 = A[x];
	  }
	if (A[x] > Max2 && A[x] != Max1)
	  {
	    Max2 = Max1;
	  }
      }

    printf("%4d второй по величине", Max2);

    getch();
  }
