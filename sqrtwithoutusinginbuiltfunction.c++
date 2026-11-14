#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) {
       int left = 0;
       int right = x;
       int ans;
       while(left <= right){
        long long mid = left + (right - left)/2;
        long long val = (mid * mid);
        if(val <= x){
            ans = mid;
            left = mid + 1;
        }
        else{
            right = mid - 1;
         }
       }
       return ans;
    }

    int main(){
        int n;
        cin>>n;
        int result = mySqrt(n);
        cout<<result;
    }