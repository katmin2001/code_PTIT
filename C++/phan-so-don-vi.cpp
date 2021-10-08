#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	ll tu,mau;
	while(t--){
		cin>>tu>>mau;
		ll res;
		while(1){
			if(mau%tu==0){
				cout<<"1/"<<mau/tu<<endl;
				break;
			}
			else{
				res=mau/tu+1;
				cout<<"1/"<<res<<" + ";
				tu=tu*res-mau;
				mau=mau*res;
			}
		}
	}
return 0;
}

