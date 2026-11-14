#include <bits/stdc++.h>
using namespace std;

// brute force appraoch
void pattern(vector<int>& arr,int n){
    int sum = 0;
    int len = 0;
   for(int i =0;i<n;i++){
       sum = 0;
       sum = arr[i];
       for(int j =i+1;j<n;j++){
           sum += arr[j];
           if(sum == 0){
               len = max(len,j-i+1);
           }
       }
   }
    cout<<len;
}

// optimal approach
void pattern(vector<int>& arr,int n){
    int sum = 0;
    int len = 0;
    map<int,int>mpp;
    for(int i =0;i<n;i++){
        sum += arr[i];
        if(sum == 0){
            len = max(len,i+1);
        }
        if(mpp.find(sum) != mpp.end()){
            int maxi = i - mpp[sum];
            len = max(len,maxi);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    cout<<len;
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
