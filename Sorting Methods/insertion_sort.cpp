//insertion sort
#include<iostream>
using namespace std;
void insertion_sort(int a[],int array_size);
int main()
{    
	int array_size;
	cout<<"Enter size of array ";
	cin>>array_size; 
	int a[array_size];
	cout<<"Enter elment of arary\n";
	for(int i=0;i<array_size;i++)
	{
		cin>>a[i];
	}
	insertion_sort(a,array_size);
	cout<<"sorted array\n";
	for(int i=0;i<array_size;i++)
	{
		cout<<a[i]<<"\n";
	}
}
void insertion_sort(int a[],int array_size)
{
	int key,s;
	for (int i=1;i<array_size;i++)
	{
		key=a[i];
		s=i-1;
		while(s>=0&&a[s]>key)//compare keyto elements before it
		{
			a[s+1]=a[s];
			s=s-1;
		}
		a[s+1]=key;
	}
}
