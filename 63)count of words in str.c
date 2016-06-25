#include<stdio.h>
#include<conio.h>
int main()
{
int count_words=0,i;
char str[50];
clrscr();
printf("\nEnter the string\n");
gets(str);
for(i=0;str[i]!=null;i++)
{
if(str[i]==' ')
count_words++;
}
printf("The number of words in the given string:\t\t%d",count_words+1);
getch();
return 0;
}
