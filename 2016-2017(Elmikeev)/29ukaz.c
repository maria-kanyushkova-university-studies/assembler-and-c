#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
  {
    char *T;
    int l, x, y, suml, sump;
    clrscr();
    printf("Введите предложение ");
    gets(T);
    l = strlen(T);
    suml = 0;
    sump = 0;

    for (x=0, y=l-1; x<y; x++, y--)
      {
	suml = suml + T[x];
	sump = sump + T[y];
      }

    if (suml != sump) printf("не ");
    printf("счастливый\n");

    getch();
  }
