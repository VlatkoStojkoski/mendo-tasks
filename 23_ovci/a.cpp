#include <bits/stdc++.h>

using namespace std;

const int MAX_GRID_SIZE = 251;

char IN_G[MAX_GRID_SIZE][MAX_GRID_SIZE];
int G[MAX_GRID_SIZE][MAX_GRID_SIZE];
int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};

int r, c;

vector<pair<int, int>> valid_moves(int x, int y)
{
	vector<pair<int, int>> moves;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < r && nx >= 0 && ny < c && ny >= 0 && IN_G[nx][ny] != '#' && G[nx][ny] == 0)
			moves.push_back({nx, ny});
	}

	return moves;
}

void set_all_G(int x)
{
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			G[i][j] = x;
}

vector<int> spaces;

struct Space
{
	int o; // ovci
	int v; // volci
	int p; // prazni
	int mark;
};

Space generate_space(pair<int, int> start, int mark)
{
	Space res;
	res.o = 0;
	res.v = 0;
	res.p = 0;
	res.mark = mark;

	queue<pair<int, int>> q;
	q.push(start);

	if (IN_G[start.first][start.second] != '#')
	{
		G[start.first][start.second] = mark;

		switch (IN_G[start.first][start.second])
		{
		case 'v':
			res.v++;
			break;
		case 'o':
			res.o++;
			break;
		case '.':
			res.p++;
			break;
		}
	}

	while (!q.empty())
	{
		pair<int, int> node = q.front();
		int node_x = node.first, node_y = node.second;
		q.pop();

		vector<pair<int, int>> moves = valid_moves(node_x, node_y);
		for (pair<int, int> move : moves)
		{
			int move_x = move.first, move_y = move.second;

			if (G[move_x][move_y] != 0)
				continue;

			if (IN_G[move_x][move_y] == 'o')
				res.o++;
			else if (IN_G[move_x][move_y] == 'v')
				res.v++;
			else if (IN_G[move_x][move_y] == '.')
				res.p++;

			G[move_x][move_y] = mark;
			q.push({move_x, move_y});
		}
	}

	return res;
}

int main()
{
	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			char c;
			cin >> c;

			IN_G[i][j] = c;
		}
	}

	set_all_G(0);

	int mark = 1, pO = 0, pV = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (IN_G[i][j] == '#' || G[i][j] != 0)
				continue;

			Space s = generate_space({i, j}, mark);
			mark++;

			if (s.o <= s.v)
				pV += s.v;
			else
				pO += s.o;
		}
	}

	cout << pO << ' ' << pV << endl;

	// for (int i = 0; i < r; i++)
	// {
	// 	for (int j = 0; j < r; j++)
	// 	{
	// 		cout << G[i][j] << ' ';
	// 	}
	// 	cout << endl;
	// }

	return 0;
}