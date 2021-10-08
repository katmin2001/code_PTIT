#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
void kenzy(){
	int n;
	cin>>n;
	int a[n];
	bool ktd=false;
	int max;
	ll x=0;
	for(int i=0; i<n; i++){
		cin>>a[i];
		x+=abs(a[i]);
		if(a[i]>0) ktd=true;
		if(i==0) max=a[0];
		else{
			if(max<a[i]) max=a[i];
		}
	}
	if(ktd==false) cout<<max<<endl;
	else{
		int s=0, res=a[0];
		for(int i=0; i<n; i++){
			if(s+a[i]<0){
				s=0;
				continue;
			}
			s+=a[i];
			if(res<s) res=s;
		}
		cout<<res<<endl;
	}
	
}
int main(){
//code here tml
	int t;
	t=1;
	while(t--){
		kenzy();
	}
return 0;
}

