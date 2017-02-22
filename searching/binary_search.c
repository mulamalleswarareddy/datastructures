#include<stdio.h>
#include<stdlib.h>

int binary_search(int *,int,int,int);//list,low index,hight index,key to be searched

int main()
{
	int n,key,*arr,i;
	scanf(" %d",&n);
	scanf(" %d",&key);
	for(i=0;i<n;i++)
		scanf(" %d",arr+i);
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	printf("\n");

	int index = binary_search(arr,0,n,key);
	
	if(index >= 0)
		printf("key is present at the index %d\n",index);
	
	else
		printf("key is not found in the given sorted list..\n");

	return 0;


}

int binary_search(int *arr,int low,int high,int key)
{
	if(low <= high)
	{
		int middle = low + (high-low)/2;
		
		if(arr[middle] == key)
			return middle;
	
		else if(arr[middle] > key)
			return binary_search(arr,low,middle-1,key);
		
		else
			return binary_search(arr,middle+1,high,key);


	}

	return -1;

}
