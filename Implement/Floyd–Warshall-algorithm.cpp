#include <bits/stdc++.h>

using namespace std;

int main()
{
	int v, e;
	cin >> v >> e;

	int graph[v][v];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				graph[i][j] = 0;
			}
			else 
			{
				graph[i][j] = INT_MAX;
			}
		}
	}

	for (int i = 0; i < e; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		graph[u][v] = w;
	}

	for (int k = 0; k < v; k++)
	{
		for (int i = 0; i < v; i++)
		{
			for (int j = 0; j < v; j++)
			{
				graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
			}
		}
	}
	
	return 0;
}
