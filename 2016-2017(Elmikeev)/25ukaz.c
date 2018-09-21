#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
  {
    char *T;
    int l, x, color;
    clrscr();
    printf("Введите предложение ");
    gets(T);
    l = strlen(T);
    color = 1;

    for (x=0; x<l; x++)
      {
	textcolor(color);
	cprintf("%c", T[x]);
	color++;
	if (color >= 16) color = 1;
      }

    getch();
  }
