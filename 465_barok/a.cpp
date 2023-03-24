#include <bits/stdc++.h>

using namespace std;

const int MAX_N = 1001;
const int MAX_MONTH = 100001;

int l, w; // rows, cols
int months[MAX_N][MAX_N];

vector<pair<int, int>> valid_moves(int x, int y)
{
	vector<pair<int, int>> res;

	if (x + 1 < l && months[x + 1][y] == MAX_MONTH)
		res.push_back({x + 1, y});

	if (y + 1 < w && months[x][y + 1] == MAX_MONTH)
		res.push_back({x, y + 1});

	if (x - 1 >= 0 && months[x - 1][y] == MAX_MONTH)
		res.push_back({x - 1, y});

	if (y - 1 >= 0 && months[x][y - 1] == MAX_MONTH)
		res.push_back({x, y - 1});

	return res;
}

int solve(vector<pair<int, int>> starts, int b)
{
	int max_month = -1, izgradeni = 0;

	queue<pair<int, int>> q;

	for (int i = 0; i < l; i++)
	{
		for (int j = 0; j < w; j++)
		{
			months[i][j] = MAX_MONTH;
		}
	}

	for (auto start : starts)
	{
		q.push({start.first, start.second});
		months[start.first][start.second] = 0;
		izgradeni++;
	}

	while (!q.empty())
	{
		pair<int, int> node = q.front();
		q.pop();

		int node_x = node.first, node_y = node.second;

		vector<pair<int, int>> moves = valid_moves(node_x, node_y);

		for (auto move : moves)
		{
			if (izgradeni + 1 >= b)
				return max_month;

			int move_x = move.first, move_y = move.second;

			int next_month = months[node_x][node_y] + 1;

			if (months[move_x][move_y] > next_month)
			{
				months[move_x][move_y] = next_month;
				max_month = max(max_month, next_month);
				izgradeni++;
			}

			q.push({move_x, move_y});
		}
	}

	return max_month;
}

int main()
{
	cin >> l >> w;

	int b;
	cin >> b;

	int n;
	cin >> n;
	vector<pair<int, int>> S(n);
	for (int i = 0; i < n; i++)
	{
		int sx, sy;
		cin >> sx >> sy;
		S[i] = {sx - 1, sy - 1};
	}

	cout << solve(S, b);

	// for (int i = 0; i < l; i++)
	// {
	// 	for (int j = 0; j < w; j++)
	// 	{
	// 		cout << months[i][j] << ' ';
	// 	}
	// 	cout << endl;
	// }

	return 0;
}