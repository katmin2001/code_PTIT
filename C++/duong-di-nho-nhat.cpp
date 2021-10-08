#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const bool MULTI_TEST = true;
using namespace std;

int a[N][N];

void solve(){
	int r,c;
	cin >> r >> c;
	for(int i=1;i<=r;i++) for(int j=1;j<=c;j++) cin >> a[i][j];
	
	for(int i=2;i<=r;i++) a[i][1] += a[i-1][1];
	for(int j=2;j<=c;j++) a[1][j] += a[1][j-1];
	
	for(int i=2;i<=r;i++)
		for(int j=2;j<=c;j++)
			a[i][j] += min(min(a[i-1][j],a[i][j-1]),a[i-1][j-1]);
	
	cout << a[r][c] <<endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}
