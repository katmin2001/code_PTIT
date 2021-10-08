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

struct Data{
	int x;
	int y;
};

int cmp(Data a, Data b){
	return a.y < b.y;
}

void solve(){
	int n;
	cin >> n;
	Data a[n];
	for(int i=0;i<n;i++) cin >> a[i].x >> a[i].y;
	sort(a,a+n,cmp);
	vector <int> dp(n,1);
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[i].x > a[j].y) dp[i] = max(dp[i],dp[j]+1);
		}
	}
	cout << *max_element(all(dp)) << endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
