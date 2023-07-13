//switch statement for arithmetic operations or implementing a simple calculator

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

float main()
{
   float r,a,b;
   int c;
   printf("enter the 1st number:");
   scanf("%f",&a);
   printf("enter the 2nd number:");
   scanf("%f",&b);
   printf("select the mode of operation:\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.remainder\n");
   printf("enter the choice:\n");
   scanf("%d",&c);
   
   switch(c)
   {
       case 1:r=a+b;
       break;
       
       case 2:r=a-b;
       break;
       
       case 3: r=a*b;
       break;
       
       case 4: if(b!=0)
       {
           r=a/b;
       }
       else
       {
           printf("error: zero division error\n");
           exit(0);
       }
       break;
       
       case 5: if(b!=0)
       {
           r=(int)a%(int)b;
       }
       else
       {
           printf("error: zero division error\n");
           exit(0);
       }
       break;
       
       default:printf("please enter the valid input\n");
       exit(0);
       
    }
    printf("so the result is %f\n",r);
}