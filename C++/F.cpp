#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	iostream::sync_with_stdio(false);
	ll a,b,c;
	cin >> a >> b >> c;
	if (a< b) swap(a,b);
	if (a<c) swap(a,c);
	ll res = (a+b+c)/3;
	if (b+c>=res) cout<< res;
	else cout<<b+c;
	return 0;
}
