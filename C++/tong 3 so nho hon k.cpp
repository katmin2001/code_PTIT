#include<bits/stdc++.h>
using namespace std;
 
main () {
	int t;
	cin >> t;
	while (t --) {
		long long n, k;
		cin >> n >> k;
		long long a[n];
		for (long long i = 0; i < n; i ++)
			cin >> a[i];
		sort (a, a + n);
		long long dem = 0;
		for (int i = 0; i < n - 2; i ++) {
			if (a[i] >= k) break;
			for (int j = i + 1; j < n - 1; j ++) {
				if (a[j] >= k) break;
				long long temp = k - a[i] - a[j];
				if (temp <= 0) break;
				long long *p = lower_bound (a + j + 1, a + n, temp);
				if (p != a + n) {
					dem += (p - a) - j - 1;
				} else dem += n - j - 1;
			}
		}
		cout << dem << endl;
	}
}
