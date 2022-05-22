#include <iostream>
#include <string.h>

using namespace std;

int stack[1000001];
int top = -1;

void Push(int x)
{
	stack[++top] = x;
}

int empty()
{
	if (top < 0) 
		return 1;
	else 
		return 0;
}

void Pop()
{
	if (empty() == 1)
		cout << "-1" << endl;
	else
	{
		cout << stack[top] << endl;
		stack[top--] = 0;
	}
}

int main()
{
	int n;
	cout << "저장할 공간을 입력해주세요 : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		char str[10];
		cout << "명령어를 입력해 주세요 : ";
		cin >> str;
		if (!strcmp(str, "Push"))
		{
			int x;
			cin >> x; 
			Push(x);
		}
		else if (!strcmp(str, "top"))
		{
			if (empty() == 1)
				cout << "-1" << endl;
			else
				cout << stack[top] << endl;
		}
		else if (!strcmp(str, "Pop"))
		{
			Pop();
		}
		else if (!strcmp(str, "empty"))
		{
			cout << empty() << endl;
		}
		else
		{
			cout << top + 1 << endl;
		}
	}

	return 0;
}