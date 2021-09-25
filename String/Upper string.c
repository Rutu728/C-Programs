#include<stdio.h>
#include<conio.h>

int main()
{
  int Len = 0;
  char Str[20] ={};
  printf("\n Enter String:");
  gets(Str);
  Strcpyx(Str);
  printf("\n string after capilization  =%s",Str);
  getch();
  return 0;
}

  void Strcpyx(char *Src)
   
   {
     int i= 0;
     while(Src[i]!='\0')
     {
       if(Src[i]>='a'&& Src[i]<='z')
       {
         Src[i]-=32;
       }
        i++;
      }
      return;
   
   }