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
		int a[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
		}
		vector<int>s1;
		for(int i=0; i<n; i++){
			for(int j=i+1; j<n; j++){
				if(a[j]<=a[i]){
					s1.pb(a[j]);
					break;
				}
			}
		}
		vector<int>s2;
		for(int i=n-1; i>=0; i--){
			for(int j=i-1; j>=0; j--){
				if(a[j]<=a[i]){
					s2.pb(a[j]);
					break;
				}
			}
		}
//		for(int i=0; i<s1.size(); i++){
//			cout<<s1[i]<<" ";
//		}
//		cout<<endl;
//		for(int i=0; i<s2.size(); i++){
//			cout<<s2[i]<<" ";
//		}
	}
return 0;
}

