#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
  {
    int x,y;
    clrscr();
    printf("таблица умножения\n");
    for ( y=1 ; y<=9 ; y++ )
      {
	for ( x=1 ; x<=9 ; x++ )
	  printf("%1d*%1d=%2d  ", x, y, y*x);
        printf("\n");
      }
    getch();
  }
