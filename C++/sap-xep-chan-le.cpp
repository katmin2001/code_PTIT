#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	vector <int> s1;
	vector <int> s2;
	for(int i=1; i<=n; i++){
		if(i%2==1) s1.pb(a[i]);
		else s2.pb(a[i]);
	}
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	reverse(s2.begin(),s2.end());
	if(n%2==0){
		for(int i=0; i<n/2; i++){
			cout<<s1[i]<<" "<<s2[i]<<" ";
		}
	}
	else{
		for(int i=0; i<n/2; i++){
			cout<<s1[i]<<" "<<s2[i]<<" ";
		}
		cout<<s1[n/2];
	}
return 0;
}

