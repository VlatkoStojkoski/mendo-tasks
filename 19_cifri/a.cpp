#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int K, N = s.size();
	cin >> K;

	int niza[N];
	long long int res = 0;

	for (int i = 0; i < N; i++)
		niza[i] = s[i] - '0';

	for (int i = 0; i < (1 << N); i++)
	{
		vector<int> v;
		for (int j = 0; j < N; j++)
		{
			if ((i & (1 << j)) != 0)
				v.push_back(niza[j]);
		}

		if (v.size() == N - K)
		{
			long long int pom = 0;
			for (int j = 0; j < v.size(); j++)
			{
				pom *= 10;
				pom += v[j];
			}

			if (pom > res)
				res = pom;
		}
	}

	cout << res;

	return 0;
}