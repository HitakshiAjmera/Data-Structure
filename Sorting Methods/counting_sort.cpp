//counting sort complexity is o(n)
#include<iostream>
using namespace std;
int main()
{
	int array_size;
	cout<<"Enter size of array";
	cin>>array_size;
	int a[array_size];
	cout<<"Enter elements in array\n";
	for(int i=1;i<=array_size;i++)
	{
		cin>>a[i];
	}
	int range=a[1];
	for(int i=1;i<=array_size;i++)//loop to find range 
	{
		if(a[i]<a[i+1])
		{
			range=a[i+1];
		}
	}
	int  b[range+1]={0};//key array
	int index;
	for(int i=1;i<=array_size;i++)//loop for frequancy of element in array
	{
		index=a[i];
		b[index]=b[index]+1;
	}
	for(int i=1;i<range+1;i++)//loop for updating values of array b 
	{
		b[i]=b[i]+b[i-1];
	}
	int final_array[array_size],key;
	for(int i=1;i<=array_size;i++)//loop for creating final array
	{
		index=a[i];
		key=b[index];
		final_array[key]=a[i];
		--b[index];		
	}
	cout<<"\nSorted array\n";
	for(int i=1;i<=array_size;i++)
	{
		cout<<final_array[i]<<"\n";
	}
}
