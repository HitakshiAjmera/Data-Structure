#include<iostream>
using namespace std;
class circular_queue
{
	int rear,front,size,*queue;
	public:
		circular_queue(int s)
		{
			rear=front=-1;
			size=s;
			queue= new int[size];
			for(int i=0;i<size;i++)
			{
				queue[i]=0;
			}
		}
		bool isempty()
		{
			if(rear==-1&&front==-1)
				return true;
			else
				return false;
		}
		bool isfull()
		{
			if(front==(rear+1)%size)
				return true;
			else
				return false;
		}
		void enqueue(int item)
		{
			if(isfull())
				cout<<"\nOVER FLOW";
			else 
				{
					if(isempty())
						rear=front=0;
					else
						rear=(rear+1)%size;
					queue[rear]=item;
				}
		}
		void peek()
		{
			if(isempty())
				cout<<"\nQUEUE IS EMPTY";
			else
				cout<<"Peek value is "<<queue[front];
		}
		void dequeue()
		{
			
			if(isempty())
				cout<<"\nQUEUE IS EMPTY";
			else
				{
					int temp=queue[front];
					if(front==rear)
						rear=front=-1;
					else
						front=(front+1)%size;
				}
		}
		void display()
		{
			if(isempty())
				cout<<"No element is present in queue";
			else
			{
				cout<<"All the value in queue\n";
				for(int i=0;i<size;i++)
				{	
					cout<<queue[i]<<endl;
				}
			}
		}
};
int main()
{
	int size,op,item;
	cout <<"Enter the size of circular queue";
	cin>>size;
	circular_queue obj(size);
	do
	{
		cout<<"\nWhat operation do you want to perform?"<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. Is queue empty"<<endl;
		cout<<"4. Is queue full"<<endl;
		cout<<"5. To display Queue"<<endl;
		cout<<"6. To get peek element in queue"<<endl;
		cout<<"SELECT OPTION ";
		cin>>op;
		switch(op)
		{
		case 0:
			cout<<"EXIT";
			break;
		case 1:
			cout<<"Enter item to insert in queue ";
			cin>>item;
			obj.enqueue(item);
			break;
		case 2:
			obj.dequeue();
			break;
		case 3:
			if(obj.isempty())
				cout<<"Empty"<<endl;
			else
				cout<<"Not empty";
			break;
	    case 4:
	    	if(obj.isfull())
	    		cout<<"Queue is full";
	    	else
	    		cout<<"Not full";
	    	break;
	    case 5:
	    	obj.display();
	    	break;
	    case 6:
	    	obj.peek();
	    	break;
	    default:
	    	cout<<"WRONG CHOICE"<<endl;
		}
	}while(op!=0);
}
