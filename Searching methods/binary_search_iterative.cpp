//Binary Search (iterative) based on divide an conqure
#include<iostream>
using namespace std;
int binary_search(int arr[],int array_size,int x); 
int main()
{
	int array_size, i, x,y;  
	cout<<"Enter size of array: "; 
    cin>>array_size;
     int arr[array_size];
     cout<<"Enter elements in array\n";
	for (i=0; i<array_size; i++)
	{ 
        cin>>arr[i];
	}
	cout<<"Enter element to search:"; 
        cin>>x;
	y=binary_search(arr,array_size,x);
	if(y==-1)
   		cout<<"Element is not present in list";
   	else
   		cout<<"Element found at index "<<y;
	return 0;
}
int binary_search(int arr[],int array_size,int x)
{
	int first,last,middle;
		first = 0;
		last = array_size-1;
		middle = (first+last)/2;
		while (first <= last)
		{
	   		if(arr[middle] < x)
	   		{
			first = middle + 1;
	   		}
	   		else if(arr[middle] == x)
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
}

