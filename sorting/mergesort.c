#include<stdio.h>
void merge(int *arr,int l,int m,int r)
{
	int res[r-l+1];
	int i=l,j=m+1,k=0;
while(i<=m && j<=r)
{
	if(arr[i]<=arr[j]){
		res[k++]=arr[i++];
	}
	else{
		res[k++]=arr[j++];
	}
}
while(i<=m){
	res[k++]=arr[i++];
}	
while(j<=r){
	res[k++]=arr[j++];
}
for(i=l;i<=r;i++)
{
	arr[i]=res[k++];
}
}

void merge_sort(int *arr,int n)
{
	int l,m,r,p,i;
	for(p=1;p<n;p*=2)
	{
		for(i=0;i<n;i+=2*p){
		l=i;
		r=l+2*p-1;
		m=l+p-1;
		merge(arr,l,r,m);
	}
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

