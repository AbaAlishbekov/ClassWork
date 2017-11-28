#include "stdafx.h"

using namespace std;
template <typename T>
class Stack
{
	T *stack;
	int size;
	int top;

public:
	Stack();

	~Stack();
	void push(const T&);
	T pop();
};

template <typename T>
Stack<T>::Stack() {
	size = 1048576;
	stack = new T[size];
	top = 0;
}

template <typename T>
Stack<T>::~Stack() {
	delete[] stack;
}

template<typename T>
void Stack<T>::push(const T &t) {
	if (top +1 <= size)
	{
		stack[++top] = t;
	}
	
}

template <typename T>
	T Stack<T>::pop() {

	if (top > 0)
	{
		top--;
		return stack[top + 1];
	}
	
	
	}



	int main() {


		Stack<int> stack;
		stack.push(5);
		stack.push(4);
		stack.push(3);
		stack.push(2);
		stack.push(1);
		cout << stack.pop() << endl;
		cout << stack.pop() << endl;
		cout << stack.pop() << endl;
		cout << stack.pop() << endl;
		cout << stack.pop() << endl;

		
		system("pause");

		return 0;
}
