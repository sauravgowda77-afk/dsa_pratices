#include <bits/stdc++.h>
using namespace std;

 // find the number at a particular column and row given n and r 
void pattern(int n,int r){
     int res = 1;
  for(int i = 0;i<r;i++){
      res = res*(n-i);
      res = res/(i+1);
    }
    cout<<res;
}

// print the row by a given row number
void pattern1(int n,int r){
    int res = 1;
    cout<<res<<" ";
  for(int i = 0;i<n;i++){
      res = res*(n-i);
      res = res/(i+1);
      cout<<res<<" ";
  }
}

// to print an whole row from 1 to given row
vector<int> pattern1(int row){
    vector<int>ans;
    int res = 1;
    ans.push_back(res);
    for(int i = 1;i<row;i++){
        res = res*(row-i);
        res = res/i;
        ans.push_back(res);
    }
    return ans;
}
void pattern(int n){
   vector<vector<int>>arr;
   for(int i = 1;i<=n;i++){
      arr.push_back(pattern1(i));
   }
   for(int i =0;i<arr.size();i++){
       for(int j =0;j<arr[i].size();j++){
       cout<<arr[i][j]<<" ";
       }
       cout<<endl;
   }
}

int main() {
  int n,r;
  cin>>n>>r;
  pattern(n);
}