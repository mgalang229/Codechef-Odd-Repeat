#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, k, s;
		cin >> n >> k >> s;
		// view the image in this repository for derivation of formula
		cout << (s - n * n) / (k - 1) << '\n';
	}
	return 0;
}
