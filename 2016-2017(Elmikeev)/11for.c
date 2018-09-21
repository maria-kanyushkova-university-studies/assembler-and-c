#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
  {
    int x;
    clrscr();
    printf("число квадрат \n");
    for ( x=1 ; x<=20 ; x++ )
      printf("%4d%6d\n", x, x*x);
    getch();
  }
