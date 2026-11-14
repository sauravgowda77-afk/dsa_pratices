#include <bits/stdc++.h>
using namespace std;

// brute force
vector<vector<int>> pattern(vector<vector<int>>& arr,int n){
 
    set<vector<int>>st;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            for(int k = j+1;k<n;k++){
              if(arr[i]+arr[j]+arr[k] == 0){
                  vector<int>temp = {arr[i] ,  arr[j],arr[k]};
                  sort(temp.begin(),temp.end());
                  st.insert(temp);
              }
            }
        }
    }
     vector<vector<int>>ans = (st.begin() , st.end());
     return ans;
}

// better approach using hashing
vector<vector<int>> pattern(vector<vector<int>>& arr,int n){
 
    set<vector<int>>st;
    for(int i = 0;i<n;i++){
        set<int> mpp;
        for(int j = i+1;j<n;j++){
            int third = -(arr[i] + arr[j]);
            if(mpp.find(third) != mpp.end()){
                vector<int> temp = {arr[i] , arr[j] , third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            mpp.insert(arr[j]);
          }
        }
    }
     vector<vector<int>>ans = (st.begin() , st.end());
     return ans;
}

// optimal appraoch
vector<vector<int>> pattern(vector<vector<int>>& arr,int n){
     sort(arr.begin(),arr.end());
     vector<vector<int>>ans;
     for(int i =0;i<n;i++){
         if(i > 0 && arr[i] == arr[i-1]) continue ;
         j = i+1;
         k = n-1;
         while(j < k){
             int sum = arr[i] + arr[j] + arr[k];
             if(sum > 0){
                k--;
             }
             else if(sum < 0){
                 j++;
             }
             else{
                 vector<int>temp = {arr[i],arr[j],arr[k]};
                 ans.push_back(temp);
                 j++;
                 k--;
                 while(j < k && arr[j] == arr[j-1]) j++;
                 while(j < k && arr[k] == arr[k+1]) k--;
             }
         }
     }
     return ans;    
}

int main() {
	int n;
	cin>>n;
	vcetor<vector<int>>arr(n,vector<int>(n));
	for(int i = 0;i<n;i++){
	    for(int j =0;j<n;j++){
	        cin>>arr[i][j];
	    }
	}
	pattern(arr,n);
}
