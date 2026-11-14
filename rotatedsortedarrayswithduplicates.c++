#include <bits/stdc++.h>
using namespace std;

void pattern(vector<int>& arr,int n,int target){
    int left = 0;
    int high = n - 1;
    while(left <= high){
        
      int mid = left + (high - left)/2;
      if(arr[mid] == target){
          cout<<"true";
          return;
      }
      if(nums[mid] == nums[left] && nums[high] == nums[mid]){
                left++;
                high--;
                continue;
     }
            
      if(arr[left] <= arr[mid]){
          if(arr[left] <= target && target < arr[mid]){
              high = mid - 1;
          }
          else{
              left = mid + 1;
          }
      }
      else {
          if(arr[mid] < target && target <= arr[high]){
              left = mid + 1;
          }
          else{
              high = mid - 1;
          }
      }
    }
    cout<<"false";
    return;
}

int main() {
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i =0;i<n;i++){
       cin>>arr[i];
   }
   
   int target;
   cin>>target;
   pattern(arr,n,target);
}
