// binary search
#include<bits/stdc++.h>

using namespace std;

int binary_search(int *a, int t)
{
    int l, r;
    l = 0;
    r = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;

        if (a[m] < t)
        {
            l = m + 1;
        }
        else if (a[m] > t)
        {
            r = m - 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}

int visited[1000];
vector<int> adj[1000];

void dfs(int s)
{
    if (visited[s])
        return;
    visited[s] = true;
    // process node s
    for (auto u : adj[s])
    {
        dfs(u);
    }
}
