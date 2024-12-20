#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
 int x, y, z, ans;

 clrscr();

 x = 5;
 y = 10;

 z = x;
 x = y;
 y = z;

 printf("the value of x is = %d\n" , x);
 printf("the value of y is = %d" , y);

 getch();

}
