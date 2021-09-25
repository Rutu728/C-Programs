#include<stdio.h>
#include<conio.h>
int main()
{

  char Str1[20] ={};
  char Str2[20] ={};
  printf("\n Enter String:");
  gets(Str1);
  Strcpyx(Str1 , Str2);
  printf("\n given String  =%s",Str1);
  printf("\n copied String =%s",Str2);
  
  getch();
  return 0;
}

  void Strcpyx(char *Src, char *Dest)
  {
   int i=0;
   while(Src[i]!='\0')
   {
     Dest[i] = Src[i];
      i++;
    }
      
   
    return;
 }