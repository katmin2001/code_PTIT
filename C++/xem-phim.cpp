#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[k];
    for(int i=0; i<k; i++) cin>>a[i];
    sort(a,a+k);
    int kg=0;
    for(int i=k-1; i>=0; i--){
        if(kg+a[i]>n){
            continue;
        }
        else kg+=a[i];
    }
    cout<<kg<<endl;
}
