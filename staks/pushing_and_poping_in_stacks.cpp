#include<iostream>
using namespace std; 
class stack{
	public:
		int size;
		int top;
		int *arr;
		
};
bool isempty(stack *ptr)
{
	if(ptr->top==-1)
	return true;
	else 
	return false;
}
bool isfull(stack *ptr)
{
	if(ptr->top==ptr->size-1)
	return true;
	else
	return false;
}
int main()
{
	stack *s;
	s->size=5;
	s->arr=new int[s->size];
	s->top=-1;
	if(!isfull(s))
	{
		for(int i=0;i< s->size;i++)
		{   
		     
		     s->top=s->top+1;
		     cout<<"Enter the element of sstacks";
			cin>>s->arr[s->top];
		}
	}
	if(isfull(s))
	{
		cout<<"The stack is full now \n";
		for(int i=0;i<s->size;i++)
		{
			
			cout<<s->arr[s->top]<<endl;
			s->top=s->top-1;
		}
	}
	else 
	cout<<"Stack is full";
	
	if(isempty(s))
	cout<<"the stack is now empppty";
	
	
}
