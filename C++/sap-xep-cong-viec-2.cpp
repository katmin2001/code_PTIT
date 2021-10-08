#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
struct data{
	int stt,dl,pr;
};
bool cmp(data a, data b){
	return a.pr>b.pr;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		data a[n];
		for(int i=0; i<n; i++){
			cin>>a[i].stt>>a[i].dl>>a[i].pr;
		}
		sort(a,a+n,cmp);
		int f[1001]={0};
		int d=0,res=0;
		for(int i=0; i<n; i++){
			while(f[a[i].dl]&&a[i].dl>0) a[i].dl--;
			if(!f[a[i].dl]&&a[i].dl>0){
				f[a[i].dl]=1;
				res+=a[i].pr;
				d++;
			}
		}
		cout<<d<<" "<<res;
		cout<<endl;
	}
return 0;
}

