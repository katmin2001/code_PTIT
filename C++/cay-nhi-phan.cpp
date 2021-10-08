#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
int check;
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
void noi_node(NODE* &t, int b, char c){
	if(c=='L') t->l = new NODE(b);
	if(c=='R') t->r = new NODE(b);
}
void tao_tree(NODE* t, int a, int b, char c){
	if(t==NULL) return;
	if(t->data == a) noi_node(t,b,c);
	tao_tree(t->l,a,b,c);
	tao_tree(t->r,a,b,c);
}
//void duyet_NLR(NODE* t){
//	if(t!=NULL){
//		cout<<t->data<<" ";
//		duyet_NLR(t->l);
//		duyet_NLR(t->r);
//	}
//}
//void duyet_LNR(NODE* t){
//	if(t!=NULL){
//		duyet_LNR(t->l);
//		cout<<t->data<<" ";
//		duyet_LNR(t->r);
//	}
//}
//void duyet_LRN(NODE* t){
//	if(t!=NULL){
//		duyet_LRN(t->l);
//		duyet_LRN(t->r);
//		cout<<t->data<<" ";
//	}
//}
void ktra(NODE* t){
	if(t==NULL||check==0) return;
	if((t->l==NULL&&t->r!=NULL)||(t->l!=NULL&&t->r==NULL)) check=0;
	ktra(t->l);
	ktra(t->r);
}

int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!
	int t;
	cin>>t;
	while(t--){
		check=1;
		int n;
		cin>>n;
		NODE* t=NULL;
		while(n--){
			int a,b; char c;
			cin>>a>>b>>c;
			if(t==NULL){
				t=new NODE(a);
				noi_node(t,b,c);
			}
			else tao_tree(t,a,b,c);
		}
		ktra(t);
		cout<<check<<endl;
	}
return 0;
}

