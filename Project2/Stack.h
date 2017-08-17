#pragma once
class Stack
{
public:
	Stack(int);
	void push(int);
	void pop();
	int top();
	bool isEmpty();
	bool isFull();

	//function to access the maxsize
	int rtrnMaxSiz() { return maxSize; }

	//function to seasily traverse the array
	int traverseStack(int i)
	{
		return stack[i];
	}

	//function to easily push in the middle
	void pushMiddle(int x, int len)
	{
		stack[len / 2] = x;
	}

private:
	int maxSize, *stack, stackTop;
};

