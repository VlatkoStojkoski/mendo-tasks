#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	bool is_aritmeticka = c - b == b - a;

	if (is_aritmeticka)
		cout << c + (c - b);
	else
		cout << c * (c / b);

	return 0;
}