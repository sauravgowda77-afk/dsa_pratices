#include <bits/stdc++.h>
using namespace std;

void pattern(vector<int>& arr, int n,int x){
    int first = -1;
    int last = -1;
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low +(high - low)/2;
        if(arr[mid] == x){
            first = mid;
            high = mid - 1;
        }
        else if(arr[mid] < x){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(first == -1){
        cout<<-1;
    }
    else{
        low = 0;
        high = n-1;
     while(low <= high){
        int mid = low +(high - low)/2;
        if(arr[mid] == x){
            last = mid;
         low = mid + 1;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    int result = last - first + 1;
    cout<<result;
  }
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
