#include<iostream>
using namespace std;
class stack{
	public:
		int *arr;
		int size;
		int top;
};
bool isfull(stack *ptr)
{
	if(ptr->size-1==ptr->top)
	return true;
	else 
	return false;
}
int main()
{
	//second methid
	stack *ss;
	ss->size=80;
	ss->top=-1;
	ss->arr=new int[80];
	ss->arr[0]=9;
	ss->top++;
	if(isfull(ss))
	{
		cout<<"the stack is full";
	}
	else
	cout<<"the stack is empty";
	
}
