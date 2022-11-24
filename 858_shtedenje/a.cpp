#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k, m = 0, kP, mP;
	cin >> k >> kP >> mP;

	int days = 0;
	while (k > m)
	{
		k += kP;
		m += mP;
		days++;
	}

	if (k == m)
		cout << days;
	else
		cout << "NE";

	return 0;
}