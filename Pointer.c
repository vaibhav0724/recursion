#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j,sum=0;
clrscr();
printf("\n enter the elements of matrix");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
clrscr();
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("\t%d",*(*a+i))+j);
}
printf("\n\n");
}
for(i=0;i<3;i++)
{
Sum=sum+a[i][i];
}
printf("\n sum of digonal element :%d",sum);
getch();
}
