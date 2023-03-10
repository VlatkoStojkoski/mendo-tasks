#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<int> K(n);
	for (int i = 0; i < n; i++)
		cin >> K[i];

	sort(K.begin(), K.end(), greater<int>());

	int ans = 0;
	for (int i = 0; i < n; i += m)
	{
		ans += K[i] * 2;
	}

	cout << ans << endl;

	return 0;
}
