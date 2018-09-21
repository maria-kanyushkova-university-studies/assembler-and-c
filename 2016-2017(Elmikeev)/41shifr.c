#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

main(int PK, char *PS[])
  {
    FILE *p;
    char *Name;
    char *K;
    int LenK;
    int x;
    unsigned long LenF;
    unsigned long N;
    char B;

    clrscr();

    if (PK > 2) {printf("\n Ошибка ввода"); exit(0);}
    if (PK == 2) Name = PS[1];
    else /*scanf("%s", Name);*/ Name = "41shifr.txt";

    /*scanf("%s", K);*/ gets(K);
    LenK = strlen(K);

    p = fopen(Name, "rb+");
    fseek(p, 0, 2);
    fgetpos(p, &LenF);
    fclose(p);

    p = fopen(Name, "rb+");
    x = 0;

    for (N = 0; N < LenF; N++)
      {
	fseek(p, N, 0);
	fread(&B, sizeof(char), 1, p);
	B = B ^ K[x];
	fseek(p, N, 0);
	fwrite(&B, sizeof(char), 1, p);
	x++;
	if (x >= LenK) {x = 0;}
      }

    fclose(p);
    getch();
  }
