#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;

    vector<int> a(n,0), ans;
    stack<pair<int, int>> st;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        if(st.size() == 0){
            ans.push_back(i+1);
        }
        else if(st.size() > 0 && st.top().first > a[i]){
            int idx = i - st.top().second;
            ans.push_back(idx);
        }
        else if(st.size() > 0 && st.top().first <= a[i]){
            while(st.size() > 0 && st.top().first <= a[i]){
                st.pop();
            }
            if(st.size() == 0) ans.push_back(i+1);
            else{
                int idx = i - st.top().second;
                ans.push_back(idx);
            }
        }
        st.push({a[i],i});
    }

    for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    cout<<endl;
}