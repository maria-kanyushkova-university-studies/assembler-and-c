#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

#define k 7

main()
  {
    FILE *p;
    int x;
    int A[k] = {7,4,23,12,7,8,2};
    clrscr();

    p = fopen("39text.txt","w");
    for(x=0; x<k; x++)
      fprintf(p,"%3d", A[x]);
    fclose(p);
    for(x=0; x<k; x++)
      A[x] = 0;

    p = fopen("39text.txt", "r");
    for (x=0; x<k; x++)
      fscanf(p,"%d",&A[x]);
    fclose(p);

    for (x=0; x<k; x++)
      printf("%3d", A[x]);

    getch();
  }
