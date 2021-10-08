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
		NODE *p = new NODE(x);
		t=p;
	}
	else{
		if(x<t->data) them_node(t->l,x);
		if(x>t->data) them_node(t->r,x);
	}
}
void Duyet_inorder(NODE *t){
	if(t!=null){
		cout<<t->data<<" ";
		Duyet_inorder(t->l);
		Duyet_inorder(t->r);
	}
}
void DuyetLRN(NODE *t){
	if(t!=null){
		
		DuyetLRN(t->l);
		
		DuyetLRN(t->r);
		cout<<t->data<<" ";
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		NODE *t=null;
		int n;
		cin>>n;
		while(n--){
			int x;
			cin>>x;
			them_node(t,x);
		}
		DuyetLRN(t);
		cout<<endl;
	}
return 0;
}

