//Hitakshi Ajmera
#include<iostream>
using namespace std;
int pivot_sort(int a[],int first,int last)
{
	int pivot=a[last];
	int pindex=first;
	for(int i=first;i<last;i++)
	{
		if(a[i]<pivot)//swapping shifting lesser elment then pivot to left to pivot 
		{
			int z;
			swap(a[i],a[pindex]);
			/**z=a[i];
			a[i]=a[pindex];
			a[pindex]=z;**/
			pindex++;
		}
	}
	int S;//swaping for fix pivot at right position
	/**S=a[last];
	a[last]=a[pindex];
	a[pindex]=S;**/
	swap(a[last],a[pindex]);
	return pindex;
}
void quick_sort(int a[],int first,int last)
{
	if(first<last) //false when oly one element remain
	{
		int p=pivot_sort(a,first,last);    //it wil give the index of pivot after sorting
		quick_sort(a,first,(p-1)); //quik sort for left partion
		quick_sort(a,(p+1),last); //quik sort for right partion
	}
}
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
	quick_sort(a,0,(array_size-1));
	cout<<"sorted array\n";
	for(int i=0;i<array_size;i++)
	{
		cout<<a[i]<<"\n";
	}
}

