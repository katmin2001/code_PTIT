#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
#define mp make_pair
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
		sort(a,a+n);
		int check=1;
		for(int i=0; i<n; i++){
			if(a[i]!=b[i]){
				check=0;
				break;
			}
		}
		cout<<check<<endl;
	}
return 0;
}

