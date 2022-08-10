//Bubble sort
#include<iostream>
using namespace std;
void bubble_sort(int a[],int array_size);
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
	bubble_sort(a,array_size);
	cout<<"sorted array\n";
	for(int i=0;i<array_size;i++)
	{
		cout<<a[i]<<"\n";
	}
}
	
void bubble_sort(int a[],int array_size)
{
	bool condition;
	do
	{
		condition = false;
		for(int i=0;i<array_size-1;i++)
		{
			if(a[i]>a[i+1])
			{
				int x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
				condition = true;
			}
		}
    	--array_size;
    }while(condition);
}


