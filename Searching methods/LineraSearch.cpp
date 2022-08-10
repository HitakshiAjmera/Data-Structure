#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of element\n";
    cin>>size;
    int a[size],key;
    cout<<"Enter the list ";
     for (int i=0 ;i<size;i++ )
     {
         cin>>a[i];
     }
     cout<<"Enter element to search  ";cin>>key;
     for (int i=0 ;i<size;i++ )
     {
         if(a[i]==key)
         {
             cout<<"Element found at index "<<i;
             break;
         }
     }
}