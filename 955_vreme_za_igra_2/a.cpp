#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int vreme = x;
	for (int i = 2; i <= n; i++)
	{
		vreme += x * i;
	}

	cout << vreme;

	return 0;
}