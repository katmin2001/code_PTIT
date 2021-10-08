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
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		int dem=0;
		for(int i=0; i<n; i++){
			int x=i;
			for(int j=i+1; j<n; j++){
				if(a[j]<a[x]) x=j;
			}
			if(x!=i){
				int tmp=a[x];
				a[x]=a[i];
				a[i]=tmp;
				dem++;
			}
		}
		cout<<dem<<endl;
	}
return 0;
}

