#include<stdio.h>
int a[100];
int i,x,low,high;
int binary_search(int a[],int x,int low,int high)
{
    int mid = (low+high)/2;
    while(low<=high)
    {
        if(a[mid]==x )
        return mid;
        else if ( a[mid ] <x )
        return binary_search(a,x,mid+1, high ); 
        else
        return binary_search(a,x,low,mid-1);
    }
    return 0;
}
void main()
{
    int n,high=n-1,i,x,low;
    if(low>0)
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element of array");
	for (i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
	scanf("&d",&x);
    int loc=binary_search(a,x,0,n-1);
    if(loc==0)
    printf("element not found");
    else
    printf("element found at %d position",loc);
}