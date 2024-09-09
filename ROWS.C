#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,count=1;
clrscr();
for(i=1;i<=4;i++)
{
for(j=1;j<=4-i;j++)
{
printf("*");
}
for(k=1;k<=i;k++)
{
printf("%d",count);
count++;
}
print("\n");
}
getch();
}