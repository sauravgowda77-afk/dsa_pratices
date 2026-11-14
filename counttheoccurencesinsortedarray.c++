#include <bits/stdc++.h>
using namespace std;

int pattern(vector<int>& arr,int n,int target){
    int lb = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    int up = upper_bound(arr.begin(), arr.end(), target) - arr.begin();
    if(arr[lb] != target) return -1;
    
    int cnt = up-lb;
    return cnt;
}

int main() {
   int n ;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++){
      cin>>arr[i];
   }
   int target;
   cin>>target;
   int result = pattern(arr,n,target);
   cout<<result;
}
