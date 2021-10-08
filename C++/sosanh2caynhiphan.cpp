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
    bool operator==(node* p){
        return content == p->content;
    }
};

bool b;

void getResult(node* p1,node* p2){
    if(p1 == null && p2 == null) return;
    if(p1 == null || p2 == null){
        b = false;
        return;
    }
    b &= p1->content == p2->content; 
    getResult(p1->left,p2->left) ;
    getResult(p1->right,p2->right);
}

int n;

node* build_tree(){
    cin >> n;
    map <int,node*> m;
    map <node*,node*> parent;
    for(int i=0;i<n;i++){
        int a,b;
        char c;
        cin >> a >> b >> c;
        node* p1 = new node(a);
        node* p2 = new node(b);
        if(m.find(a) != m.end()){
            p1 = m[a];
        }
        if(m.find(b) != m.end()){
            p2 = m[b];
        }
        if(c == 'L')
            p1->left = p2;
        else 
            p1->right = p2;
        parent[p2] = p1;
        if(parent.find(p1) == parent.end())
            parent[p1] = null;
        m[a] = p1;
        m[b] = p2;
    }
    for(auto i:parent){
        if(i.second == null)
            return i.first;
    }
}

void solve(){
    node* tree1 = build_tree();
    node* tree2 = build_tree();
    b = true;
    getResult(tree1,tree2);
    if(b) cout << "YES\n";
    else cout << "NO\n";
}

int main(){
	real_hacker;
    int t;
	t = 1;
	if(MULTI_TEST) cin >> t;
    while(t--){solve();}
    return 0;
}

