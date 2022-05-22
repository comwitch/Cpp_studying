
#include <iostream>
#define MAX_LEN 5
using namespace std;

void InsertionSort(int* arr)
{
	int i, j;
	int key;

	for (i = 1; i < MAX_LEN; i++)
	{
		key = arr[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > key)
				arr[j + 1] = arr[j];
			else
				break;
		}

		arr[j + 1] = key;
	}
}

int main()
{
	int arr[MAX_LEN] = { 9, 5, 3, 7 , 1 };
	int i;

	for (i = 0; i < MAX_LEN; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;

	InsertionSort(arr);


	for (i = 0; i < MAX_LEN; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;


	return 0;
}