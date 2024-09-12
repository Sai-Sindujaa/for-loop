#include<stdio.h>
#include<conio.h>
void main()
{
int i , num;
clrscr();
printf("enter the number:");
scanf("%d",&num);
printf("\nnumber \tsquare \tcube");
for(i=1;i<=num;i++)
{
printf("\n %d    \t %d  \t%d\n ",i ,i*i,i*i*i);
}
getch();
}
