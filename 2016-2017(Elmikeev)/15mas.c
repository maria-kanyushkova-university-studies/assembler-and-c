#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define Max 100

main()
  {
    int A[Max]={0};
    int i, l, Sum;

    clrscr();

    do
      {
	 printf("������ �᫮ ����⮢ � ���ᨢ� ");
	 scanf("%d", &l);
	 if (l<=0 || l>Max)
	   printf("�訡�� ��������� ������\n ");
      }
    while (l<=0 || l>Max);

    for (i=0;i<l;i++)
      {
	printf("������ ���祭�� %2d-��� ����� ���ᨢ� ", i+1);
	scanf("%d", &A[i]);
      }

    printf("���ᨢ \n");
    for (i=0;i<l;i++)
      printf("%4d", A[i]);
    printf("\n");

    Sum=0;

    for (i=0;i<=l;i++)
      Sum = Sum + A[i];

    printf("�㬬� ����⮢ ���ᨢ� = %d", Sum);

    printf("\n\n");

    getch();
  }
