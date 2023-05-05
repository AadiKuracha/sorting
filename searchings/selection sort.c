#include<stdio.h>
int main()
{
	int n,i,j,t,ind;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	;
	for(i=0;i<n;i++)
	{
		int min=a[i];
		ind=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				ind =j;
			}
	    }
	    t=a[ind];
	    a[ind]=a[j];
	    a[j]=t;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
