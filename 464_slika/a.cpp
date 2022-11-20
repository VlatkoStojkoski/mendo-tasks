#include <bits/stdc++.h>

using namespace std;

int main()
{
	int c1 = 0, c2 = 0;

	int curr = -1, w = -1, h = -1;
	while (curr < 3)
	{
		cin >> curr;

		if (curr == 1)
			c1++;

		if (curr == 2)
		{
			if (c2 == 0)
			{
				w = c1 - 1;
			}
			c2++;
		}
	}
	h = c2 / (w - 2) + 2;

	cout << h << " " << w;

	return 0;
}