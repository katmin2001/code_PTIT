#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int x;
bool cmp(int m, int n){
	return (abs(x-m)<abs(x-n));
}
void kenzy(){
	int n;
	cin>>n>>x;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	stable_sort(a,a+n,cmp);
	for(int i=0; i<n; i++) cout<<a[i]<<" ";
}
int main(){
//code here tml
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

