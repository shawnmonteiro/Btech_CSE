//quadratic equation
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float disc,a,b,c,r1,r2,real,img;
    printf("enter 3 non zero numbers:\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a*b*c==0)
    {
        printf("the roots cannot be calculated\n");
        exit(0);
    }
    disc=b*b-4*a*c;
    if(disc==0)
    {
        printf("roots are equal\n");
        r1=(-b)/(2*a);
        r2=r1;
        printf("the roots are r1=%f and r2=%f\n",r1,r2);
    }
    
    if(disc>0)
    {
        printf("the roots are real and distinct\n");
        r1=(-b+sqrt(disc))/(2*a);
        r2=(-b-sqrt(disc))/(2*a);
        printf("the roots are r1=%f and r2=%f\n",r1,r2);
    }
    
    if(disc<0)
    {
        printf("the roots are real and complex\n");
        real=(-b)/(2*a);
        img=sqrt(fabs((disc)/(2*a)));
        printf("the roots are r1 = %f+i%f and r2 = %f-i%f\n",real,img,real,img);
    }
}