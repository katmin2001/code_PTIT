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
	int n;
	cin >> n;
	int a[n],inc[n],dec[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
		inc[i] = dec[i] = a[i];
	}
	inc[0] = a[0];
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]>a[j]) inc[i] = max(inc[i],inc[j]+a[i]);
		}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) dec[i] = max(dec[i],dec[j]+a[i]);
		}
	}
	int res = 0;
	for(int i=0;i<n;i++)
		res = max(res,inc[i]+dec[i]-a[i]);
	cout << res <<endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
