#include <bits/stdc++.h>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int a[N];

	vector<int> v;

	for (int i = 0; i < N; i++)
	{
		cin >> a[i];
		if (a[i] == 3)
			v.push_back(i + 1);
	}

	v.push_back(N + 1);

	int MAX = 0;
	for (int i = 0; i <= v.size() - 5; i++)
		MAX = max(MAX, v[i + 4] - v[i] - 1);

	cout << MAX;

	return 0;
}