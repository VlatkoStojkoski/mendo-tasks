#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int lowest = INT_MAX, lowest_index = -1;

	for (int i = 0; i < n; i++)
	{
		int curr;
		cin >> curr;
		if (curr < lowest)
		{
			lowest = curr;
			lowest_index = i;
		}
	}

	cout << lowest_index + 1 << " " << lowest;

	return 0;
}