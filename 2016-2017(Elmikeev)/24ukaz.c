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

    for (x=l; x>=0; x--)
      printf("%c \n", T[x]);

    getch();
  }
