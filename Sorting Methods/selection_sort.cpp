//selection sort it is not stable its complexity is o(n^2)
#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size array ";
	cin>>size;
	int *a,*in;
	a = new int [size];
	in = new int [size];
	cout<<"Enter the element of array";
	for(int i=0;i<size;i++)
	{
		in[i]=i;
		cout<<i<<"  ";
		cin>>a[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				int x,t;
				x=a[i];
				a[i]=a[j];
				a[j]=x;
				t=in[i];
				in[i]=in[j];
				in[j]=t;
			}
		}
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<in[i]<<"  ";
		cout<<a[i]<<endl;
	}
}
