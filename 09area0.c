#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Pi 3.14
main()
  {
    int R_0;
    char A;
    float Area;
    clrscr();
    printf("�ணࠬ�� ������ ���頤� ���㦭��� �� ࠤ���� \n \n");
  METKA:
    printf("������ ࠤ��� : ");
    scanf("%d", &R_0);
    if (R_0 < 0)
      {
	printf("\n    �訡�� ��������� ������ \n\n");
	goto METKA;
      }
    Area = Pi * R_0 * R_0;
    printf("���頤� ��㣠  : ");
    printf("%0.2f", Area);
    printf("\n\n");
  KLAV:
    printf("��� �த������� ࠡ��� ������ 'Enter' ��� ��室� ������ 'Esc' \n");
    A = getch();
    printf("\n\n");
    if (A == 13) goto METKA;
    if (A == 27) exit(0);
    printf("����� �� � ������");
    goto KLAV;
  }
