#include<iostream>
using namespace std;
class stack{
	public:
		int size;
		int top;
		int *arr;
		
};
int main()
{
	stack s;
	s.top=-1;
	cout<<"Enter the number of element of stacks";
	cin>>s.size;
	s.arr=new int[s.size];
	
}
