#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void solve(){
	int n;
	cin>>n;
	long long a[n + 1], b[n + 1], c[n + 1], max[n + 1], min[n + 1];
	for(int i = 1; i <= n; i++){
		cin>>a[i];
		b[i] = a[i];
	} 
//	sort(a + 1, a + n + 1);
	max[1] = a[1];
	min[n] = a[n];
	for(int i = 2; i <= n; i++) if(a[i] > max[i - 1]) max[i] = a[i];
		else max[i] = max[i - 1];
	for(int i = n - 1; i >= 1; i--) if(a[i] < min[i + 1]) min[i] = a[i];
		else min[i] = min[i + 1];
	
	int dem = 0;
	for(int i = 1; i <= n - 1; i++) if(max[i] <= min[i + 1]){
		dem++;
		c[dem] = i;
	}
	cout<<dem<<endl;
	for(int i = 1; i <= dem; i++) cout<<c[i]<<" ";
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}
