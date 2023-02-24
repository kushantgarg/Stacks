#include<iostream>
using namespace std;
class stack{
	public:
		int top;
		int size;
		int *arr;
};
bool isempty(stack *sp)
{
	if(sp->top==-1)
	{
		return true; 
	}
	else
	return false;
}
bool isfull(stack *sp)
{
	if(sp->top==sp->size-1)
	return true;
	else 
	return false;
	
}

void push(stack *sp, int val)
{
	if(isfull(sp))
	{
		cout<<"Stack overflowed"<<endl;
	}
	else
	{
		sp->top++;
		sp->arr[sp->top]=val;
	}
}
int pop(stack *sp)
{
	 if(isempty(sp))
	 {
	 	cout<<"Stack Underlowed"<<endl;
	 }
	 else
	 {
	 	int value;
	 	value=sp->arr[sp->top];
	 	sp->top--;
	 	return value;
	 }
}
int peek(stack *sp, int i)
{
	int arrayind=sp->top+1-i;
	if(arrayind<0)
	{
		cout<<"Not a valid index";
		return -1;
	}
	else 
	return sp->arr[arrayind];
	
}
int main()
{
	stack *s;
	s->top=-1;
	s->size=5;
	s->arr=new int[s->size];
   cout<<"Pushing elementns in stack"<<endl;
   push(s,10);
   push(s,20);
   push(s,30);
   push(s,40);
   cout<<"After Pushingg"<<endl;
   cout<<"element at positinin 3 is"<<peek(s,3)<<endl;
   for(int i=0;i<s->size-1;i++)
   {
   	cout<<pop(s)<<endl;
   }
}
