#include<stdio.h>
#include<stdlib.h>

void merge_sort(int *,int,int);
void merge(int *,int,int);


int main()
{
	int n,*a,i;
	scanf(" %d",&n);
	a = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
		scanf(" %d",a+i);

	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\n");

	merge_sort(a,0,n-1);
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);

	printf("\n");



}

void merge_sort(int *arr,int low,int high)
{
	if(low<high)
	{
		int middle = low + (high-low)/2;
		merge_sort(arr,low,middle);
		merge_sort(arr,middle+1,high);
		merge(arr,low,high);
	}



}

void merge(int *arr,int low,int high)
{
	int mid = low + (high - low)/2;
	int l1,l2,*a1,*a2,i,j,k;
	l1 = mid - low  + 1;
	l2 = high - mid;
	a1 = (int *)malloc(sizeof(int)*l1);
	a2 = (int *)malloc(sizeof(int)*l2);
	
	for(i = 0; i< l1;i++)
		a1[i] = arr[low+i];

	for(j = 0; j< l2;j++,i++)
		a2[j] = arr[low+i];

	i=j=0;
	k=low;
	
	while(i<l1 && j<l2)
	{
		if(a1[i] <= a2[j])
		{
			arr[k++] = a1[i++];
			
		}

		else
		{
			arr[k++] = a2[j++];

		}
	}

	while(i<l1)
	{
		arr[k++] = a1[i++];
	}

	while(j<l2)
	{
		arr[k++] = a2[j++];
	}

	free(a1);
	free(a2);
	
}
