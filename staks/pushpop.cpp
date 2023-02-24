#include<iostream>
using namespace std;
class stack{
	public:
		int size;
		int *arr;
		int top;
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
void push(stack *ptr, int val)
{
	if(isfull(ptr))
	{
		cout<<"Stack overflow! Cannot push "<<val <<"To the stack";
	}
	else
	ptr->top++;
	ptr->arr[ptr->top]=val;
}
int pop(struct stack* ptr){
     int val;
     //cout<<"A";
	if(isempty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
       val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{
	stack *s=new stack();
	s->size=10;
	s->top=-1;
	s->arr=new int[s->size];
	push(s,10);
		push(s,20);
			push(s,30);
				push(s,40);
					push(s,50);
						push(s,60);
cout<<"After Pushing, "<<endl;
cout<<pop(s)<<"from stack";
	return 0;
	
}
