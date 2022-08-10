//parenthesis check
#include<iostream>
using namespace std;
class parenthesis_check
{
	int top;
	char pops;
	public:
	stack_functions()
	{
		top=-1;
	}
	char stack[10];
	void push(char e)
	{
		top++;
		stack[top]=e;
    }
	int pop(char e)
	{
		pops=stack[top];
		top--;
		cout<<pops<<e;
		switch(pops)
		{
			case '{':
				if(e!='}')
					return -1;
				else return 0;
				break;
			case '[':
				if(e!=']') return -1;
				else return 0;
				break;
			case '(':
				if(e!=')') return -1;
				else return 0;
				break;
			default:
				cout<<"wrong character";
		}
	}
};
int main()
{
	int n,x=0;
	cout<<"how many elements";
	cin>>n;
	char p[n];
	parenthesis_check s;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int i;
	for(i=0;i<n;i++)
	{
		if(p[i]=='{'||p[i]=='['||p[i]=='(')
		{
			s.push(p[i]);
		}
		else
		{
			x=s.pop(p[i]);
			if(x<0)
			{	
			cout<<"\nWRONG";
			break;
			}
		}
 	}
 	if(x==0)
		cout<<"correct";

}
