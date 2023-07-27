#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &v, int lo, int hi){
    int pivot = v[lo];

    int i = lo, j=hi;

    while(i<j){
        while(v[i] <= pivot && i <= hi){
            i++;
        }

        while(v[i] > pivot && j >= lo){
            j--;
        }

        if(i<j) swap(v[i], v[j]);
    }
    return j;
}

void quicksort(vector<int> &v, int lo, int hi){
    if(lo < hi){
        int pidx = partition(v, lo, hi);
        quicksort(v, lo, pidx-1);
        quicksort(v, pidx+1, hi);
    }
}

int main(){
    int n; cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int lo=0, hi=n-1;
    quicksort(v,lo,hi);

    for(int i=0;i<n;i++) cout<<v[i]<<" ";
}