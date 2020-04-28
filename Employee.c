#include<stdio.h>
#include<conio.h>
struct employee
{
char name[50];
int salary;
int empno;
};
void main()
{
struct employee e[20];
int i;
clrscr();
printf("enter employee information:\n");
for(i=0;i<20;++i)
{
e[i].empno=i+1;
printf("\n for empno %d \n",e[i].empno);
printf("enter name :");
Scanf("%s",s[i].name);
printf("enter salary:");
scanf("%d",&e[i].salary);
printf("\n");
}
printf("displaying employee information:\n\n");
for(i=0;i<20;++i)
{
printf("\n information of empno %d:\n",i+1);
printf("name:");
puts(e[i].name);
printf("salary:%d",e[i].salary);
}
getch();
}
