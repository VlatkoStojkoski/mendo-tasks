#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int S[n], highest = -1;

	for (int i = 0; i < n; i++)
	{
		cin >> S[i];
		highest = max(highest, S[i]);
	}

	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res += highest - S[i];
	}

	cout << res;

	return 0;
}