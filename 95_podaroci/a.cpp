#include <bits/stdc++.h>

using namespace std;

int main()
{
	int d, s, n;

	cin >> d >> s >> n;

	queue<array<int, 2>> R;

	for (int i = 0; i < n; i++)
	{
		int D, S;
		cin >> D >> S;

		bool isAns = false;

		if (D <= d && S <= s)
			isAns = true;
		else if (D > d && D <= s && S <= d)
			isAns = true;
		else if (S > s && S <= d && D <= s)
			isAns = true;

		if (isAns)
			R.push({D, S});
	}

	cout << R.size() << endl;

	while (!R.empty())
	{
		cout << R.front()[0] << ' ' << R.front()[1] << endl;
		R.pop();
	}

	return 0;
}
