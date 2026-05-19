#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,Q;
    cin>>n>>Q;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int L=1,S=0;
    int res=0;
    for(int R=1;R<=n;R++){
        S+=a[R];
        if(S>Q){
            S-=a[L];
            L++;
        }
        res=max(res,R-L+1);
    }
    cout<<res;
    return 0;
}
