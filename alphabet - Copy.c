#include<stdio.h>
void main()
{
     char i,j,a=97;
     for(i=97;i<102;i++)
     {
       for(j=97;j<=i;j++)
        {

         if(i%2==0)
         {
          printf("%c",j);
          
         }
           
         else
         {
          printf("%c",j++);
         }   
        
           
        }
        printf("\n");
       } 
}                 