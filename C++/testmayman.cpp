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
//struct node{
//	int data;
//	node *l;
//	node *r;
//	node(int x){
//		data=x;
//		l=null;
//		r=null;
//	}
//};
//typedef node NODE;
//void noi_node(NODE* &t, int b, char c){
//	if(c=='L') t->l=new NODE(b);
//	if(c=='R') t->r=new NODE(b);
//}
//void tao_tree(NODE* t, inta, int b, char c){
//	if(t==null) return;
//	if(t->data==a) noi_node(t,b,c);
//	tao_tree(t->l,a,b,c);
//	tao_tree(t->r,a,b,c);
//}
//void them_node(NODE* &t, int x){
//	if(t==null){
//		NODE *p=new NODE(x);
//		t=p;
//	}
//	else{
//		if(x<t->data) them_node(t->l,x);
//		if(x>t->data) them_node(t->r,x);
//	}
//}
int a[1005];
int vs[1005];
int n,k;
void sinh(int m){
	if(m>n){
		for(int i=1; i<=n; i++){
			cout<<a[i];
		}
		cout<<" ";
		return;
	}
	for(int i=1; i<=n; i++){
		if(vs[i]==0){
			a[m]=i;
			vs[i]=1;
			sinh(m+1);
			vs[i]=0;
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		sinh(1);
		cout<<endl;
	}
return 0;
}

