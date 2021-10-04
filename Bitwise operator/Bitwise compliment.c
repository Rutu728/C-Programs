#include<stdio.h>
#include<conio.h>
 
  int main()
  {
   int No = 0, Res = 0;
   printf("\n enter a numbres = ");
   scanf("%d",&No);

   Res = ~No ;
   printf("\n output of Bitwise compliment is => ~%d=%d",No,Res);
   
   getch();
   return 0;
  }
    