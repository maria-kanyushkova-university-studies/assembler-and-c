#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
  {
    int x;
    clrscr();
    printf("�᫮  ");
    for ( x=1 ; x<=16 ; x++ )
      printf("%4d", x);
    printf("\n������");
    for ( x=1 ; x<=16 ; x++ )
      printf("%4d", x*x);
    getch();
  }
