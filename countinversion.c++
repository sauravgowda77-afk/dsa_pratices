#include <bits/stdc++.h>
using namespace std;

// find the pairs where thw left is greater than right like {left,right}



// brute force
void pattern(vector<int>arr,int n){
    int maxi = 0;    
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j < n;j++){
            if(arr[i] > arr[j]){
                maxi++;
            }
        }
    }
    cout<<maxi;
}

// optimal approach using merge sort
int mergesorting(vector<int>&arr,int left,int mid,int high){
    vector<int>temp;
    int low = left;
    int right = mid+1;
    int cnt = 0;
    
    while(right <= high && low <= mid){
        if(arr[low] < arr[right]){
            temp.push_back(arr[low]);
            low++;
        }
        else{
            temp.push_back(arr[right]);
            cnt += (mid - low + 1);
            right++;
        }
    }
    while(low <= mid){
        temp.push_back(arr[low]);
        low++;
    }
    while(right <= high){
         temp.push_back(arr[right]);
            right++;
    }
    for(int i =left;i<=high;i++){
        arr[i] = temp[i-left];
    }
    return cnt;
}
int mergesort(vector<int>&arr,int left,int high){
  int mid = left + (high-left)/2;
  int cnt = 0;
  if(left >= high){
      return cnt;
  }
 cnt += mergesort(arr,left,mid);
 cnt += mergesort(arr,mid+1,high);
 cnt += mergesorting(arr,left,mid,high);
 
 return cnt;
}

int main() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i =0;i<n;i++){
       cin>>arr[i];
   }
   pattern(arr,n);
}
