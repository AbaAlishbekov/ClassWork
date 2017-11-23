//// Operators.cpp : Defines the entry point for the console application.
////
//
//#include "stdafx.h"
////
////class Integer {
////public:
////	int value;
////	explicit Integer() {}
////
////	// онструктор переноса
////	explicit Integer(const Integer&& i) {
////		value = move(i.value);
////		
////	}
////	// онструктор копировани€
////	explicit Integer(int x) {
////		value = x;
////	}
////	Integer& operator =(const int& x) {
////		value = x;
////		return *this;
////	}
////	//lvalue vs rvalue - &, &&
////	Integer& operator +(const Integer& x) {
////		//конструктор Integer y
////		Integer y(value + x.value);
////		return y;
////	}
////	//префикс ++i
////	Integer& operator ++() {
////		++this->value;
////		return *this;
////	}
////	//постфикс i++
////	Integer& operator ++(int) {
////		Integer old(value);
////		++value;
////		return old;
////	}
////	bool operator !=(const Integer& x) {
////		return value == x.value;
////	}
////
////	bool operator <(const Integer& x) {
////		return value < x.value;
////	}
////
////};
//
//
//
//
////ostream& operator <<(ostream& os, Integer& x) {
////	os << x.value;
////	return os;
////}
//
////void f1() {
////	//попадает в конструктор
////	Integer y(5);
////	int x = 5;
////	//попадает в перегруженный оператор
////	y = x;
////	cout << y.value << endl;
////}
////
////void f2() {
////	Integer a(5);
////	Integer b(6);
////	//c=11
////	Integer c = *a + b;	//Integer c = a.+(b);
////	cout << c.value << endl;
////	//c=11
////	cout << c++.value << endl;
////	//c=12
////	cout << c.value << endl;
////}
////
////void f3() {
////	Integer a(5), b(5), c(6);
////
////	cout << (a != b) << endl;
////	cout << (a != c) << endl;
////
////
////}
//
//
//class Date {
//
//	int *day;
//	int *month;
//	int *year;
//public:
//
	//Date(int a, int b, int c) {

	//	this->day = new int(a);
	//	this->month = new int(b);
	//	this->year = new int(c);

	//	
	//	}
	//
//
//	~Date()
//	{
//		delete day;
//		delete month;
//		delete year;
//	}
//
//	friend int operator -(const Date& d1,const Date& d2);
//
//
//	int getMonthMultiplier() const {
//		switch (*month) {
//
//		case 1:
//		case 3:
//		case 5:
//		case 7:
//		case 8:
//		case 10:
//		case 12:
//
//			return 31;
//
//		case 4:
//		case 6:
//		case 9:
//		case 11:
//			return 30;
//
//		case 2: if (*year % 4 == 0 && *year % 100 != 0 || *year % 400 == 0)
//		{
//			return 29;
//		}
//
//		default: break;
//	}
//	}
//
//};
//
//int operator-(const Date& d1, const Date& d2) {
//	return (*d1.day + (*d1.month * d1.getMonthMultiplier()) + (*d1.year * 365)) - (*d2.day + (*d1.month * d1.getMonthMultiplier()) + (*d2.year * 365));
//}
//
//void main()
//{
//	Date d1(30, 5, 1995);
//	Date d2(22, 11, 2017);
//	cout << d2 - d1 << endl;
//
//
//	system("pause");
//}