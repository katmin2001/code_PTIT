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
		
		Duyet_inorder(t->l);
		
		Duyet_inorder(t->r);
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
		int a[n],b[n];
		for(int i=0; i<n; i++){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(a,a+n);
		int x;
		if(n%2==1) x=n/2;
		else x=n/2-1;
		them_node(t,a[x]);
		for(int i=0; i<n; i++){
			if(a[i]==a[x]) continue;
			else{
				them_node(t,a[i]);
			}
		}
		Duyet_inorder(t);
		cout<<endl;
	}
return 0;
}

