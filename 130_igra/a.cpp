#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = -1, curr = 0;
	while (n > 0)
	{
		int x;
		cin >> x;
		curr = x == 1 ? curr + 1 : 0;
		ans = max(ans, curr);
		n--;
	}

	cout << ans;

	return 0;
}