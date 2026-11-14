#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& nums) {
if(nums.size() == 1) {
            return nums[0];
        }
        if(nums[0] != nums[1]){
            return nums[0];
        }
        if(nums[nums.size() - 1] != nums[nums.size() - 2]){
            return nums[nums.size() - 1];
        }

        int left = 1;
        int right = nums.size() - 2;
        while(left <= right){
          int mid = left + (right - left)/2;
        if(nums[mid] != nums[mid - 1] && nums[mid + 1] != nums[mid]){
            return nums[mid];
        }
        if((mid % 2 == 0 && nums[mid + 1] == nums[mid] ) || (mid % 2 == 1 && nums[mid - 1] == nums[mid] )){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
      }
    }

    int main(){
        int n;
        cin>>n;
      vector<int>nums(n);
      for(int i = 0;i<n;i++){
        cin>>nums[i];
      }
      int result = singleNonDuplicate(nums);
      cout<<result;
    }