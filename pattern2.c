#include<stdio.h>
void main()
{
     char i,j,a=65;
     for(i=65;i<=69;i++)
     {
       for(j=65;j<=i;j++)
        {
         if(i%2==0)
         {
          printf("%c",j);
          
         }
           
         else
         {
          printf("%c",j+32);
         }   
        
           
        }
        printf("\n");
       } 
}                 