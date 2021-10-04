#include<stdio.h>
#include<conio.h>
 
  int main()
  {
   int No = 0, Res = 0;
   printf("\n enter a numbres = ");
   scanf("%d",&No);

   Res = No << 2 ;
   printf("\n output of Bitwise left Shift  => \n\n\t\t %d << 2 = %d",No,Res);
   
   getch();
   return 0;
  }
    