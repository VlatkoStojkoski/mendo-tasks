#include <bits/stdc++.h>

using namespace std;

int main()
{
	map<char, int> B;
	for (int i = 0; i < 26; i++)
	{
		char b;
		int b_val;
		cin >> b >> b_val;
		B[b] = b_val;
		char b_upper = toupper(b);
		B[b_upper] = b_val + 20;
	}

	int n, max_val;
	string max_val_z;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string z;
		cin >> z;

		int val = 0;
		for (int i = 0; i < z.length(); i++)
		{
			val += B[z[i]];
		}

		if (val > max_val)
		{
			max_val = val;
			max_val_z = z;
		}
	}

	cout << max_val_z;

	return 0;
}