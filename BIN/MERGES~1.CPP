#include<stdio.h>
#include<conio.h>
void merge (int arr[],int l,int m,int r)
{
	int k;
	int n1=m-l+1;
	int n2=r-m;
	int L[50],R[50];
	for(int i=0;i<n1;i++)
	L[i]=arr[l+i];
	for(int j=0;j<n2;j++)
	R[j]=arr[m+j+1];
	i=0;
	j=0;
	k=1;
	while(i<n1&&j<n2)
	{
		if(L[i]<=R[j])
		{
		arr[k]=L[i];
		i++;
		}
	       else
	       {
		arr[k]=R[j];
		j++;
	       }
	k++;
     }
while(i<n1)
{
	arr[k]=L[i];
	i++;
	k++;
}
while(j<n2)
{
	arr[k]=R[j];
	j++;
	k++;
}
}
void printarray(int A[],int size)
{

 int i;
	for(i=0;i<size;i++)
	printf("%d",A[i]);
	printf("\n");
}
int min(int x,int y)
{
	return (x<y)?x:y;

}
void mergesort(int arr[],int n)
{
	int curr_size;
	int left_start,right_end;
	int mid;
	for(curr_size=1;curr_size<=n-1;curr_size=2*curr_size)
	{
		for(left_start=0;left_start<n-1;left_start=2*curr_size)
		{
				mid=min(left_start+curr_size-1,n-1);
				right_end=min(left_start+2*curr_size-1,n-1);
				merge(arr,left_start,mid,right_end);
		}
	}
  }
	void main()
	{
		int a[]={12,11,13,5,6,7};
		mergesort(a,6);
		printarray(a,6);

	}

