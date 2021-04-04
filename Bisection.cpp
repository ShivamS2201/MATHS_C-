#include<stdio.h>

#include <math.h>

#include<conio.h>

#define ESP 0.001 //ESP is used to check the error of predicted vs actual.

#define F(x)  (x)*(x) + 4*(x) + 4 //--Function according to given question--

int main()

{

int i = 1,k=0;

float x0,x1,x2;

double f1,f2,f0;

printf("\nEnter your first guess or approximation: \n"); //in x0

scanf("%f",&x0);

f0=F(x0);

printf("Your 1st value is %f \n",f0);

printf("\n Enter your second guess or approximation: \n");//in x1

scanf("%f",&x1);
//interval now(x0,x1)
f1=F(x1);

printf("Your 2nd value is %f \n",f1);
//to move the approximation forward we give input/approximation.
while(f0*f1>0)

{

printf("Enter your next guess or approximation \n");

scanf("%f",&x1);

f1=F(x1);

printf("Your next value is %f \n",f1);
}

printf("The right guess are %f,%f \n", x0,x1);

printf("\n_______________________________________________________________________\n");

printf("\nIteration\tx0\t     x1\t      x2\t  f0\t     f1\t    f2");

printf("\n________________________________________________________________________\n");

while(k==0)

{

x2=(x0+x1)/2;

f0=F(x0);

f1=F(x1);

f2=F(x2);

printf("\n%d\t %f\t %f %f %lf %lf %lf", i, x0,x1,x2,f0,f1,f2);

if(fabs(f2)<ESP)

k=1;

else

{

if(f0*f2<0)

{

x1=x2;

}

else

{

x0=x2;

}

i++;

}
 }

printf("\n________________________________________________________________________\n");

printf("\n\n fx---> root = %f",x2);

getch(); 
return 0;}
