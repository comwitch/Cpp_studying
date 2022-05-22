
#include <iostream>

using namespace std;

void Swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void Print(int* arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;

}

void SelectionSort(int* arr, int length)
{
	int Min;
	for (int i = 0; i < length - 1; i++)
	{
		Min = i;

		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[Min])
			{
				Min = j;
			}
			
		}
		Swap(arr[Min], arr[i]);
		
		cout << i << " ��° ������ Ž�����: ";
		Print(arr, 5);
	}
}

int main()
{
	int arr[5] = { 3,5,1,2,4 };
	int length = 5;

	for (int i = 0; i < length; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;

	SelectionSort(arr, length);

	for (int i = 0; i < length; i++)
	{
		cout << " " << arr[i];
	}
	cout << endl;
}


/* ��������

���� �迭�� ���� ���� 0�������� ������� ������ �迭�� ���� ���ϸ鼭 ��ü���ִ� ����.*/