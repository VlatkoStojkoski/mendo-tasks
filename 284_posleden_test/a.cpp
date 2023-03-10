#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	cin >> k;

	int t1, t2, t3, t4;
	cin >> t1 >> t2 >> t3 >> t4;

	double sum = t1 + t2 + t3 + t4, avg = sum / 4;

	for (int points = 0; points <= 100; points++)
	{
		double currAvg = (sum + points) / 5;

		if (currAvg < 60 && k == 1)
		{
			cout << points;
			return 0;
		}
		else if (currAvg >= 60 && currAvg < 70 && k <= 2)
		{
			cout << points;
			return 0;
		}
		else if (currAvg >= 70 && currAvg < 80 && k <= 3)
		{
			cout << points;
			return 0;
		}
		else if (currAvg >= 80 && currAvg < 90 && k <= 4)
		{
			cout << points;
			return 0;
		}
		else if (currAvg >= 90 && k <= 5)
		{
			cout << points;
			return 0;
		}
	}

	cout << "GRESHKA";

	return 0;
}