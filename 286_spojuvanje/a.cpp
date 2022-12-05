#include <bits/stdc++.h>

using namespace std;

bool sort_numbers(string a, string b)
{
	return stoull(a + b) > stoull(b + a);
}

int main()
{
	int n;
	cin >> n;

	vector<string> B(n);
	for (int i = 0; i < n; i++)
		cin >> B[i];

	sort(B.begin(), B.end(), sort_numbers);

	for (int i = 0; i < n; i++)
		cout << B[i];

	return 0;
}