#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int n,k;
int a1[100000],vs[100000],a2[100000];
void npdq(int m){
	if(m>n){
		for(int i=1; i<=n; i++){
			cout<<a2[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=0; i<=1; i++){
		a2[m]=i;
		npdq(m+1);
	}
}
void hvdq(int m){
	if(m>n){
		for(int i=1; i<=n; i++){
			if(a1[i]==1) cout<<'A';
			else if(a1[i]==2) cout<<'B';
			else if(a1[i]==3) cout<<'C';
			else if(a1[i]==4) cout<<'D';
			else if(a1[i]==5) cout<<'E';
		}
		cout<<endl;
		return;
	}
	for(int i=1; i<=n; i++){
		if(vs[i]==0){
			a1[m]=i; vs[i]=1;
			hvdq(m+1);
			vs[i]=0;
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	cin>>n;
	hvdq(1);
	npdq(1);
return 0;
}

