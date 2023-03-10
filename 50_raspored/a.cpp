#include <bits/stdc++.h>

using namespace std;

int main()
{
	int g, n, m;
	cin >> g >> n >> m;

	vector<int> nedovolno, dovolno, prostor;

	for (int i = 0; i < g; i++)
	{
		int x;
		cin >> x;

		if (x < n)
		{
			nedovolno.push_back(n - x);
		}
		else if (x > m)
		{
			dovolno.push_back(x - n);
		}
		else
		{
			prostor.push_back(m - x);
		}
	}

	int moved = 0;

	for (int i = 0; i < dovolno.size(); i++)
	{
		for ()
	}

	return 0;
}
