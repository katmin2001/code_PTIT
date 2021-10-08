#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
struct data{
	int val,count;
};
bool cmp(data a,data b){
	if(a.count>b.count) return true;
	if(a.count==b.count&&a.val<b.val) return true;
	return false;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		data a[n];
		int d[100001]={0};
		for(int i=0; i<n; i++){
			cin>>a[i].val;
			d[a[i].val]++;
		}
		for(int i=0; i<n; i++){
			a[i].count=d[a[i].val];
		}
		sort(a,a+n,cmp);
		for(int i=0; i<n; i++){
			cout<<a[i].val<<" ";
		}
		cout<<endl;
	}
return 0;
}

