//Hitakshi Ajmera
#include<iostream>
using namespace std;
int binary_search(int arr[],int array_size,int x,int first,int last)
{
	int mid =(first+last)/2;
		if (first>last) return -1;//means element not found
		else
		{
	   		if(arr[mid] < x) binary_search(arr,array_size,x,mid + 1,last);
	   		else if(arr[mid] == x) return mid; 
        	else binary_search(arr,array_size,x,first,mid - 1);
    	}
}
int main()
{
	int array_size, i,x,y;  
	cout<<"Enter size of array: "; 
        cin>>array_size;
     int arr[array_size];
     cout<<"Enter elements in array\n";
	for (i=0; i<array_size; i++)
	{ 
        cin>>arr[i];
	}
	int first = 0;
	int last = array_size-1;
	cout<<"Enter element to search:"; 
    cin>>x;
	y=binary_search(arr,array_size,x,first,last);
	if(y==-1)
   		cout<<"element is not present";
   	else
   		cout<<"element found at index "<<y;
	return 0;
}

