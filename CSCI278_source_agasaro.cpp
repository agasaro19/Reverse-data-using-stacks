//
// Author: 		Liliane Agasaro Batamuliza
// Date: 		February 20,2016		Version: 1.0.1
// Course: 		Data Structures
// Filename: 	Stack.cpp
// Description: 	This file is the application file that implements
//				the Stack class.
//
// Copyright © 2016 Liliane Agasaro Batamuliza. All rights reserved.

#include<iostream>
#include<cstdlib>
#include"CSCI278_stack_agasaro.h"
using namespace std;

int main()
{
	Stack custom_stack (2);
	Stack first_order;
	Stack swapped_order;

	//test cases
	custom_stack.push(23);
	custom_stack.push(34);
	custom_stack.push(1);
	custom_stack.push(2);	//push on full
	custom_stack.print();
	cout<<"element on top " <<custom_stack.peak();
	cout<<endl;
	custom_stack.pop();
	custom_stack.pop();
	custom_stack.pop();
	
	//pop, peak, print when empty
	custom_stack.pop();	
	custom_stack.peak();
	custom_stack.print();

	//normal order
	for (int i= 0; i < 7; i++)
	{
		first_order.push(rand() % 100);
	}
	first_order.print();

	//swapped order
	for (int i = 0; i < 7; i++)
	{
		double input = first_order.peak();
		swapped_order.push(input);
		first_order.pop();
	}
	swapped_order.print();

	return 0;
}
