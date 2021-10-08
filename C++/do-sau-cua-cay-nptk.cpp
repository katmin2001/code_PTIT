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
void them_node(NODE* &t, int x){
	if(t==null){
		node *p=new NODE(x);
		t=p;
	}
	else{
		if(x<t->data) them_node(t->l,x);
		if(x>t->data) them_node(t->r,x);
	}
}
int dem;
vector <int> v;
void gr(NODE *t,int lv){
	if(t!=null){
		v.pb(lv);
		gr(t->l,lv+1);
		gr(t->r,lv+1);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		v.clear();
		dem=0;
		int n;
		cin>>n;
		NODE *t=null;
		while(n--){
			int x; cin>>x;
			them_node(t,x);
		}
		gr(t,0);
		cout<<*max_element(all(v))<<endl;
	}
return 0;
}

