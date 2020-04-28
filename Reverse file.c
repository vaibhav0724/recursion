#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *fp;
char ch;
int i,n;
clrscr();
fp=fopen("data.txt","r");
if(fp==NULL)
{
printf("error in file open");
exit(0);
}
fseek(go,0,SEEK_END);
n=ftell(fp);
i=0;
while(i<n)
{
i++;
fseek(fp,-i,SEEK_END);
ch=fgetch(fp);
printf("%c",ch);
}
getch();
}
