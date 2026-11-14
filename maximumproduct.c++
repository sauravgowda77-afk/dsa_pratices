#include <bits/stdc++.h>
using namespace std;

// the optimal that you should tell to the interviwer
void pattern(vector<int>& arr,int n){
     int maxi = 0;
     int prefix = 0;
     int suffix = 0;
     for(int i =0;i<n;i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
        prefix = prefix * arr[i];
        suffix = suffix * arr[n-i-1];
        maxi = max(maxi,max(prefix,suffix));
     }
     cout<<maxi;
}

// optimal approach
void pattern(vector<int>& arr,int n){
    int maxi = 0;
    int sum = 0;
    for(int i =0;i<n;i++){
        sum = sum * arr[i];
        if(sum > maxi){
            maxi  = max(maxi,sum);
        }
        if(sum <= 0){
            sum = 1;
        }
    }
    cout<<maxi;
}

// brute force 
void pattern(vector<int>& arr,int n){
   int maxi = 0;
   int sum = 1;
   for(int i =0;i<n;i++){
       sum = 1;
       sum = sum * arr[i];
    for(int j = i+1;j<n;j++){
        sum = sum * arr[j];
    }
    maxi = max(sum,maxi);
   }
   cout<<maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    pattern(arr,n);
}