#include <stdio.h>
#include <conio.h>

main()
{
  int x, y;

  clrscr();
  printf("the value of x = ");
  scanf("%d" ,&x);      //7

  printf("the value of y = ");
  scanf("%d" ,&y);         //10

  x= x+y; //7+10=17
  y= x-y; //17-10=7
  x= x-y; // 17-7=10


  printf("the value of x is = %d\n", x);
  printf("the value of y is = %d", y);

  getch();

}

