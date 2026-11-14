#include <bits/stdc++.h>
using namespace std;

// lower bound serach for the elemnt index which is smallest elemnt and staisfy the arr[i] >= x condition 

// you can also use
// int lb = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
void pattern(vector<int>& arr,int n,int x){
   int ans = n;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid - 1;
        }
        else{
           low = mid + 1;
        }
    }
    cout<<ans;
}

int main() {
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i =0;i<n;i++){
      cin>>arr[i];
  }
  int x;
  cin>>x;
  pattern(arr,n,x);
}