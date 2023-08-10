#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],temp,i,j,size;

	printf("\nEnter the array size : ");
	scanf("%d",&size);

	printf("\nEnter the array to be sorted : ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}

	}

	printf("\n\nSorted Array in ascending order : ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}

	printf("\n\nSorted Array in descending order : ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}

getch();
}

