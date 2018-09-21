#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define k 3

main()
  {
    typedef struct {char *F; int Z;} tip;
    tip A[k];
    int x;
    clrscr();

    A[0].F = "Иванов";      A[0].Z = 12;
    A[1].F = "Петровский";  A[1].Z = 456;
    A[2].F = "Вася";        A[2].Z = 7;

    for(x=0 ; x<k ; x++)
      printf("%-2d %-10s %4d \n", x+1, A[x].F, A[x].Z);

    getch();
  }
