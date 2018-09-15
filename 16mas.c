#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define Max 100

main()
  {
    int A[Max]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i, j, l;

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

    j=0;

    for (i=0;i<=l;i++)
      if (A[i]>=2 && 5<=A[i])
	j++;

    printf("Количество подходящих элементов %d", j);

    printf("\n\n");

    getch();
  }
