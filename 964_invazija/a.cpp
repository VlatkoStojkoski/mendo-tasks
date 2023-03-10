#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
	ll N, K, MIN = 10000000001, t;
	cin >> N;

	set<ll> s;
	set<ll>::iterator it, prev, next;

	for (int i = 0; i < N; i++)
	{
		cin >> t;
		if (t == 1)
		{
			cin >> K;
			s.insert(K);
			prev = s.find(K);
			next = prev;

			if (prev != s.begin())
			{
				prev--;
				MIN = min(MIN, K - *prev);
			}

			next++;
			if (next != s.end())
				MIN = min(MIN, *next - K);
		}
		else
			cout << MIN << " ";
	}

	return 0;
}