#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
  {
    char *T;
    int l, x, y;
    char temp;
    clrscr();
    printf("Введите предложение ");
    gets(T);
    l = strlen(T);

    for (x=0; x<l; x++)
      printf("%c", T[x]);

    printf("\n");

    for (x=0, y=l-1; x<y; x++, y--)
      {
	temp = T[x];
	T[x] = T[y];
	T[y] = temp;
      }

    for (x=0; x<l; x++)
      printf("%c", T[x]);

    getch();
  }
