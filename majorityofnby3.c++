#include <bits/stdc++.h>
using namespace std;

 //  brute force approach
void pattern(vector<int>& arr,int n){
    vector<int>ls;
   for(int i = 0;i<n;i++){
       int cnt = 0;
       for(int j = 0;j<n;j++){
         if(arr[j] == arr[i]){
             cnt++;
         }
       }
       if(cnt > (n/3){
           if(ls.empty() || ls[0] != arr[i]){
           ls.push_back(arr[i]);
           }
       }
       if(ls.size() == 2) break;
   }
      for(int i = 0;i<ls.size();i++){
          cout<<ls[i]<<" ";
      }
}

// better opparch using hashing
void pattern(vector<int>& arr,int n){
    map<int,int>mpp;
    vector<int>ls;
    int mm = (n/3) + 1;
    for(int i = 0;i<n;i++){
       mpp[arr[i]]++;
       
      if(mpp[arr[i]] == mm){
          ls.push_back(arr[i]);
      } 
    }
}

// optimal approach (moore voting algo)
void pattern(vector<int>& arr,int n){
    vector<int>ls;
    int cnt1 = 0,cnt2 = 0;
    int el1,el2;
    for(int i = 0;i<n;i++){
        if(cnt1 == 0 && el2 != arr[i]){
            cnt1++;
            el1 = arr[i];
        }
        else if(cnt2 == 0 && el1 != arr[i]){
            cnt2++;
            el2 = arr[i];
        }
        else if(el1 == arr[i]){
            cnt1++;
        }
        else if(el2 == arr[i]){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    int cnt1= 0,cnt2 = 0;
    for(int i =0;i<n;i++){
        if(el1 == arr[i]) cnt1++;
        if(el2 == arr[i]) cnt2++;
    }
    int mm = (int)(n/3) + 1;
    if(cnt1 >= mm){
        ls.push_back(el1);
    }
    if(cnt2 >= mm){
        ls.push_back(el2);
    }
    for(int i =0;i<ls.size();i++){
        cout<<ls[i<<" ";
    }
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
