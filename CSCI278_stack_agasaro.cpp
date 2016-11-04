
// Description: 	This file layouts the methods for
//				the Stack class.

#include<iostream>
#include<string>
#include"CSCI278_stack_agasaro.h"

using namespace std;

Stack::Stack()
{
	count = 0;
	cap = DEFAULT_STACK_SIZE;
	topIndex = (int)-1; //the stack is empty
	pelement = new double[cap];
}

Stack::Stack(int capacity)
{
	count = 0;
	cap = capacity;
	topIndex = (int)-1; //empty stack
	pelement = new double[cap];
}

Stack::~Stack()
{
	cout << "destructor" << endl;
}

int Stack::push(double stuff)
{
	if (topIndex == cap)
	{
		cout <<"stack overflow" <<endl;
		return -1;
	}
	else 
	{ 
		count ++;
		topIndex++;
		pelement[(int)topIndex] = stuff;
	}
	return 1;
}

double Stack::pop()
{
	if(topIndex == -1)
	{
		cout<<"stack's empty"<<endl;
		return -1;
	}
		
	else
	{
		pelement[(int)topIndex] = 0;
		count--;
		topIndex --;
		return pelement[(int)topIndex];
	}
}
double Stack::peak() 
{
	if (topIndex == -1)
	{
		cout <<"stack is empty"<<endl;
		return -1;
	}
	else
	{
		return pelement[(int)topIndex];
	}
}

void Stack::print()
{
	if (topIndex == -1)
	{
		cout << "stack is empty" << endl;
	}

	else
	{
		cout<<"Print from top " << Count() << " elements: ";
		for(int i = 0; i<=topIndex; i++)
		{
			cout<<pelement[topIndex - i]<< " ";
		}
		cout<<endl;
	}
}

int Stack::Count()
{
	return count;
}

