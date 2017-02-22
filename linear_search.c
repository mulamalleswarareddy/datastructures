/*	input pattern
	size of list
	key to be searched
	members of list
*/

#include<stdio.h>
#include<stdlib.h>


int linear_search(int *,int,int);//array ,size,key to be searched

int main()
{
	int n,key,*arr,i;
	scanf(" %d",&n);
	scanf(" %d",&key);

	arr = (int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf(" %d",arr+i);

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	printf("\n");
	
	int index = linear_search(arr,n,key);
	
	if(index >= 0)
		printf("key is at index %d\n",index);

	else
		printf("key is not present in the given list\n");
	
	return 0;
}

int linear_search(int *arr,int size,int key)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i] == key)
			return i;
	}

	return -1;


}
