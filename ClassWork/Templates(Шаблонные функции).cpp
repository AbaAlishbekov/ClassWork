#include "stdafx.h"





template <typename T>
T getAverageOfArrayElements(T a[], int size) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}	
	T sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += a[i];
	}

	return sum / size;


}

template <typename T>
T getMinimumOfArrayElements(T a[], int size) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	T min = a[0];

	for (int i = 0; i < size; i++)
	{
		if (a[i]<min)
		{
			min = a[i];
		}
	}
	return min;
}
template <typename T>
T getMaximumOfArrayElements(T a[], int size) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	T max = a[0];
	for (int i = 0; i < size; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	return max;

}

//template <typename T>
//void quicksort(T& a[], const int& size) {
//	if (size < 1) {
//		cout << "array is empty!" << endl;
//	}
//	int temp;
//	T centr = (a[size] / 2);
//
//	for (int i = 0; i <= size; i++)
//	{
//		if (a[i] < a[size])
//		{
//
//		}
//	}
//
//
//}

template <typename T>

int FindOfArr(T* a, const int& size, T key) {
	if (size < 1) {
		cout << "array is empty!" << endl;
	}
	
	for (int i = 0; i < size; i++)
	{
		if (a[i] == key)
		{
			return i;
		}
	}
}

int main() 
{

	int a[5] = {1,2,8,4,3};
	double b[5] = {6.0,7.0,8.9,9.5,10.1};
	float c[5] = {11,12.4,13.9,14.4,15.286,};
	char d[5] = {'a','b','c','d','e'};


	/*cout << getAverageOfArrayElements(a, 5) << endl;
	cout << getAverageOfArrayElements(b, 5) << endl;
	cout << getAverageOfArrayElements(c, 5) << endl;
	cout << (int)getAverageOfArrayElements(d, 5) << endl;
	cout << getMinimumOfArrayElements(a, 5) << endl;
	cout << getMaximumOfArrayElements(a, 5) << endl;*/
	cout << FindOfArr(a, 5, 3);
	system("pause");
	return 0;
}