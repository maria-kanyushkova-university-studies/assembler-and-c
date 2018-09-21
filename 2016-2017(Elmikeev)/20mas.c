#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define Max 100

main()
  {
    int A[Max]={1,2,3,9,8,7,7,3,9,17,11,20,13,16,15,8,17,2,19,21};
    int x, y, l, El, flag;

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

    for (y=l;y>0;y--)
      for (x=0;x<y-1;x++)
	if (A[x]>A[x+1])
	  {
	    El=A[x];
	    A[x]=A[x+1];
	    A[x+1]=El;
	  }

    for (x=0;x<l;x++)
      printf("%4d", A[x]);

    getch();
  }
