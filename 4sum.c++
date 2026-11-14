#include <bits/stdc++.h>
using namespace std;

// brute force
vector<vector<int>> pattern(vector<vector<int>>& arr,int n,int target){
    
    set<vector<int>>st;
    for(int i = 0;i<n;i++){
        set<int>mpp;
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
               for(int l = k+1;l<n;l++){
                if(arr[i] + arr[j] + arr[k] + arr[l] == target){
                    vector<int>temp = { arr[i] , arr[j] , arr[k],arr[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
               }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

// better approach
vector<vector<int>> pattern(vector<vector<int>>& arr,int n){
    
    set<vector<int>>st;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
              set<int>mpp;
            for(int k = j+1;k<n;k++){
               int four = target - (arr[i] + arr[j] + arr[k]);
               if(mpp.find(four) != mpp.end()){
                   vector<int>temp = {arr[i] , arr[j] , arr[k] , four};
                   sort(temp.begin(),temp.end());
                   st.insert(temp);
               }
               mpp.insert(arr[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

// optimal approach
vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int n = arr.size();
        for(int i = 0;i<n;i++){
            if(i>0 && arr[i] == arr[i-1]) continue;
          for(int j = i+1;j<n;j++){
            if(j != i+1 && arr[j] == arr[j-1]) continue ; 
            int k = j+1;
            int l = n-1;
            while(k<l){
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if(sum > target){
                  l--;
                }
                else if(sum < target){
                  k++;
                }
                else{
                   vector<int>temp = {arr[i] ,arr[j] , arr[k],arr[l]};
                   ans.push_back(temp);
                   k++;
                   l--;
                   while(k<l && arr[k] == arr[k-1]) k++;
                   while(k<l && arr[l] == arr[l+1]) l--;
                }
            }
          }
        }
        return ans;
    }
int main() {
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;
    pattern(arr,n,target);
}
