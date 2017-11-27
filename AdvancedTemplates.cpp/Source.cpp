#include "stdafx.h"



template <typename T>
class Matrix
{
	
public:
	T **arr;
	int height, width;
	Matrix(int height, int width) {
		this->height = height;
		this->width = width;
		arr = new int *[width];

		for (int i = 0; i < width; i++)
		{
			arr[i] = new int[height];

		}
		
	}

	void RandFunc() {

		srand(time(NULL));

		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < height; j++)
			{
				arr[i][j] = rand() % 100;
			}
		}
	}

void	printrand() {

	for (int i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			cout << arr[i][j] << ' ';
		}
	}
	}

	~Matrix()
	{
		for (int i = 0; i < width; i++)
		{
			delete arr[i];
		}
		delete arr;
	}
	



};

//
//template<typename T1, typename T2>
//auto sum(T1 t1, T2 t2) -> decltype(T1) {
//	return t1 + t2;
//}

int main()
{
	
	 Matrix <int> Neo(7, 8);
	 Neo.RandFunc();
	 Neo.printrand();
	 system("pause");
	return 0;
}

