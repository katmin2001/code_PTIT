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
void tao_tree(NODE* t, int a, int b, char c){
	if(t==null) return;
	if(t->data==a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
int sum;
void gr(NODE* t, char c){
	if(t!=null){
		if(t->l==null&&t->r==null&&c=='R') sum+=t->data;
		gr(t->l,'L');
		gr(t->r,'R');
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		sum=0;
		int n;
		cin>>n;
		NODE* t=null;
		while(n--){
			int a,b; char c;
			cin>>a>>b>>c;
			if(t==null){
				t=new NODE(a);
				noi_node(t,b,c);
			}
			else tao_tree(t,a,b,c);
		}
		gr(t,'L');
		cout<<sum<<endl;
	}
return 0;
}

