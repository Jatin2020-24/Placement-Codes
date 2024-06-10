#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    vector<int> a(n), rmax(n), lmax;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    lmax.push_back(a[0]);
    for(int i=1;i<n;i++){
        int prev = lmax[i-1];
        lmax.push_back(max(prev, a[i]));
    }

    rmax[n-1] = a[n-1];
    for(int i=n-2;i>=0;i--){
        int fwd = rmax[i+1];
        rmax[i] = max(a[i], fwd);
    }

    int ans=0;
    for(int i=0;i<n;i++){
        int diff = min(lmax[i], rmax[i]);
        ans += diff-a[i];
    }
    cout<<ans<<endl;
}