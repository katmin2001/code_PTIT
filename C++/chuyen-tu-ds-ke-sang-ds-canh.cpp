#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int n;
	cin>>n;
	cin.ignore();
	vector <int> ke[100];
	string s;
	for(int i=1; i<=n; i++){
		getline(cin,s);
		s+=" ";
		int so=0;
		int j=0;
		while(j<s.size()){
			if(s[j]>='0'&&s[j]<='9'){
				so=10*so+(int)(s[j]-'0');
			}
			else if(so>0){
				ke[i].pb(so);
				so=0;
			}
			j++;
		}
	}
	for(int i=1; i<=n; i++){
		sort(ke[i].begin(),ke[i].end());
	}
	int check[100][100];
	memset(check,0,sizeof(check));
	for(int i=1; i<=n; i++){
		for(int j=0; j<ke[i].size(); j++){
			if(!check[i][ke[i][j]]&&!check[ke[i][j]][i]){
				cout<<i<<" "<<ke[i][j]<<endl;
			}
			check[i][ke[i][j]]=check[ke[i][j]][i]=1;
		}
	}
return 0;
}

