//redix sort its all type of complexity is o(n) and it is stable
#include <iostream>
using namespace std;
int maximum(int a[],int size)
{
	int m=a[0];
	for(int i=1;i<=size;i++)
	{
		if(m<a[i])
		{
			m=a[i];
		}
	}
	return m;
}

void counting_sort(int a[],int size,int div)
{
	int freq_arr[10]={0};
	int output[size];
	for(int i=0;i<size;i++)//loop to count frequency of digit
	{
		int digit=(a[i]/div)%10;
		freq_arr[digit]++;
	}
	for(int i=1;i<10;i++)//loop for add with previous value
	{
		freq_arr[i]=freq_arr[i]+freq_arr[i-1];
	}
	for(int i=size-1;i>=0;i--)//reverse traversing so that stability will maintain
	{
		int digit=(a[i]/div)%10;
		output[freq_arr[digit]-1]=a[i];
		freq_arr[digit]--;
	}
	for(int i=0;i<size;i++)//assinging the output array to original array
	{
		a[i]=output[i];
	}
	cout<<"sorted array for "<<div<<"place  ";
	for(int i=0;i<size;i++)//just for understending the process
	{
		cout<<a[i]<<"  ";
	}
	cout<<endl;
}
void redix_sort(int a[],int size)
{
	int div=1;
	int max=maximum(a,size);
	for(int div=1;max/div>0;div*=10)//this loop is for at which place we have to work 
	{
		counting_sort(a,size,div);
	}	
}
int main()
{
	int size;
	cout<<"Enter the size array ";
	cin>>size;
	int *a;
	a = new int [size];
	cout<<"Enter the element of array";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	redix_sort(a,size);
	cout<<"Final sorted array";
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"  ";
	}
}
