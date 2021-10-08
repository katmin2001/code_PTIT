#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define maxn 1000005
using namespace std;
struct node{
	int data;
	node *pleft, *pright;
};
typedef node* tree;
void init(tree &t){
	t=nullptr;
}
node* get_node(int data){
	node *p=new node();
	p->data=data;
	p->pleft=nullptr;
	p->pright=nullptr;
	return p;
}
void insert(tree &t, node *p){
	char x;
	cin>>x;
	if(t==nullptr){
		t=p;
	}
	else{
		if(x=='L'){
			return insert(t->pleft,p);
		}
		else if(x=='R'){
			return insert(t->pright,p);
		}
	}
}
//void input(tree &t){
//	init(t);
//	int data;
//	while(cin>>data){
//		if(data!=0){
//			insert(t,get_node(data));
//		}
//		else break;
//	}
//}
void input(tree &t){
	init(t);
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		int u;
		int x=1;
		while(cin>>u){
			if(x>2) break;
			insert(t,get_node(u));
		}
		
	}

}
void duyetcaytheochieurong(tree t){
	if(t!= nullptr){
		queue<tree> a;
		a.push(t);
		while(!a.empty()){
			node *p=a.front();
			cout<<p->data<<" ";
			a.pop();
			if(p->pleft!=nullptr){
				a.push(p->pleft);
			}
			if(p->pright!=nullptr){
				a.push(p->pright);
			}
		}
	}
}
int main(){
//By Kenzy :v Don't copy plzzz !! Tks !!2

	tree t;
	input(t);
	duyetcaytheochieurong(t);
return 0;
}

