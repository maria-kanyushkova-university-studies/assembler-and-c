#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void wwod(int *t)
  {
    do
      {
	printf("������ ����� ��஭� ");
	scanf("%d", t);
	if (*t < 0)
	  puts("�訡�� ��������� ������");
      }
    while (*t < 0);
  }

main()
  {
    int A, B, C;

    wwod(&A);
    wwod(&B);
    wwod(&C);

    getch();
  }
