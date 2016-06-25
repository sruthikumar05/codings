#include <stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
 int count=0,num,i,n,a;
 char s[100][100];
 clrscr();
 printf("\nenter the size of the array\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
{
	scanf("%s",&s[i]);
}
printf("To find number of words of length:");
scanf("%d",&num);
for(i=0;i<n;i++)
{
   a=strlen(s[i]);
	if(a==num)
	count++;
}
printf("%d",count);
getch();

	return 0;
}
