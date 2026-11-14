#include <bits/stdc++.h>
using namespace std;

void pattern(vector<int>& arr,int n){
    int index = -1;
    int mini = INT_MAX;
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(arr[left] <= arr[right]){
            if(arr[left] < mini){
              index = left;
              mini = arr[left];
            }
            break;
        }
        if(arr[left] <= arr[mid]){
            if(arr[left] < mini){
              index = left;
              mini = arr[left];
            }
            left = mid + 1;
        }
        else{
            if(arr[mid] < mini){
              index = mid;
              mini = arr[mid];
            }
            right = mid - 1;
        }
    }
    cout<<index;
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
