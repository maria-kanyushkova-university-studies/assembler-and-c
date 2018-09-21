#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
  {
    char *T;
    int l, x;
    clrscr();
    printf("Введите предложение ");
    gets(T);
    l = strlen(T);

    for (x=0; x<l; x++)
      printf("%c \n", T[x]);

    getch();
  }
