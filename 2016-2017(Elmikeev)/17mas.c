#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define Max 100

main()
  {
    int A[Max]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int i, j, l, MaxEl;

    clrscr();

    do
      {
	 printf("������ �᫮ ����⮢ � ���ᨢ� ");
	 scanf("%d", &l);
	 if (l<=0 || l>Max)
	   printf("�訡�� ��������� ������\n ");
      }
    while (l<=0 || l>Max);

    printf("\n");

    MaxEl=0; //� ����ᬮ�� �� �����(���� ����⥫�� ����)

    for (i=0;i<l;i++)
      if (A[i]>=MaxEl)
	MaxEl = A[i];

    printf("���ᨬ���� ����� ���ᨢ� %d", MaxEl);

    printf("\n\n");

    getch();
  }
