#include <iostream>
#include <cassert>
#include "Stack.h"
using namespace std;



//copying from s1 to s2
void copyStack(Stack s1, Stack s2)
{
	Stack Temp(10);
	while (!s1.isEmpty())
	{
		Temp.push(s1.top());
		s1.pop();
	}

	while (!Temp.isEmpty())
	{
		s2.push(Temp.top());
		s1.push(Temp.top());
		Temp.pop();
	}
}

//finding greater values than x in stack s1
void countGreater(int x, Stack s1)
{
	int count = 0;
	for (int i = 0; i < s1.rtrnMaxSiz(); i++)
	if (s1.traverseStack(i)>x)
		count++;
	cout << count << " elements greater than " << x << endl;
}

//finding the max value in stack s1
void findMax(Stack s1)
{
	int max=0;
	for (int i = 0; i < s1.rtrnMaxSiz(); i++)
	if (s1.traverseStack(i)>max)
		max = s1.traverseStack(i);
	cout << "The maximum value in your stack is " << max << endl;
}

//inserting in the middle of stack s1
void insertMiddle(int y, Stack s1)
{
	//calculating the lenght
	int length = 0;
	for (int i = 0; i <= s1.rtrnMaxSiz(); i++)
	if (s1.traverseStack(i)>0)
		length++;
	s1.pushMiddle(y, length);

}

void main()
{

	/*Test Code
	int main()
	{
		cout << "Write your main() function to test ALL functions. "
			<< "We will run yuur code using YOUR AND OUR main()." << endl;
		return 0;
	}
	*/

	Stack s1(10), s2(10);
	int z, x;
	cout << "\nFill in stack with 10 integer values:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> z;
		s1.push(z);
	}

	cout << "\nStack s1 before copying s2:" << endl;
	for (int i = 0; i < s1.rtrnMaxSiz(); i++)
		cout << s1.traverseStack(i) << " ";
	cout << endl;

	copyStack(s1, s2);

	cout << "\nStack s2 after copy:" << endl;
	for (int i = 0; i < s1.rtrnMaxSiz(); i++)
		cout << s2.traverseStack(i) << " ";
	cout << endl;

	cout << "\nStack s1 after copying s2:" << endl;
	for (int i = 0; i < s1.rtrnMaxSiz(); i++)
		cout << s1.traverseStack(i) << " ";
	cout << endl;

	cout << "\nEnter an integer to search for greater values in stack s1:" << endl;
	cin >> x;
	countGreater(x, s1);

	findMax(s1);

	cout << "\nEnter an integer to insert in the middle of the stack s1:" << endl;
	cin >> x;
	insertMiddle(x, s1);

	for (int i = 0; i < s1.rtrnMaxSiz(); i++)
	{
		cout << s1.traverseStack(i) << " ";
	}
	cout << endl;

	char c;
	cout<<"\nWritten by A. Z. Quwatli\n" << "\nenter any key to continue";
	cin >> c;
}