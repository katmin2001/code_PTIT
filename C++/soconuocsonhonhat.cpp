#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
#define INF 1e18
using namespace std;

int n,pr[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53};
ll ans;
void uoc(int dep,int cnt,ll res)
{
    if(cnt > n)
        return;
    if(cnt == n){
        ans = min(ans,res);
        return ;
    }
    for(int i = 1;i <= 63;++i){
        if(res > ans/pr[dep])
            break;
        uoc(dep+1,cnt*(i+1),res *= pr[dep]);
    }
}
int main(){
	int t;cin>>t;
	while(t--) {
		ans = INF;
		cin>>n;
		uoc(0,1,1);
		cout<<ans<<endl;
	}
    return 0;
}

