#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll Mod = 1e9+7;
const ll maxValue = 31623 * 1e3;
ll n, m;
vector<ll> prime;
vector<bool> markI(maxValue + 7, 0);

void hashPrime(){
    for(int i = 2; i*i <= maxValue; i++){
		if(!markI[i]){
			for(int j = i * i; j <= maxValue; j += i){
				markI[j] = 1;
			}
		}
	}
	for(int i = 2; i <= maxValue; i++){
		if(!markI[i]) prime.push_back(i);
	}
}

void nhap(vector<ll> &a){
	a.clear();
	ll x;
	for(int i = 0; i < n; i++){
		cin >> x;
		a.push_back(x);
	}
	return;
}

void hashX(vector<ll> &a, map<ll,ll> &mA){
	mA.clear();
	for(int i = 0; i < a.size(); i++){
		if(a[i] == 0){
			mA[0] = 1;
			return;
		}
		a[i] = abs(a[i]);
		for(int j = 0; j < prime.size() && prime[j] <= sqrt(a[i]); j++){
			while(a[i] % prime[j] == 0){
				mA[prime[j]]++;
				a[i] /= prime[j];
			}
		}
		if(a[i] > 1) mA[a[i]]++;
	}
}

bool check(map<ll,ll> &mA, map<ll,ll> &mB){
	if(mA[0]) return true;
	if(mB[0]) return false;
	for(auto i = mB.begin(); i != mB.end(); i++){
		if(mA[i->first] < i->second){
			return false;
		}
	}
	return true;
}

void solve(){
	hashPrime();
	cin >> n >> m;
	vector<ll>a, b, ans;
	map<ll, ll> mA, mB;
	nhap(a);
	hashX(a, mA);
	for(int i = 1; i <= m; i++){
		nhap(b);
		hashX(b, mB);
		if(check(mA, mB)){
			ans.push_back(i);
		}
	}
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
}

int main(){
//	int test;
//	cin >> test;
	int test = 1;
	while(test--){
		solve();
		cout << endl;
	}
	return 0;
}
