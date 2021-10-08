#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,x;
void kenzy(){
		cin>>n;
		vector <ll> s;
		for(int i=0; i<n; i++){
			cin>>x;
			s.pb(x);
		}
		int rmax[n], lmin[n];
		
		
		
		lmin[0]=1;
		for(int i=1; i<n; i++){
			int tmp=1;
			for(int j=i-1; j>=0; j--){
				if(s[j]<s[j+1]) tmp++;
				else break;
			}
			lmin[i]=tmp;
		}
		
		
		
		rmax[n-1]=1;
		for(int i=n-2; i>=0; i--){
			int tmp=1;
			for(int j=i+1; j<n; j++){
				if(s[j-1]>s[j]) tmp++;
				else break;
			}
			rmax[i]=tmp;
		}
		
		int res=0;
		for(int i=0; i<n; i++){
			if(rmax[i]+lmin[i]-1>res) res=rmax[i]+lmin[i]-1;
		}
		cout<<res;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		kenzy();
		cout<<endl;
	}
return 0;
}

