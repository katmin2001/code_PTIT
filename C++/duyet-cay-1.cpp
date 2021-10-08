
#include <bits/stdc++.h>
#define mp make_pair
using namespace std;
int pre_id=0;
int m[10009];
void postorder(int inorder[], int preorder[],int start,int end,int m[])
{
    if(start>end) return;
    int id = m[preorder[pre_id++]];
    postorder(inorder,preorder,start,id-1,m);
    postorder(inorder,preorder,id+1,end,m);
    cout<<inorder[id]<<" ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin>>t;
    while(t--)
    {
        pre_id=0;
        int n;
        cin>>n;
        int  inorder[n];
        int preorder[n];
        int a;
        memset(m,0,sizeof(m));
        for(int i=0;i<n;i++)
        {
            cin>>inorder[i];
            m[inorder[i]]=i;
        }
        for(int i=0;i<n;i++) cin>>preorder[i];
        postorder(inorder,preorder,0,n-1,m);
        cout<<endl;
    }

    return 0;
}
