//boilerplate code

#include<iostream>
using namespace std;
void printarray(int *a, int low, int high)
{
for(int i=0;i<high;i++)
{
	cout<<a[i]<<endl;
}

}
int partition(int ar[],int low, int high)
{
	int temp;
	int i= low + 1;
	int j=high;
	int pivot=ar[low];
	do{
	
	while(ar[i]<=pivot)
	{
		i++;
	}
	while(ar[j]>pivot)
	{
		j--;
	}
	//when i and j are fixed we need to interchange the values at their places
	if(i<j)
	{
		temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
	}
	
	}while(i<j);
	//swapping pivot element with the element at jth index
	temp=ar[low];
	ar[low]=ar[j];
	ar[j]=temp;
	return j;
}

void quicksort(int A[],int low, int high)
{
	int partitionindex=0;
	if(low<high)//termination condition
	{
		partitionindex=partition(A,low,high);
		quicksort(A,low,partitionindex-1);//leftsubarray
	quicksort(A,partitionindex+1,high);//for right subarray
	}
}
int main()
{
int A[] = {2,3,4,9,1};
int n=5;
printarray(A,0,n);
quicksort(A,0,n-1);
cout<<"After"<<endl;
printarray(A,0,n);


return 0;

}

