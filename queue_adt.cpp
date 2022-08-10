//queue adt
/**#include<iostream>
using namespace std;
class queue
{
	int rear;
	int front;
	int Q[5];
	public:
		queue()
		{
			rear=-1;
			front=-1;
			for(int i=0;i<4;i++)
			{
				Q[i]=0;
			}
		}
	bool isEmpty()
	{
		if(front==-1&&rear==-1)
			return true;
		else
			return false;
	}
	bool isfull()
	{
		if(rear==4)
			return true;
		else
			return false;
	}
	void enqueue(int item)
	{
		if(isfull())
			cout<<" QUEUE IS OVERFLOW";
		else if(isEmpty())
		{
			rear=0;
			front=0;
			Q[rear]=item;
		}
		else
		{
			rear++;
			Q[rear]=item;
		}
	}
	int peek()
	{
		int temp;
		if(isEmpty())
		{
			cout<<"\nEMPTY\n";
			return 0;
		}
		else
		{
			temp=Q[front];
			return Q[front];
		}
			
	}
	void dequeue()
	{
		if(isEmpty())
			cout<<"\nUNDERFLOW\n";
		else if(rear==front)
		{
			cout<<"peek value is "<<peek();
			Q[front]=0;
			rear=-1;
			front=-1;
		}
		else
		{
			cout<<"Peek value is"<<peek();
			Q[front]=0;
			front++;
		}
	}
	void display()
	{
		if(isEmpty())
			cout<<"No element is present in queue";
		else
		{
			cout<<"All the value in queue\n";
			for(int i=0;i<5;i++)
			{
				cout<<Q[i]<<endl;
			}
		}
	}
};
int main()
{
	int op,item;
	queue obj;
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
			if(obj.isEmpty())
				cout<<"Empty"<<endl;
			else
				cout<<"Not empty";
			break;
	    case 4:
	    	if(obj.isfull())
	    		cout<<"Queue is ful l";
	    	else
	    		cout<<"Not full";
	    	break;
	    case 5:
	    	obj.display();
	    	break;
	    case 6:
	    	cout<<"Value at peek of queue is  "<<obj.peek();
	    	break;
	    default:
	    	cout<<"WRONG CHOICE"<<endl;
		}
	}while(op!=0);
}**/
#include<iostream>
using namespace std;
class queue
{
	int rear,front,size,*Q;
	public:
		queue(int s)
		{
			size=s;
			rear=-1;
			front=-1;
			Q = new int [size];
		}
	bool isEmpty()
	{
		if(front==-1&&rear==-1)
			return true;
		else
			return false;
	}
	bool isfull()
	{
		if(rear==size)
			return true;
		else
			return false;
	}
	void enqueue(int item)
	{
		if(isfull())
			cout<<"OVERFLOW";
		else if(isEmpty())
		{
			rear=0;
			front=0;
			Q[rear]=item;
		}
		else
		{
			rear++;
			Q[rear]=item;
		}
	}
	int peek()
	{
		if(isEmpty())
		{
			cout<<"\nEMPTY\n";
			return 0;
		}
		else
			return Q[front];
	}
	void dequeue()
	{
		if(isEmpty())
			cout<<"\nUNDERFLOW\n";
		else
		{
			cout<<"dequeue value is"<<peek();
			front++;
		}
	}
	void display()
	{
		if(isEmpty())
			cout<<"No element is present in queue";
		else
		{
		cout<<"All the value in queue\n";
		for(int i=0;i<size;i++)
		{
			cout<<Q[i]<<endl;
		}
		}
	}
};
int main()
{
	int size,op,item;
	cout <<"Enter the size of queue";
	cin>>size;
	queue obj(size);
	do
	{
		cout<<"What operation do you want to perform?"<<endl;
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
			if(obj.isEmpty())
				cout<<"Empty"<<endl;
			else
				cout<<"Not empty";
			break;
	    case 4:
	    	if(obj.isfull())
	    		cout<<"Queue is ful l";
	    	else
	    		cout<<"Not full";
	    	break;
	    case 5:
	    	obj.display();
	    	break;
	    case 6:
	    	cout<<"Value at peek of queue is  "<<obj.peek();
	    	break;
	    default:
	    	cout<<"WRONG CHOICE"<<endl;
		}
	}while(op!=0);
}
