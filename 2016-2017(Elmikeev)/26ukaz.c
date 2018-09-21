#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
  {
    char *T;
    int l, x, collet, colbg;
    clrscr();
    randomize();
    printf("Введите предложение ");
    gets(T);
    l = strlen(T);
    collet = 1;

    for (x=0; x<l; x++)
      {
	textcolor(collet);
	do
	  colbg = random(8);
	while (colbg == collet);
	textbackground(colbg);
	cprintf("%c", T[x]);
	collet++;
	if (collet >= 16) collet = 1;
      }

    getch();
  }
