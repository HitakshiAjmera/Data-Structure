//infix to postfix
#include<iostream>
#include<stack>
using namespace std;
int precedence(char c)//in this function precedence is given to the ooperator
{
	if(c=='^')
		return 3;
	else if(c=='*'||c=='/'||c=='%')
		return 2;
	else if(c=='+'||c=='-')
		return 1;
	else
		return -1;
}
string infixtopostfix(stack<char> s,string infix)//conversion of infix to postfix
{
	string postfix;
	for(int i=0;i<infix.length();i++)//loop for traversing of every elemnt of string
	{            
		if((infix[i]>='a'&& infix[i]<='z')||(infix[i]>='A'&& infix[i]<='Z'))//if infix[i] is operand then directly add it to postfix
		{
			postfix+=infix[i];// assing the operands into the postfix
		}
		else if(infix[i]=='('||infix[i]=='['||infix[i]=='{')//if infix[i] is opening paranthisis then first calculation done in it 
		{
			s.push(infix[i]);
		}
		else if(infix[i]==')'||infix[i]==']'||infix[i]=='}')//if infix[i] is closing paranthisis then pop out paranthis
		{
			while(s.top()!='('&&s.top()!='['&&s.top()!='{')//loop for poput and codition is pop out and add the operator in postfix till opening parenthis
			{
				char temp=s.top();
				postfix+=temp;
				s.pop();
			}
			s.pop();//at the end just pop out opening parenthisis
		}
		else if ((infix[i])=='^'||(infix[i])=='*'||(infix[i])=='/'||(infix[i])=='%'||(infix[i])=='+'||(infix[i])=='-')//checking for operator
		{
			if(s.empty())//if empty then simple just push the operator otherwise we have to check for the precedence of operator
			{
				s.push(infix[i]);
			}
			else//as stack is not empty then check for precedence
			{
				if(precedence(infix[i])>precedence(s.top()))//eg *>+ then push * into stack
				{
					s.push(infix[i]);
				}
				else if((precedence(infix[i])==precedence(s.top()))&&(infix[i]=='^'))
				{
					s.push(infix[i]);
				}
				else //if infix[i]<top then first popout and add it it postfix 
				{
					while((!s.empty())&&(precedence(infix[i])<=precedence(s.top())))//condition stack should not empty and if *>+is happen then loop will terminate
					{
						char temp;
						temp=s.top();
						postfix+=temp;
						s.pop();
					}
					s.push(infix[i]);//now push infix[i] into stack
				}
			}
		}
	}
	while(!s.empty())//this loop for remaining operater in stack
	{
		if(s.top()=='('||s.top()=='['||s.top()=='{')
		s.pop();
		else
		{
		postfix+=s.top();
		s.pop();
		}
	}
	
	return postfix;
}
int main()
{
	 string infix,postfix;
	 cout<<"Enter a infix expression";
	 cin>>infix;
	 stack <char> s;
	 cout<<"infix expresion is"<<infix<<endl;
	 postfix=infixtopostfix(s,infix);
	 cout<<endl<<"postfix expression "<<postfix;
	 return 0;
}

