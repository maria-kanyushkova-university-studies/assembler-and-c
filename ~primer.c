#include <stdio.h>      //заготовка
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <process.h>
#include <math.h>
#include <string.h>

main()
{
  int X = 49;
  float Y;

  clrscr();

  Y = sqrt(X);
  printf("корень из %2d равен %7.2f",X,Y);

  getch();
}


