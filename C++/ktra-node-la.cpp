#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
using namespace std;

struct node{
	int data;
	node *l;
	node *r;
	node(int x){
		data=x;
		l=NULL;
		r=NULL;
	}
};
typedef node NODE;
void noi_node(NODE* &t,int b, char c){
	if(c=='L') t->l = new NODE(b);
	if(c=='R') t->r = new NODE(b);
}
void tao_tree(NODE* t,int a,int b, char c){
	if(t==NULL) return;
	if(t->data==a){
		noi_node(t,b,c);
	}
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
vector <int> v;
void gR(NODE* t, int lv){
	if(t!=NULL){
		if(t->l==NULL&&t->r==NULL) v.pb(lv);
		else{
			gR(t->l,lv+1);
			gR(t->r,lv+1);
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		NODE* t=NULL;
		v.clear();
		while(n--){
			int a,b; char c;
			cin>>a>>b>>c;
			if(t==NULL){
				t=new NODE(a);
				noi_node(t,b,c);
			}
			else tao_tree(t,a,b,c);
		}
		gR(t,0);
		for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
		cout<<endl;
		if(*max_element(all(v)) == *min_element(all(v)))
        cout << 1;
   		else cout << 0;  
   		cout << endl;
	}
return 0;
}

