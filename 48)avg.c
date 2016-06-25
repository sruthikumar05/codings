#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[100];
    int i,size,sum=0,avg,n;
    clrscr();
    printf("\nEnter size of the array:\n ");
    scanf("%d", &size);
    printf("\nEnter elements in the array:\n ");
    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }



     for(i=0; i<size; i++)
    {
     sum =sum+arr[i];

    }
    n=size;
    avg=(sum/n);
    printf("\nThe sum of the elements: %d\n",sum);

    printf("\n Average of the elements of a given array:%d\n",avg);
    getch();
    return 0;
}
