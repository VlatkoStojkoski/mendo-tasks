#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int global_arch = 0, nums = 0;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		int arch = 0;
		for (int j = num; j > 0; j /= 10)
		{
			int curr = j % 10;
			if (curr % 2 == 0)
				arch++;
			else
			{
				arch = 0;
				break;
			}
		}
		if (arch > 0)
			nums++;
		global_arch += arch;
	}

	cout << nums << endl
			 << global_arch;

	return 0;
}