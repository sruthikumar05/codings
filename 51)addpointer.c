#include<stdio.h>
#include<conio.h>
int main()
{
int num1,num2,*p,*q,sum;
clrscr();
printf("enter two integers to add\n");
scanf("%d%d",&num1,&num2);
p=&num1;
q=&num2;
sum=*p+*q;
printf("sum of numbers:%d",sum);
return 0;
}
