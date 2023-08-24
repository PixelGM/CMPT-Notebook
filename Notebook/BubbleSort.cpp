#include <iostream>

using namespace std;

int main()
{
	const int SIZE = 3;
	int a[SIZE] = { 3,1,2 };

	// Bubble Sort
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
	//

	// Print
	for (int i = 0; i < 3; i++)
	{
		cout << a[i] << " ";
	}
}