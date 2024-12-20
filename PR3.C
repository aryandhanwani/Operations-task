#include <stdio.h>
#include <conio.h>

main()
{
 int x, y, z;

 clrscr();

 printf("the value of x is = ");
 scanf("%d", &x);

 printf("the value of y is = ");
 scanf("%d", &y);

 z = x*x*x + y*y*y + 3*x*y*(x + y);

 printf(" (x+y)^3 is = %d", z);

 getch();

}

