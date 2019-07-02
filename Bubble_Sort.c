#include<stdio.h>
void main()
{
	int n, i, j, k, temp;
	
	printf("\n How many elements want to insert : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter element %d :",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nElements in sorted order :\n");
	for(i=0;i<n;i++)
	{
		printf("\t%d\n",arr[i]);
	}
}
