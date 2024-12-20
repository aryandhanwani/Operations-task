#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
 int x;
 int y;
 int z;

 clrscr();

 printf("the value of x is = ");
 scanf("%d", &x);

 printf("the value of y is = ");
 scanf("%d", &y);

 z = x*x + 2*x*y + y*y;

 printf("%d", z);

 getch();

}