
#include <iostream>
#include "Stack.h"
#include <cassert>
using namespace std;

Stack::Stack(int size)
{
	if (size <= 0)
	{
		cout << "Wrong size\n";
		maxSize = 10;
	}
	else
		maxSize = size;

	stackTop = 0;
	stack = new int[maxSize];
}

bool Stack::isEmpty()
{
	return (stackTop == 0);
}

bool Stack::isFull()
{
	return (stackTop == maxSize);
}

void Stack::push(int item)
{
	if (isFull())
		cout << "Full stack" << endl;
	else
		stack[stackTop++] = item;
}

int Stack::top()
{
	assert(!isEmpty());

	return stack[stackTop - 1];
}

void Stack::pop()
{
	if (isEmpty())
		cout << "Empty stack" << endl;
	else
		stackTop--;
}