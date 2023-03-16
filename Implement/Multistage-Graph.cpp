#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> iPair;

int main()
{
	int v, e;
	cin >> v >> e;

	vector<iPair> adj[v];
	for (int i = 0; i < e; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back(make_pair(v, w));
	}

	vector<int> dist(v, INT_MAX);
  dist[v - 1] = 0;

  for (int i = v - 2; i >= 0; i--)
  {
  	for (auto u : adj[i])
  	{
  		dist[i] = min(dist[i], dist[u.first] + u.second);
   	}
  }

  for (int i = 0; i < v; i++)
  {
    cout << dist[i] << ' '
  }

	return 0;
}
