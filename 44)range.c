#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("Enter any number between 1 to 9 : ");
scanf("%d",&num);
if(num < 1 || num > 9)
{
printf("Error! You entered a number is not in range ");
}
else
{
printf("The entered number is %d",num);
}
getch();
}
