#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int mod = (int)1e9+7;
const bool MULTI_TEST = true;
using namespace std;



void solve(){
	ll n;
	cin >>n;
	vector <ll> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	if(n<3){
		cout << *max_element(all(a)) << endl;
		return;
	}
	a[2]+=a[0];
	for(int i=3;i<n;i++) a[i] += max(a[i-2],a[i-3]);
	cout << *max_element(all(a)) << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
