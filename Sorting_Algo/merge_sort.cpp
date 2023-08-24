#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& a, vector<int>& temp, int left, int mid, int right){
    int i, left_end, temp_pos, size;
    left_end = mid-1;
    temp_pos = left;

    size = right-left+1;

    while((left <= left_end) && (mid <= right)){
        if(a[left] <= a[mid]){
            temp[temp_pos] = a[left];
            left++;
        }
        else{
            temp[temp_pos] = a[mid];
            mid++;
        }
        temp_pos++;
    }

    while(left <= left_end){
        temp[temp_pos] = a[left];
        left++;
        temp_pos++;
    }

    while(mid <= right){
        temp[temp_pos] = a[mid];
        mid++;
        temp_pos++;
    }

    for(int i=0;i<=size;i++){
        a[right] = temp[right];
        right--;
    }
}

void mergeSort(vector<int>& a, vector<int>& temp, int left, int right){
    int mid;
    if(right > left){
        mid = left + (right-left)/2;
        mergeSort(a, temp, left, mid);
        mergeSort(a, temp, mid+1, right);
        merge(a, temp, left, mid+1, right);
    }
}

int main(){
    int n; cin>>n;
    vector<int> a(n,0), temp(n,0);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergeSort(a,temp,0, n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}