#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n],l,h,se,mid;
	for(i=0;i<n;i++)
	{
	scanf("%d%d%d",&a[i],&l,&h);
    }
	l=0;h=n-1;
	mid=(l+h)/2;
	if(se==a[mid])
	{
		printf("Element is found");
	}
	else if(se>a[mid])
	{
		l=mid+1;
	}
	else if(se<a[mid])
	{
		h=mid-1;
	}
	else
	{
	  printf("Element not found");
	}
	
	
}
