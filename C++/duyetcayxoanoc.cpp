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
struct node{
	int data;
	node *l;
	node *r;
	node(int x){
		data=x;
		l=null;
		r=null;
	}
};
typedef node NODE;
void noi_node(NODE* &t, int b, char c){
	if(c=='L') t->l=new NODE(b);
	if(c=='R') t->r=new NODE(b);
}
void tao_tree(NODE* t, int a, int b, char c){
	if(t==null) return;
	if(t->data==a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
vector <vector<int>> v;
void gr(NODE *t, int lv){
	if(lv==v.size()) v.pb(vector <int> ());
	if(t!=null){
		v[lv].pb(t->data);
		gr(t->l,lv+1);
		gr(t->r,lv+1);
	}
}
//bool ss(pair<int,int> a, pair <int,int> b){
//	return a.second<b.second;
//}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		v.clear();
		NODE *t=null;
		while(n--){
			int a,b; char c;
			cin>>a>>b>>c;
			if(t==null){
				t= new NODE(a);
				noi_node(t,b,c);
			}
			else tao_tree(t,a,b,c);
		}
		gr(t,0);
		for(int i=0; i<v.size(); i++){
//			if(i%2==1){
				for(int j=0; j<v[i].size(); j++){
					cout<<v[i][j]<<" ";
				}
//			}
//			else for(int j=v[i].size()-1; j>=0; j--){
//				cout<<v[i][j]<<" ";
//			}
		}
		cout<<endl;
	}
return 0;
}

