#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> iPair;

int main()
{
	int v, e;
	cin >> v >> e;

	vector<pair<int, int> > adj[v];
	for (int i = 0; i < e; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].push_back(make_pair(v, w));
		adj[v].push_back(make_pair(u, w));
	}

	priority_queue<iPair, vector<iPair>, greater<iPair> > pq;
	vector<int> dist(v, INT_MAX);
	vector<bool> vis(v, false);
	pq.push(make_pair(0, 0));
	dist[0] = 0;

	while (!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();

		if (vis[u])
		{
			continue;
		}

		vis[u] = true;
		
		for (auto i : adj[u])
		{
			int v = i.first, w = i.second;

			if (!vis[v] && w < dist[v])
			{
				dist[v] = w;
				pq.push(make_pair(w, v));
			}
		}
	}
	return 0;
}
