#include<stdio.h>
#include<conio.h>
void main()
{
int maths,science,tamil,english,socialscience,totalmark;
float percentage;
char name;
clrscr();
printf("enter your name:\n");
scanf("%c",&name);
printf("maths mark :\n");
scanf("%d",&maths);
printf("science mark:\n");
scanf("%d",&science);
printf("tamil mark:\n");
scanf("%d",&tamil);
printf("english mark:\n");
scanf("%d",&english);
printf("socialscience mark:\n");
scanf("%d",&socialscience);
totalmark=maths+science+tamil+english+socialscience;
percentage=totalmark/5;
printf("the totalmark is:%d\n",totalmark);
printf("the percentage is:%f",percentage);
getch();

}