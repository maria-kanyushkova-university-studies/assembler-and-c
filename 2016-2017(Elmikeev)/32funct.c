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
	 printf("������ %s ��஭�", T);
	 scanf("%d", &temp);
	 if (temp < 0)
	   puts("�訡�� ��������� ������");
       }
     while (temp < 0);
     return temp;
  }

main()
  {
    int A, B, C;

    A = wwod("�����");
    B = wwod("�����");
    C = wwod("�����");

    getch();
  }
