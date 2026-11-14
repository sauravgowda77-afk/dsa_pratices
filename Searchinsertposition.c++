#include <bits/stdc++.h>
using namespace std;

void pattern(vector<int>& arr,int n,int x){
   int up = lower_bound(arr.begin(),arr.end(),x) - arr.begin();
   cout<<up;
}

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    pattern(arr,n,x);
}
