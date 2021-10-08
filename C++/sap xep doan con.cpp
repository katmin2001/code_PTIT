//#include <bits/stdc++.h>
//#define ll long long
//#define pb push_back
//#define maxn 1000005
//using namespace std;
// 
//void kenzy(){
//	int n;
//	cin>>n;
//	ll a[n];
//	int dem=0;
//	for(int i=0; i<n; i++){
//		cin>>a[i];
//	}
//	ll Lmax[n], Rmin[n];
//	Lmax[0]=a[0];
//	for(int i=1; i < n; i++){
//		Lmax[i]=max(a[i],Lmax[i-1]);
//	}
// 
//	Rmin[n-1]=a[n-1];
//	for(int i =n-2; i>=0; i--){
//		Rmin[i]=min(a[i],Rmin[i+1]);
//	}
//	if(a[0] < Rmin[1]) dem++;
//	if(a[n-1] >= Lmax[n-2]) dem++;
//	for(int i=1; i<n-1; i++){
//		if(a[i] >= Lmax[i-1] && a[i] < Rmin[i+1]){
//			dem++;
//		} 
//	}
//	cout<<dem<<endl;
//}
//int main(){
////code here tml
//	int t;
//	cin>>t;
//	while(t--){
//		kenzy();
//	}
//return 0;
//}
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fasten() ios_base::sync_with_stdio(0); cin.tie(); cout.tie()
const ll Mod = 1e9+7;

void solve(){
	int n;
        cin >> n;
        ll a[n], lMax[n], rMin[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        lMax[0] = a[0], rMin[n-1] = a[n-1];
        for(int i = 1; i < n; i++){
            lMax[i] = max(lMax[i-1], a[i]);
        }
        for(int i = n - 2; i >= 0; i--){
            rMin[i] = min(rMin[i+1], a[i]);
        }
        queue<ll> ans;
        for(int i = 0; i < n - 1; i++){
            if(lMax[i] <= rMin[i+1]) ans.push(i+1);
        }
        cout << ans.size() << endl;
        while(!ans.empty()){
            cout << ans.front() << " ";
            ans.pop();
        }
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
