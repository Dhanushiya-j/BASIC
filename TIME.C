#include<stdio.h>
#include<conio.h>
void main()
{
int H,M,S,second;
clrscr();
printf("enter second:");
scanf("%d",&second);
H=(second/3600);
M=(second-(3600*H))/60;
S=(second-(3600*H)-(M*60));
printf("H:M:S - %d:%d:%d",H,M,S);
getch();
}