#include <bits/stdc++.h>
#define real_hacker ios_base::sync_with_stdio(false)
#define pb push_back
#define ll long long
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pii pair<int, int>
#define null NULL
const int N = 1005;
const int MOD = (int)1e9+7;
const bool MULTI_TEST = true;
using namespace std;

struct node{
    int content;
    node* left;
    node* right;
    node(int c):content(c),left(null),right(null){}
};

bool b;
int n;

void insert(node* &p,int parent,int value,char c){
    if(p!=null){
        if(p->content == parent){
            if(c == 'L') p->left = new node(value);
            else p->right = new node(value);
        }
        insert(p->left,parent,value,c);
        insert(p->right,parent,value,c);
    }
}

node* build_tree(){
    int n;
    cin >> n;
    int a,b;
    char c;
    cin >> a >> b >> c;
    node* root = new node(a);
    insert(root,a,b,c);
    for(int i=1;i<n;i++){
        cin >> a >> b >> c;
        insert(root,a,b,c);
    }
    return root;
}
void duyetcaytheochieurong(node* t){
	if(t!= nullptr){
		queue<node*> a;
		a.push(t);
		while(!a.empty()){
			node *p=a.front();
			cout<<p->content<<" ";
			a.pop();
			if(p->left!=nullptr){
				a.push(p->left);
			}
			if(p->right!=nullptr){
				a.push(p->right);
			}
		}
	}
}

void solve(){
    node* tree = build_tree();
    duyetcaytheochieurong(tree);
    cout<<endl;
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

