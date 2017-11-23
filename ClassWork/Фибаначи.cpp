//#include "stdafx.h"
//
//
//
//int fib1(int n) {
//
//	if (n == 0 || n == 1) {
//		return n;
//	}
//
//
//	return fib1(n - 1) + fib1(n - 2);
//}
//
//int fib2(const int n) {
//
//	int *a = new int [n];
//	a[0] = 1;
//	a[1] = 1;
//	for (int i = 2; i < n; ++i)
//	{
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	int res = a[n - 1];
//	delete a;
//	return res;
//}
//
//
//void main() {
//
//	int n;
//	cin >> n;
//	cout << fib2(n) << endl;
//	system("pause");
//	
//
//}