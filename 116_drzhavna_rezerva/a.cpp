#include <bits/stdc++.h>

using namespace std;

struct producer
{
	int q;
	int p;
};

int main()
{
	int kol, p;
	cin >> kol >> p;

	vector<producer> P(p);

	for (int i = 0; i < p; i++)
		cin >> P[i].p >> P[i].q;

	sort(P.begin(), P.end(), [](producer a, producer b)
			 { return a.p < b.p; });

	producer curr;
	curr.p = 0;
	curr.q = 0;

	while (curr.q < kol)
	{
		int left = kol - curr.q;
		if (P[0].q > left)
		{
			curr.q += left;
			curr.p += left * P[0].p;
			P[0].q -= left;
		}
		else
		{
			curr.q += P[0].q;
			curr.p += P[0].q * P[0].p;
		}
		P.erase(P.begin());
	}

	cout << curr.p << endl;
}