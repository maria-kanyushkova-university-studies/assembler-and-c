#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Pi 3.14
main()
  {
    int X, Y, Z;
    char A;
    float Area, PolP;
    clrscr();
    printf("�ணࠬ�� ������ ���頤� ��㣮�쭨�� �१ ��஭� \n \n");
  METKA1:
    printf("������ ����� ��஭� ��㣮�쭨�� : ");
    scanf("%d", &X);
    if (X < 0)
      {
	printf("\n    �訡�� ��������� ������ \n\n");
	goto METKA1;
      }
  METKA2:
    printf("������ ����� ��஭� ��㣮�쭨�� : ");
    scanf("%d", &Y);
    if (Y < 0)
      {
	printf("\n    �訡�� ��������� ������ \n\n");
	goto METKA2;
      }
  METKA3:
    printf("������ ����� ��஭� ��㣮�쭨�� : ");
    scanf("%d", &Z);
    if (Z < 0)
      {
	printf("\n    �訡�� ��������� ������ \n\n");
	goto METKA3;
      }
    PolP = (X + Y + Z) / 2;
    Area = PolP*(PolP-X)*(PolP-Y)*(PolP-Z);
    if (Area <= 0)
      {
	printf("\n    �訡�� ��������� ������ \n\n");
	goto METKA1;
      }
    Area = sqrt(Area);
    printf("���頤� ��㣮�쭨��  : ");
    printf("%0.2f", Area);
    printf("\n\n");
  KLAV:
    printf("��� �த������� ࠡ��� ������ 'Enter' ��� ��室� ������ 'Esc' \n");
    A = getch();
    printf("\n\n");
    if (A == 13) goto METKA1;
    if (A == 27) exit(0);
    printf("����� �� � ������ \n");
    goto KLAV;
  }
