#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int max=b[n-1], MIN=b[0];
		int vtMIN=0,vtmax=0;
		for(int i=0; i<n; i++){
			if(a[i]==MIN) vtMIN=i;
			if(a[i]==max) vtmax=i;
		}
		int delta=abs(vtMIN-vtmax);
		int dem=0;
		if(delta>n/2){
			if(vtMIN<vtmax){
				dem=vtMIN+1+(n-vtmax);
			}
			else dem=vtmax+1+(n-vtMIN);
		}
		else{
			if(vtMIN<vtmax){
				if(vtMIN<n-1-vtmax) dem=vtmax+1;
				else dem=n-vtMIN;
				int dem1=vtMIN+1+n-vtmax;
				dem=min(dem,dem1);
			}
			else{
				if(vtmax<n-1-vtMIN) dem=vtMIN+1;
				else dem=n-vtmax;
				int dem1=vtmax+1+n-vtMIN;
				dem=min(dem,dem1);
			}
				
		}
		cout<<dem<<endl;
	}
return 0;
}

