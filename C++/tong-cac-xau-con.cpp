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
	string s;
	cin >> s;
	int n = s.size();
	ll res = 0;
	for(int i=n-1;i>=0;i--){
		ll tmp = 1;
		for(int j=i;j<n;j++){
			res += tmp*(s[i]-'0')*(i+1);
			tmp*=10;
		}
	}
	cout << res << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
