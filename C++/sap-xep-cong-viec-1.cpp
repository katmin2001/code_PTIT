#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
struct data{
	int st,fn;
};
data h[1005];
bool cmp(data a, data b){
	return a.fn<b.fn;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=0; i<n; i++){
			cin>>h[i].st;
		}
		for(int i=0; i<n; i++){
			cin>>h[i].fn;
		}
		sort(h,h+n,cmp);
		int d=1,i=0;
		for(int j=1; j<n; j++){
			if(h[j].st>=h[i].fn){
				d++;
				i=j;
			}
		}
		cout<<d<<endl;
	}
return 0;
}

