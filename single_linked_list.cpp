//linked list
#include<iostream>
using namespace std;
class Node//creating a node
{
	public:
		int key;
		int data;
		Node* next;
		node()
		{
			key=0;
			data=0;
			next=NULL;
		}
		node(int k,int d)
		{
			key=k;
			data=d;
			next=NULL;
		}
} ;
class singlyLinkedList
{
	public:
		Node* head;
		singlyLinkedList()
		{
			head=NULL;
		}
		singlyLinkedList(Node *n)
		{
			head=n;
		}
		Node* nodeExists(int k)//return pointer
		{
			Node* temp=NULL;
			Node* ptr=head;
			while(ptr!=NULL)
			{
				if(ptr->key==k)
				{
					temp=ptr;
				}
				ptr=ptr->next;
			}
			return temp;
		}
		void append_node(Node *n)
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"Node already exist with key value : "<<n->key<<"\nAppend another node with different key value"<<endl;
			}
			else
			{
				if(head==NULL)
				{
					head=n;
					cout<<"Node Appended"<<endl;
				}
				else
				{
					Node*ptr=head;
					while(ptr->next!=NULL)
					{
						ptr=ptr->next;
					}
					ptr->next=n;
					cout<<"Node Appended"<<endl;
				}
			}
		}
		void prependnode(Node* n)
		{
			if(nodeExists(n->key)!=NULL)
			{
				cout<<"Node already exist with key value : "<<n->key<<"\nAppend another node with different key value"<<endl;
			}
			else
			{
				n->next=head;//linking at the starting
				head=n;//change the head
				cout<<"Node Preapend";
			}
		}
		void insert(int key,Node *n)//key value after which node n is to attach
		{
			Node* ptr=nodeExists(key);
			if(ptr==NULL)
			{
				cout<<"No node exist with key value : "<<key<<endl;
			}
			else
			{
				if(nodeExists(n->key)!=NULL)
				{	
				cout<<"Node already exist with key value : "<<n->key<<"\nAppend another node with different key value"<<endl;
				}
				else
				{
					n->next=ptr->next;
					ptr->next=n;
					cout<<"Node inserted"<<endl;
				}
			}
		}
		void deletenodebykey(int k)
		{
			if(head==NULL)
			{
				cout<<"Already empty"<<endl;
			}
			else if(head!=NULL)
			{
				if(head->key==k)
				{
					head= head->next;
				}
				else
				{
					Node* temp=NULL;
					Node* prevptr=head;
					Node* currentptr=head->next;
					while(currentptr!=NULL)
					{
						if(currentptr->key==k)
						{
							temp=currentptr;
							currentptr=NULL;
						}
						else
						{
							prevptr=prevptr->next;
							currentptr=currentptr->next;
					    }
					}
					if(temp!=NULL)
					{
						prevptr->next=temp->next;
						cout<<"Node is unlinked eith key value: "<<k<<endl;
					}
					else
						cout<<"Node dosenot exist with key value :"<<k<<endl;
				}
			}
		}
		void updatenode(int k,int d)
		{
			Node* ptr=nodeExists(k);
			if(ptr!=NULL)
			{
				ptr->data=d;
				cout<<"Node Data updated"<<endl;
			}
			else
			{
				cout<<"Node dosenot exist"<<endl;
			}
		}
		void print()
		{
			if(head==NULL)
			{
				cout<<"No node";
			}
			else
			{
				cout<<"\nLinked List value:"<<endl;
				Node* temp=head;
				while(temp!=NULL)
				{
					cout<<"("<<temp->key<<","<<temp->data<<")---> ";
					temp=temp->next;
				}
			}
		}
};
int main()
{
	singlyLinkedList s;
	int option;
	int key1,k1,data;
	do
	{
		cout<<"\nWhat operation do you want to perform? Select option number. Enter 0 to exit"<<endl;
		cout<<"1. appendNode()"<<endl;
		cout<<"2. prependNode()"<<endl;
		cout<<"3. InsertNodeafter()"<<endl;
		cout<<"4.deletenodebykey()"<<endl;
		cout<<"5. updateNodebykey()"<<endl;
		cout<<"6. print()"<<endl;
		cout<<"7. clear screen"<<endl;
		cin>>option;
		Node* n1= new Node();
		switch(option)
		{
			case 0:
				cout<<"EXIT";
				break;
			case 1:
				cout<<"Append Node Opertion\nEnter key and data of node to Appended "<<endl;
				cin>>key1;
				cin>>data;
				n1->key=key1;
				n1->data=data;
				s.append_node(n1);
				break;
			case 2:
				cout<<"Prepend node operation\nEnter key and data of node to prepend "<<endl;
				cin>>key1;
				cin>>data;
				n1->data=data;
				n1->key=key1;
				s.prependnode(n1);
				break;
			case 3:
				cout<<"Insertion Operation \nEnter key value after which you want to insert this new node"<<endl;
				cin>>k1;
				cout<<"Enter key and data of node to prepend "<<endl;
				cin>>key1;
				cin>>data;
				n1->data=data;
				n1->key=key1;
				s.insert(k1,n1);
				break;
			case 4:
				cout<<"Delete node Operation \nEnter a key of node which you want to delete"<<endl;
				cin>>k1;
				s.deletenodebykey(k1);
				break;
			case 5:
				cout<<"Update node operation\nEnter the key of on which you want to update"<<endl;
				cin>>key1;
				cin>>data;
				s.updatenode(key1,data);
				break;
			case 6:
				s.print();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter proper option number"<<endl;
		}
	}while(option!=0);
	return 0;

}
