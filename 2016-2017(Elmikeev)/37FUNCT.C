#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define tip1 int

int Fact(int M)
  {
    if (M == 0 || M ==1) return 1;
    return M*Fact(M-1);
  }

main()
  {
    int M;
    unsigned long Res;
    clrscr();
    M = 5;
    Res = Fact(M);
    printf("%2d %10u", M, Res);

    getch();
  }
