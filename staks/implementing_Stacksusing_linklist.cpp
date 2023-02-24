#include<iostream>
#include<stdlib.h>
using namespace std;
 class node{
 	public:
 		int data;
 		node *next;
 };
 bool isempty(node *top)
 {
 	if(top==NULL)
 	return true;
 	 else 
 	return false;
 }
 bool isfull(node *top)
 {
 	node *p=new node();
 	if(p==NULL)
 	{
 		return 1;
 		
	 }
	 else 
	 return false;
 }
 node * push(node *top, int x)
 {
 	if(isfull(top))
 	{
 		cout<<"Stack Overflowed";
	 }
	 else
	 {
	 	node *n=new node();
	 	n->data=x;
	 	n->next=top;
	 	//top=n;
	 	return n;
	 }
 }
 int pop(node *top)
 {
 	if(isempty(top))
 	{
 		cout<<"Stack underflowed"<<endl;
 		
	 }
	 else
	 {
	 	node *ptr=top;
	 	top=(top)->next;
	 	int x=ptr->data;
	 	free(ptr);
	 return x;	
	 }
	 
 }
void traversal(node *top)
{
	while(top!=NULL)
	{
		cout<<top->data<<endl;
		top=top->next;
	}
}
 int main()
 {
 	node *top=NULL;
 	top=push(top,10);
 	top=push(top,10);
 	top=push(top,10);
 	
 	top=push(top,10);
 	top=push(top,50);
 	cout<<"After pushing"<<endl;
 	traversal(top);
 	int element=pop(top);
 	cout<<element;
	 return 0;
 }
 
