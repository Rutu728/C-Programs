#include<stdio.h>
#include<conio.h>

int main()

{
   int R_No = 0;
   char Name[20]="\0";
   float per = 0.0;
   char city[20] ="\0";
   char Grade ="\0";

    printf("\n Enter student Details=\n");
    
    printf("\n Enter student Roll Numbers=");
    scanf("%d",&R_No);
    
    printf("\n Enter Student Name=");
    scanf("%s",&per);
    
    printf("\n Enter student percentage=");
    scanf("%f",&per);
    
    printf("\n Enter student city=");
    scanf("%s",&city);
    
    printf("\n Enter student Grade=");
    Grade=getche();
    
    printf("\n========********==========");
    getch();
    
    printf("\n student Details Given By You are=\n\n\t Roll Number=%d.\n\t Name=%s.\n\t percentage=%0.2f.\n\t city=%s.\n\t Grade=%c.R_No,Name,per.city,Grade");
    
    printf("\n========*******=========");
    getch();
    return 0;
}