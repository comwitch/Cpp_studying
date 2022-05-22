
#include <iostream>
#define MAX 10
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


int main()
{
	int i, j;

	int arr[MAX] = { 2,4,1,3,5,7,6,8,0,9 };
	cout << "before : ";
	Print(arr, MAX);

	//bubblesort
	for (i = 0; i < MAX -1; i++)
	{
		for (j = 0; j < MAX - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
				Swap(arr[j], arr[j + 1]);
		}
	}

	cout << "AFter : ";
	Print(arr, MAX);
	return 0;
}



/*
���� ����

ù��° �ε����� �������� �ι�° �ε������� ���������� ������ �ϸ�, ù��° �ε������� �˻��ϴ� �ε����� ���� �� ū���
��ü�� ���ش�.

��ü�� �� �ڿ��� ���� �ε����� �������� �ڽź��� ū ���� ������ ������ ��ü �۾��� �ݺ��Ѵ�.

�� �������� ū ���� �� �ڷΰ���, 0�� �ڿ��ִ� ��쿡�� �ش簪�� ���� ������ ���� ����� ���� �ݺ����� ����.
*/