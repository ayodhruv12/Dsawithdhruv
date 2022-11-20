#include<stdio.h>
int binary_search(int a[] , int x , int low , int high)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if (a[mid]==x)
			return mid;
		if (a[mid]<x)
			low= mid+1;
		else
			high= mid-1;
	}
	return-1;
}
int main()
{
	int a[100],i,x,n;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the element of array");
	for (i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
	scanf("&d",&x);
	int result = binary_search(a,x,0,n-1);
	if (result==1)
		printf("element not found");
	else
	printf("element found at %d",result);
}