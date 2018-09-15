#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void swap(int *A, int *B)
  {
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
  }

main()
  {
    int X, Y;
    X = 12;
    Y = 34;

    clrscr();
    printf("%4d %4d \n", X, Y);
    swap(&X, &Y);
    printf("%4d %4d \n", X, Y);

    getch();
  }
