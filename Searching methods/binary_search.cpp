#include <iostream>
using namespace std;
//int binary_search(int arr[],int array_size,int x); 
int interpolation_search(int arr[],int array_size); 
//int fibonacii_search(int a[],int array_size,int x);
int main()
{
	int array_size, i, arr[100], x;  
	cout<<"Enter size of array: "; 
        cin>>array_size;

     cout<<"Enter elements in array\n";
	for (i=0; i<array_size; i++)
	{ 
        cin>>arr[i];
	}
	cout<<"Enter element to search:"; 
        cin>>x;
	//y=binary_search(arr,array_size,x);
   int y = interpolation_search(arr,array_size);
   //int y =  fibonacii_search(arr,array_size,x);
   if(y==-1)
   cout<<"element is not present";
   else
   cout<<"element found at"<<y;
	return 0;
}
//binary search function
/**int binary_search(int arr[],int array_size,int x)
{
	int first,last,middle;
		first = 0;
		last = array_size-1;
		middle = (first+last)/2;
		while (first <= last)
		{
	   		if(a[middle] < x)
	   		{
			first = middle + 1;
	   		}
	   		else if(a[middle] == x)
	    	{
		    	return middle; 
        	} 
        	else 
		   	{ 
                last = middle - 1; 
           	} 
           	middle = (first + last)/2; 
    	}
    	return -1;
}**/
//interpolation search
int interpolation_search(int arr[],int array_size,int x)
{
   	int pos,li=0,hi=array_size-1;
    while(li <= hi && x >= arr[li] && x <= arr[hi])
    {
	
   	pos=li+(x-li)/(arr[hi]-arr[li])*(hi-li);
   	if(arr[pos]==x)
   			return pos;
   	else if(arr[pos]>x)
   		li=pos+1;
   	else 
   	    hi=pos-1;
   } 
}
/**fibonaci search
int fibonacii_search(int a[],int array_size,int x)
{
	int offset=-1,index,T,f,f2=0,f1=1,tem=0;
	do
	{
		f=f1+f2;   //fibonaci series element
		if(f>array_size)
		{
			do
			{
				index=offset+f2;
				if(a[index]==x)
				{
					return index;
				}
				else if(a[index]<x)
				{
					T=f;
					f=f1;
					f1=T-f;
					f2=f-f1;
					offset=index;
				}
				else
				{
					T=f-f2;
					f=f2;
					f1=T-f;
					f2=f-f1;
				}
			}while(f2>=0 || index<array_size);
		}
		else
		{
			tem=f;
			f1=f1+f2;
			f2=tem-f2;
		}
	}while(tem<array_size);
	return -1;
}
**/
