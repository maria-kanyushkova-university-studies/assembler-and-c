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
    temp = 0;

    for (x=0, y=l-1; x<y; x++, y--)
      {
	if (T[x] == T[y])
	  {
	    temp = 1;
	    break;
	  }
      }

    if (temp == 1)
      printf("паллиндром\n");
    else
      printf("не паллиндром\n");

    getch();
  }
