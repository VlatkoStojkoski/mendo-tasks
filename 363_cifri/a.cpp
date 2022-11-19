#include <bits/stdc++.h>

using namespace std;

int main()
{
	int s, k;
	cin >> s >> k;

	// s = 767;
	// k = 772;

	int C[10] = {0};

	for (int i = s; i <= k; i++)
	{
		for (int j = i; j > 0; j /= 10)
		{
			int curr = j % 10;
			// cout << curr << " ";
			C[curr]++;
		}
		// cout << endl;
	}

	for (int i = 0; i < 10; i++)
		cout << C[i] << " ";

	return 0;
}