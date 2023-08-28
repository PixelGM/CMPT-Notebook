#include <iostream>

using namespace std;

void sSort(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				swap(arr[j], arr[i]);
			}
		}
	}
}

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int arr[5] = { 2, 5, 6, 9, 1 };
	sSort(arr, 5);
	print(arr, 5);
}
