#include<stdio.h>
void printarray(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);	
	}
}
int get_max(int *a,int n)
{
	int i,max;
	a[0]=max;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[0])
		{
			max=a[i];
		}
	}
}
void radix_sort(int *a,int n)
{
	int max=get_max(a,n);
	int e=1;
	while(max)
	{
		int i;
		int counts[10] ={0};
		int buckets[10][n]; //n is element
		for(i=0;i<n;i++)
		{
			int place=(a[i]/e)%10;
			buckets[place][counts[place]++] = a[i];
		}
		int k=0,j;
		for(i=0;i<n;i++)
		{
			for(j=0;j<counts[i];j++)
			{
				a[k++] = buckets[i][j];
			}
			e *=10;
			max /=10;
		}
		printarray(a,n);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	radix_sort(a,n);
	
}
