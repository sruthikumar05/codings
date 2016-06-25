#include<stdio.h>
#include<conio.h>
void main()
{
  char str1[25],str2[25];
  int i=0,j=0;
  clrscr();
  printf("\nEnter First String:\n");
  gets(str1);
  printf("\nEnter Second String:\n");
  gets(str2);
  while(str1[i]!='\0')
  i++;
  while(str2[j]!='\0')
  {
    str1[i]=str2[j];
    j++;
    i++;
  }
  str1[i]='\0';
  printf("\nConcatenated String is %s\n",str1);
  getch();
}
