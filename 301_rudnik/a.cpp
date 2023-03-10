#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5000;

int n;
vector<int> D[MAXN];
vector<int> R[MAXN];

void dfs(int u)
{
	R[u].push_back(u);
	for (auto e : D[u])
	{
		dfs(e);
		for (auto uniq : R[e])
		{
			R[u].push_back(uniq);
		}
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		D[a].push_back(b);
	}

	dfs(1);

	for (int i = 1; i <= n; i++)
	{
		cout << i << ": ";
		for (auto uniq : R[i])
			cout << uniq << ' ';
		cout << endl;
	}
}