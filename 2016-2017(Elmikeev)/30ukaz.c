#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
  {
    char *T="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int l, x, y, Index;
    clrscr();
    randomize();
    l = strlen(T);
    for (y=0; y<l;y++)
      {
	do
	  Index = random(l);
	while (T[Index] == ' ');
	printf("%c", T[Index]);
	T[Index] = ' ';
      }

    getch();
  }
