#include <stdio.h>
#include<conio.h>

int main()
{
    int arr[100];
    int i, max, min, size,sum;
    clrscr();
    printf("\nEnter size of the array:\n ");
    scanf("%d", &size);
    printf("\nEnter elements in the array:\n ");
    for(i=0; i<size; i++)
    {
	scanf("%d", &arr[i]);
    }


    max = arr[0];
    min = arr[0];
     for(i=1; i<size; i++)
    {

	if(arr[i]>max)
	{
	    max = arr[i];
	}


	if(arr[i]<min)
	{
	    min = arr[i];
	}
    }

    sum=max+min;
    printf("\nMaximum element = %d\n", max);
    printf("\nMinimum element = %d", min);
    printf("\nThe sum of the maximum anad the minimum element in the given array is \n%d",sum);

   getch();
    return 0;
}
