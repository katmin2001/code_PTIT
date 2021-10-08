#include<bits/stdc++.h>
using namespace std;
#define fasten() ios_base::sync_with_stdio(0); cin.tie(); cout.tie()
#define ll long long
#define pb push_back
const ll Mod = 1e9+7;
const int limit = 1e6+7;
ll a[limit], b[limit], c[limit];
int m, n, p;

void solve(){
    cin >> m >> n >> p;
    for(int i = 0; i < m; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < p; i++) cin >> c[i];
    int count = 0;
    int x = 0, y = 0, z = 0;
    while(x <= m && y <= n && z <= p){
        if(a[x] == b[y] && b[y] == c[z]){
            cout << a[x] << " ";
            x++;
            y++;
            z++;
            count++;
        }
        else if(a[x] < b[y]) x++;
        else if(b[y] < c[z]) y++;
        else z++;
    }
    if(count == 0) cout << -1;
    cout << endl;
}

int main(){
    fasten();
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}
//codebyHT
