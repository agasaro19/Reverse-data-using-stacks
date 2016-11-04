
// Description: 	This file implements the interface 
//			to the Stack object.

#ifndef CSCI278_STACK_AGASARO_H  // sentinel
#define CSCI278_STACK_AGASARO_H

// Size of stack when user lets it default
// Can change this to grow or shrink default stack
#define DEFAULT_STACK_SIZE 7

class Stack {
private:
	double * pelement;
	int topIndex;
	int cap;
	int count;

public:
	// Constructors and Destructor
	Stack();		
	Stack(int);
	~Stack();
	
	// Methods
	// Inserts an element at the top, increments topIndex
	//	Needs to check for full
	int push(double);
	
	// Removes element at the top, decriments topIndex
	//	Needs to check for empty
	double pop();

	// Retrieves the element at the top, 
	//	leaves topIndex untouched
	//	Needs to check for empty
	//	for further details on back parameter 
	//	see the implementation in Stack.cpp
	double peak();

	// Output the elements of the stack,
	//	for further details see Stack.cpp
	void print();

	// Return the number of elements on the stack.
	//	Empty stack will return 0.
	int Count();
};

#endif



























//#include <iostream>
//using namespace std;
//
//class Stack
//{
//	private:
//		double top;
//		int stack_capacity;
//		double *storage;
//				
//	public:
//		Stack();
//		Stack(int);
//		~Stack();
//		double get_top();
//		double Peek();
//		void Push(double);
//		void Pop();
//};
//
