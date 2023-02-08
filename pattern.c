#include<stdio.h>
void main()
{
     char i,j,a=65;
     for(i=1;i<=5;i++)
     {
         for(j=i;j<=3;j++)
          {
            printf("%c",a++);
          }
           
            printf("\n");
     }
}