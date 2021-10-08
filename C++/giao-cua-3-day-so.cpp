#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
ll a[100006],b[100005],c[100005];

void kenzy(){
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	for(int i=0; i<n1; i++) cin>>a[i];
	for(int i=0; i<n2; i++) cin>>b[i];
	for(int i=0; i<n3; i++) cin>>c[i];
//	int check1[n1],check2[n2],check3[n3];
//	memset(check1,0,n1);
//	memset(check2,0,n2);
//	memset(check3,0,n3);
//	for(int i=0; i<n1; i++){
//		for(int j=i+1; j<n1; j++){
//			if(a[j]==a[i]) a[j]=-1;
//		}
//	}
//	for(int i=0; i<n2; i++){
//		for(int j=i+1; j<n2; j++){
//			if(b[j]==b[i]) b[j]=-1;
//		}
//	}
//	for(int i=0; i<n2; i++){
//		for(int j=i+1; j<n2; j++){
//			if(c[j]==c[i]) c[j]=-1;
//		}
//	}
	vector <long long> s;
	for(int i=0; i<n1; i++){
		for(int j=0; j<n2; j++){
			if(a[i]==b[j]){
				s.pb(a[i]);
				b[j]=-1;
				break;
			} 
		}
	}
	vector <long long> x;
	for(int i=0; i<s.size(); i++){
		for(int j=0; j<n3; j++){
			if(s[i]==c[j]){
				x.pb(s[i]);
				c[j]=-1;
				break;
			} 
		}
	}
//	for(int i=0; i<s.size(); i++) cout<<s[i]<<" ";
//	cout<<endl;
//	for(int i=0; i<x.size(); i++) cout<<x[i]<<" ";
//	cout<<endl;
	if(x.size()==0) cout<<"NO";
	else{
		for(int i=0; i<x.size(); i++){
			cout<<x[i]<<" ";
		}
	}
	cout<<endl;
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		kenzy();
	}
return 0;
}

