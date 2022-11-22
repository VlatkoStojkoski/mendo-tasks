#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b)
{
	return a.second > b.second;
}

int main()
{
	int n;
	cin >> n;

	map<string, int> O;

	for (int i = 0; i < n; i++)
	{
		string name;
		cin >> name;

		if (!O[name])
			O[name] = 1;
		else
			O[name]++;
	}

	vector<pair<string, int>> A;
	for (auto &it : O)
		A.push_back(it);
	sort(A.begin(), A.end(), cmp);

	cout << A[0].first;

	return 0;
}