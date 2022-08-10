#include<iostream>
using namespace std;
class stack_functions
{
	int top;
	public:
	stack_functions()
	{
		top=-1;
	}
	void push(int stack[],int size)
	{
		int item;
		if(top==size-1)
		{
		cout<<"\nOVERFLOW";
		}
		else
		{
		cout<<"\nEnter item to push";
		cin>>item;
		top++;
		stack[top]=item;
		}
    }
	void pop(int stack[],int size)
	{
		int item;
		if(top==-1)
			{
			cout<<"\nUNDERFLOW\n";
			}
		else
		{
		item=stack[top];
		top--;
		}
		cout<<"\nlast element is"<<item;
	}
	void traverse(int stack[],int size)
	{
	
		for(int i=0;i<=top;i++)
	{
		cout<<stack[i]<<"\n";
	}
	}
};
int main()
{
	stack_functions s;
	int size;
	cout<<"Enter size of stack";
	cin>>size;
	int stack[size];
	int choice;
	do
	{
		cout<<"\nEnter 1 for push an item in stack\nEnter 2 for pop an item from the stack\nEnter 3 for traverse\nEnter 0 to exit";
		cout<<"\nENTER YOUR CHOICE\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				s.push(stack,size);
				break;
			case 2:
				s.pop(stack,size);
				break;
			case 3:
				s.traverse(stack,size);
				break;
			case 0:
			    break;	
			default:
				cout<<"wrong choice";
				break;
		}
	}
	while(choice!=0);
}
