#include <bits/stdc++.h>

using namespace std;

vector<int> M;

bool is_all_zeroes()
{
	for (int i = 0; i < M.size(); i++)
		if (M[i] <= 0)
			return false;
	return true;
}

int main()
{
	int n;
	cin >> n;

	M.resize(n);
	vector<int> A(n);

	for (int i = 0; i < n; i++)
		cin >> A[i];

	for (int i = 0; i < n; i++)
	{
		int curr;
		cin >> curr;
		M[i] = curr - A[i];
	}

	int intervals = 0;
	while (!is_all_zeroes())
	{
		for (int i = 0; i < n; i++)
		{
			if (M[i] == 0 || i + 1 == n)
			{
				intervals++;
				continue;
			}

			M[i]--;
		}
	}

	cout << intervals;

	return 0;
}