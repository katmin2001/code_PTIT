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
		if(x>t->data) them_node(t->r,x);
		if(x<t->data) them_node(t->l,x);
	}
}
int dem;
void gr(NODE *t){
	if(t!=null){
		if(t->l!=null||t->r!=null){
			dem++;
		}
		gr(t->l);
		gr(t->r);
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		dem=0;
		int n;
		cin>>n;
		NODE *t=null;
		while(n--){
			int x; cin>>x;
			them_node(t,x);
		}
		gr(t);
		cout<<dem<<endl;
	}
return 0;
}

