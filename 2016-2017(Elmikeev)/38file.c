#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

main()
  {
    FILE *p;
    char ch;
    clrscr();

    p = fopen("38text.txt", "r");
    while ( (ch = getc(p)) != EOF)
      printf("%c", ch);
    fclose(p);

    getch();
  }
