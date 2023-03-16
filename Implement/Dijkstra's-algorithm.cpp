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
	vector<bool> vis(v, false);
	priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
	pq.push(make_pair(0, 0));
	dist[0] = 0;

	while (!pq.empty())
	{
		auto u = pq.top();
		pq.pop();

		if (vis[u.second])
		{
			continue;
		}

		vis[u.second] = true;

		for (auto v : adj[u.second])
		{
			if (!vis[v.first] && dist[v.first] > dist[u.second] + v.second)
			{
				dist[v.first] = dist[u.second] + v.second;
				pq.push(make_pair(dist[v.first], v.first));
			}
		}
	}

	for (int i = 0; i < v; i++)
	{
		cout << dist[i] << ' ';
	}
	
	return 0;
}
