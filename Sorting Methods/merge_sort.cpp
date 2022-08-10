//Hitakshi Ajmera
#include<iostream>
using namespace std;
void merg(int a[],int left,int mid,int right)
{
	int i=left,j=mid+1,k=left;
	int temp[right];
	while(i<=mid&&j<=right)
	{
		if(a[i]<=a[j])
		{
			temp[k]=a[i];
			k++;
			i++;
		}
		else
		{
			temp[k]=a[j];
			k++;
			j++;
		}
	}
	while(i<=mid)
	{
		temp[k]=a[i];
			k++;
			i++;
	}
	while(j<=right)
	{
		temp[k]=a[j];
			k++;
			j++;
	}
	for(int s=left;s<=right;s++)
	{
		a[s]=temp[s];
	}
}
void merge_sort(int a[],int left,int right)
{
	int mid;
	if(left<right)
	{
		mid=(left+right)/2;
		merge_sort(a,left,mid);
		merge_sort(a,mid+1,right);
		merg(a,left,mid,right);
	}
}
int main()
{
	int size;
	cout<<"Enter the size array ";
	cin>>size;
	int a[size];
	cout<<"Enter the element of array";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	merge_sort(a,0,size-1);
	cout<<"Final sorted array";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"  ";
	}
}

//merge sort it is stable and complexity is o(nlog(n))
