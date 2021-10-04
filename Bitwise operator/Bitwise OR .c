#include<stdio.h>
#include<conio.h>
 
  int main()
  {
   int No1 = 0,No2 = 0, Res = 0;
   printf("\n enter 2 numbres = ");
   scanf("%d%d",&No1,&No2);

   Res = No1|No2;
   printf("\n output of Bitwise OR between => %d|%d=%d",No1,No2,Res);
   
   getch();
   return 0;
  }
    