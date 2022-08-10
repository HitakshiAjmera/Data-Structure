//ternary search
#include<iostream>
using namespace std;
int ternary_search(int a[],int first,int last,int se)
{
	
	if(last>=first)
	{
		int mid1,mid2;
		mid1=first+(last-first)/3;
		mid2=last-(last-first)/3;
		if(a[mid1]==se)
		return mid1;
		else if(a[mid2]==se)
		return mid2;
		else if(se<a[mid1])
		{
			return ternary_search(a,first,mid1-1,se);
		}
		else if(se>a[mid2])
		{
			return ternary_search(a,mid2+1,last,se);
		}
		else
		{
			return ternary_search(a,mid1+1,mid2-1,se);
		}
	}
	return -1;
}
int main()
{
	int index,array_size,se;
	cout<<"Enter size of array ";
	cin>>array_size; 
	int a[array_size];
	cout<<"Enter elment of arary\n";
	for(int i=0;i<array_size;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter element to search";
	cin>>se;
	index=ternary_search(a,0,(array_size-1),se);
	if(index<0)
	cout<<"Element not found";
	else
	cout<<"Element found at index "<<index;
}
