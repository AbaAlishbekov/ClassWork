#include "stdafx.h"

using namespace std;



template<typename T>
class Queue
{
	T *queue;
	const int size = 1048576;
	int last, first, cnt;
public:
	Queue();
	~Queue();

	void enqueue(const T&);
	T dequeue();

};
template<typename T>
Queue<T>::Queue()
{

	queue = new T[size];
	first = last = cnt = 0;

}
template<typename T>
Queue<T>::~Queue()
{
	delete[] queue;
}
template<typename T>
void Queue<T>::enqueue(const T&t) {
	if (cnt < size)
	{
		queue[last++] = t;
		++cnt;
		if (last > size)
		{
			last -= size + 1;
		}
	}

}

template<typename T>
T Queue<T>::dequeue() {
	if (cnt > 0)
	{
		T temp = queue[first++];
		--cnt;
		if (first > size)
		{
			first -= size + 1;
		}
		return temp;
	}

}
int main() {
	Queue<int> queue;

	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.enqueue(4);
	queue.enqueue(5);
	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;
	cout << queue.dequeue() << endl;

	system("pause");
	return 0;
}