#include<stdio.h>
#include<conio.h>
void main()
{
int t;
float p,r,SI,total_amount;
clrscr();
printf("enter the principal amount:");
scanf("%f",&p);
printf("enter the rate of interest:");
scanf("%f",&r);
printf("enter the time period(in years):");
scanf("%d",&t);
SI=(p*r*t)/100;
printf("The value of simple interest:%.2f\n",SI);
total_amount=p+SI;
printf("the total amount:%.2f\n",total_amount);
getch();
}