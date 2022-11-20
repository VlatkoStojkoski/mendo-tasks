#include <bits/stdc++.h>

using namespace std;

bool is_digits_ordered(int n)
{
	int prev = INT_MAX;
	for (int i = n; i > 0; i /= 10)
	{
		int curr = i % 10;
		if (curr >= prev)
			return false;
		prev = curr;
	}
	return true;
}

int main()
{
	int l, r;
	cin >> l >> r;

	int ordered = 0;
	for (int i = l; i <= r; i++)
	{
		if (is_digits_ordered(i))
			ordered++;
	}
	cout << ordered;

	return 0;
}