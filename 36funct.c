#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

#define k 5
#define tip int

void Zap(tip *M, int N)
  {
    int x;
    for(x=0;x<N;x++)
      M[x] = random(10)+1;
  }

int Result(tip *M, int N)
  {
    int sum, x;
    sum = 0;
    for(x=0;x<N;x++)
      sum = sum + M[x];
    return sum;
  }

void PrintMas(tip *M, int N)
  {
    int x;
    for(x=0;x<N;x++)
      printf("%3d", M[x]);
    printf("\n");
  }

main()
  {
    tip A[k];
    int Res;
    clrscr();
    randomize();

    Zap(A, k);
    Res = Result(A, k);
    PrintMas(A, k);
    printf("%5d", Res);

    getch();
  }
