
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
버블 정렬

첫번째 인덱스를 기준으로 두번째 인덱스부터 순차적으로 점검을 하며, 첫번째 인덱스보다 검사하는 인덱스의 값이 더 큰경우
교체를 해준다.

교체를 한 뒤에는 다음 인덱스를 기존으로 자신보다 큰 값이 나오기 전까지 교체 작업을 반복한다.

이 과정에서 큰 값은 맨 뒤로가고, 0이 뒤에있는 경우에는 해당값이 제일 앞으로 오게 만들기 위해 반복문이 진행.
*/