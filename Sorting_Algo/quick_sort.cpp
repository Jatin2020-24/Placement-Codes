#include<bits/stdc++.h>

using namespace std;

int partition(vector<int> &v, int lo, int hi){
    int pivot = v[lo];

    int left = lo, right=hi;

    while(left<right){
        while(v[left] <= pivot && left <= hi){
            left++;
        }

        while(v[right] > pivot && right >= lo){
            right--;
        }

        if(left<right) swap(v[left], v[right]);
    }
    
    /* Right is final position for pivot */
    v[lo] = v[right];
    v[right] = pivot;

    return right;
}

void quicksort(vector<int> &v, int lo, int hi){
    if(lo < hi){
        int pivot = partition(v, lo, hi);
        quicksort(v, lo, pivot-1);
        quicksort(v, pivot+1, hi);
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