#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c0 = 0, c5 = 0;

	for (int i = 0; i < 4; i++)
	{
		int curr;
		cin >> curr;
		if (curr == 0)
			c0++;
		else
			c5++;
	}

	cout << 4 - max(c0, c5);

	return 0;
}
