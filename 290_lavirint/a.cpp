#include <bits/stdc++.h>

using namespace std;

char mat[305][305];
int N, M;
pair<int, int> start, kraj;
int dist[305][305];
bool vis[305][305];

int DFS()
{
	stack<pair<pair<int, int>, int>> s;
	s.push(start, 1);

	dist[start.first][start.second] = 0;

	memset(vis, 0, sizeof(vis));

	while (!s.empty())
	{
		auto node = s.top();
		s.pop();

		if (vis[node.first.first][node.first.second])
			continue;
		vis[node.first][node.second] = true;

		for (int i = 0; i < 4; i++)
		{
			if (!vis[next.first][next.second])
			{
				s.push(next);
				dist[next.first][next.second] = dist[node.first][node.second] + 1;
			}
		}
	}

	return dist[kraj.first][kraj.second];
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> mat[i][j];
			if (mat[i][j] == 'P')
				start = {i, j};
			if (mat[i][j] == 'K')
				kraj = {i, j};
		}
	}
}