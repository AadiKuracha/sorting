/*#include<stdio.h>
int lomuto(int *a,int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	int j=l;
	for(j=0;j<r;j++)
	{
		if(a[j]<pivot)
		{
		i++;
	   int t=a[i];
		a[i]=a[j];
	    a[j]=t;
	    }
    }
     int t=a[r];
    a[i+1]=t;
    a[i+1]==a[r];
    return i+1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	int l=0;
	int r=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lomuto(a,l,r);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}*/


#include<stdio.h>
int lomuto(int *a,int l,int r)
{
	int pivot=a[r];
	int i=l-1;
	int j=l;
	for(j=0;j<r;j++)
	{
		if(a[j]<pivot)
		{
		i++;
	   int t=a[i];
		a[i]=a[j];
	    a[j]=t;
	    }
    }
     int t=a[r];
    a[i+1]=t;
    a[i+1]==a[r];
    return i+1;
}
void quick_sort(int *a,int l,int r)
{
	if(r<l)
	{
		int p=lomuto(a,l,r);
		quick_sort(a,l,p-1);
		quick_sort(a,p+1,r);
		
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	int l=0;
	int r=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	lomuto(a,l,r);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
