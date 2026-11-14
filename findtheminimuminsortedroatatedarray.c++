#include <bits/stdc++.h>
using namespace std;

void pattern(vector<int>& arr,int n){
    int mini = INT_MAX;
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[left] <= arr[right]){
            mini = min(arr[left],mini);
            break;
        }
        if(arr[left] <= arr[mid]){
            mini = min(arr[left],mini);
            left = mid + 1;
        }
        else{
            mini = min(arr[mid],mini);
            right = mid - 1;
        }
    }
    cout<<mini;
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
