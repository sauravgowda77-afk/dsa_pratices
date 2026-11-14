#include <bits/stdc++.h>
using namespace std;

void pattern(vector<int>& arr,int n,int x){
    int ans = -1;
    int low = 0;
    int high = n-1;
    int up = -1;
   while(low <= high){
       int mid = low + (high - low)/2;
       if(arr[mid] <= x){
           ans = arr[mid];
           low = mid + 1;
       }
       else{
           high = mid - 1;
       }
   }
   low = 0;
    high = n-1;
    while(low <= high){
       int mid = low + (high - low)/2;
       if(arr[mid] >= x){
           up = arr[mid];
           high = mid - 1;
       }
       else{
           low = mid + 1;
       }
   }
   cout<<ans<<" "<<up;
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
