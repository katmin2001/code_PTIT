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
void noi_node(NODE* &t,int b, char c){
	if(c=='L') t->l=new NODE(b);
	if(c=='R') t->r=new NODE(b);
}
void tao_tree(NODE* t, int a,int b, char c){
	if(t==null) return;
	if(t->data==a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
bool x;
void gr(NODE* t1,NODE* t2){
	if(t1==null&&t2==null) return;
	if(t1==null||t2==null){
		x=false;
		return;
	}
	x &= t1->data==t2->data;
	gr(t1->l,t2->l);
	gr(t1->r,t2->r);
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int m,n;
		cin>>m;
		NODE* a=null;
		while(m--){
			int x,y; char z;
			cin>>x>>y>>z;
			if(a==null){
				a=new NODE(x);
				noi_node(a,y,z);
			}
			else tao_tree(a,x,y,z);
		}
		NODE* b=null;
		cin>>n;
		while(n--){
			int x,y; char z;
			cin>>x>>y>>z;
			if(b==null){
				b=new NODE(x);
				noi_node(b,y,z);
			}
			else tao_tree(b,x,y,z);
		}
		x=true;
		gr(a,b);
		if(x) cout<<1<<endl;
		else cout<<0<<endl;
	}
return 0;
}
