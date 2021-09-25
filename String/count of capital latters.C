#include<stdio.h>
#include<conio.h>

int main()

{
  char cSrc[20]="";
  int i=0,Cap_cnt=0;
    printf("\n Enter a string=");
    gets(cSrc);
    
    while(cSrc[i]!='\0')
    {
      if(cSrc[i]>='A'&& cSrc[i]<='Z')
      {
       Cap_cnt++;
      }
        i++;
    }
    printf("\n Capital letters count in Given String is =%d",Cap_cnt);
    getch();
    return 0;
    
}