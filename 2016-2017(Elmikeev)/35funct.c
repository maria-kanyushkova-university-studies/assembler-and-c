#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

int Kwa (int A) {return A*A;}
int Kub (int A) {return A*A*A;}

main()
  {
    int A, Y;
    int (*P)();
    A = 7;

    clrscr();

    printf("%5d \n", A);
    P = Kwa;
    Y = P(A);
    printf("%5d \n", Y);
    P = Kub;
    Y = P(A);
    printf("%5d \n", Y);

    getch();
  }
