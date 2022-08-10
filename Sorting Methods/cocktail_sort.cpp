//cocktail sort(Shaker sort)
#include<iostream>
using namespace std;
void cocktail_sort(int a[],int array_size)
{
	bool condition;
	int li=0;
	do
	{
		condition = false;
		for(int i=li;i<array_size-1;i++)//sorting from left to right
		{
			if(a[i]>a[i+1])
			{
				int x=a[i];
				a[i]=a[i+1];
				a[i+1]=x;
				condition = true;
			}
		}
		for(int i=li;i<array_size;i++)//to understand process
		{
			cout<<a[i];
		}
		cout<<"\n";
    	--array_size;
    	for(int j=array_size;j>li;j--)//sorting from right to left
		{
			if(a[j]<a[j-1])
			{
				int x=a[j];
				a[j]=a[j-1];
				a[j-1]=x;
				condition = true;
			}
		}
		for(int i=li;i<array_size;i++)//to understand process
		{
			cout<<"  "<<a[i];
		}
		cout<<"\n";
		++li;		
    }while(condition);	
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
	cocktail_sort(a,array_size);
	cout<<"sorted array\n";
	for(int i=0;i<array_size;i++)
	{
		cout<<a[i]<<"\n";
	}
}

