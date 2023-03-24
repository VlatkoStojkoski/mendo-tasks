#include <bits/stdc++.h>

using namespace std;

int main()
{
	cout.precision(10);

	int n;
	cin >> n;

	vector<pair<double, int>> iminja;
	string M[n];

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		double sum = 0, l = 0;

		for (auto c : s)
		{
			sum += c - 'A';
			l++;
		}

		double avg = sum / l + 0.0000000001 * i;

		M[i] = s;

		pair<double, int> curr = {avg, i};
		iminja.push_back(curr);
	}

	sort(
			iminja.begin(),
			iminja.end(),
			[](pair<double, int> a, pair<double, int> b) -> bool
			{
				return a.first < b.first;
			});

	for (auto pair : iminja)
	{
		cout << M[pair.second] << endl;
	}

	return 0;
}