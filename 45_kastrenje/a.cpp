#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<string> Z(n);

	for (int i = 0; i < n; i++)
		cin >> Z[i];

	for (int i = 0; i < n; i++)
	{
		string i_string = Z[i];
		int min_prefix = 0;

		for (int j = 0; j < n; j++)
		{
			string j_string = Z[j];

			if (j == i)
				continue;

			for (int m = 0; m < j_string.length(); m++)
				if (j_string[m] == i_string[m])
					min_prefix = max(m + 1, min_prefix);
				else
					break;
		}

		for (int j = 0; j <= min_prefix; j++)
			cout << i_string[j];

		cout << endl;
	}

	return 0;
}