#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// start the from the second to the last element
		for (int i = n - 2; i >= 0; i--) {
			// the current value depends on the maximum between the 
			// current value and the previous value subtracted by 1
			a[i] = max(a[i], max(0, a[i + 1] - 1));
		}
		for (int i = 0; i < n; i++) {
			cout << (a[i] > 0 ? 1 : 0) << " ";
		}
		cout << '\n';
	}
	return 0;
}
