#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

void RecursionDFS(int start, vector<int>graph[], bool check[])
{
	check[start] = true;
	printf("%d", start);

	for (int i = 0; i < graph[start].size(); i++)
	{
		int next = graph[start][i];

		if (check[next] == false)
		{
			RecursionDFS(next, graph, check);
		}
	}
}

int main()
{
	int n;
	int m;
	int start;
	cin >> n;
	cout << endl;
	cin >> m;
	cout << endl;
	cin >> start;
	cout << endl;

	vector<int>* graph = new vector<int>[n + 1];
	
	bool* check = new bool[n + 1];
	fill(check, check + n + 2, false);
	
	for (int i = 0; i < m; i++)
	{
		int u, v;
		cin >> u;
		cin >> v;

		graph[u].push_back(v);
		graph[v].push_back(u);
	}

	for (int i = 0; i <= n; i++)
	{
		sort(graph[i].begin(), graph[i].end());
	}

	RecursionDFS(start, graph, check);
	printf(" \n");
	return 0;
}