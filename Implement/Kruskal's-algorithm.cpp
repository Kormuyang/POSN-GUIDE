#include <bits/stdc++.h>

using namespace std;

typedef pair<int, pair<int, int> > iiPair;

int findParent(vector<int> parent, int child)
{
    if (parent[child] == child)
    {
        return parent[child];
    }
    return parent[child] = findParent(parent, parent[child]);
}

int main()
{
    int v, e;
    cin >> v >> e;

    vector<iiPair> edge(e);
    for (int i = 0; i < e; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edge[i] = make_pair(w, make_pair(u, v));
    }

    vector<int> parent(v);
    for (int i = 0; i < v; i++)
    {
        parent[i] = i;
    }

    int min_cost = 0;
    sort(edge.begin(), edge.end());
    for (int i = 0; i < e; i++)
    {
        int u = edge[i].second.first, v = edge[i].second.second;
        int parent_u = findParent(parent, u), parent_v = findParent(parent, v), w = edge[i].first;
        
        if (parent_u != parent_v)
        {
            parent[v] = parent[u];
            min_cost += w;
        }
    }

    cout << min_cost;
    return 0;
}
