#include<iostream>
using namespace std;
class deque
{
	int rear,front,size,*queue;
	public:
		deque(int s)
		{
			rear=front=-1;
			size=s;
			queue= new int[size];
			for(int i=0;i<size;i++)
			{
				queue[i]=0;
			}
		}
		void enqueue_rear(int item)
		{
			if(rear==(size-1))
				cout<<"\ncannot insert at rear side";
			else
				{
					rear=rear+1;
					queue[rear]=item;
				}
		}
		void dequeue_front()
		{
			if(front==-1&&rear==-1)
				cout<<"\nEMPTY";
			else
			{
				if(front==rear)
				{
					rear=front=-1;
				}
				int temp=queue[front];
				cout<<"\nDequeue element "<<temp;
				front++;
			}
		}
		void enqueue_front(int item)
		{
			if(front==0)
			{
				cout<<"\nCannot enqueue at front side";
			}
			else
			{
				front--;
				queue[front]=item;
			}
		}
		void dequeue_rear()
		{
			if(rear==-1&&front==-1)
			{
				cout<<"\nEMPTY";
			}
			else
			{
				int temp=queue[rear];
				rear--;
				cout<<"\nDequeue element is "<<temp;
			}
		}
		void display()
		{
			if(rear=-1&&front==-1)
				cout<<"\nEMPTY";
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
	deque obj(size);
	cout<<"\nSelect one"<<endl;
	cout<<"1.Inset element from front side"<<endl;
	cout<<"2.Insert element from front side"<<endl;
	cout<<"3.Delete from front"<<endl;
	cout<<"4.Delete from rear side"<<endl;
	cout<<"5.To display"<<endl;
	cout<<"0.To exit"<<endl;
	do
	{
		cout<<"Enter Choice ";
		cin>>op;
		switch(op)
		{
			case 0:
				cout<<"EXIT";
				break;
			case 1:
				cout<<"\nEnter item to insert ";
				cin>>item;
				obj.enqueue_front(item);
				break;
			case 2:
				cout<<"\nEnter item to insert ";
				cin>>item;
				obj.enqueue_rear(item);
				break;
			case 3:
				obj.dequeue_front();
				break;
			case 4:
				obj.dequeue_rear();
				break;
			case 5:
				obj.display();
				break;
			default:
				cout<<"WRONG CHOICE";
		}		
	}while(op!=0);
}
