#include <bits/stdc++.h>
using namespace std;

// brute force solution
void pattern(vector<int>& arr,int n){
    int rep = -1,mis = -1;

    for(int i = 1;i<=n;i++){
            int cnt = 0;
        for(int j = 0;j<n;j++){
            if(arr[j] == i){
                cnt++;
            }
        }
        if(cnt == 2){
            rep = i;
        }
        if(cnt == 0){
            mis = i;
        }
        if(rep != -1 && mis != -1){
             break;
        }
    }
   cout<< rep <<" "<< mis;
}

// better solution
void pattern(vector<int>& arr,int n){
    int rep = -1,mis = -1;
   map<int,int>mpp;
   for(int i = 0;i<n;i++){
       mpp[arr[i]]++;
   }
   for(int i = 1;i<=n;i++){
       if(mpp[i] == 2){
           rep = i;
       }
       else if(mpp[i] == 0){
           mis = i;
       }
       if(rep != -1 && mis != -1){
           break;
       }
   }
   cout<<rep<<" "<<mis;
}

// optimal approach one using n natural numbers
void pattern(vector<int>& arr,int n){
    long long sn = (n*(n+1))/2;
    long long s2n = (n*(n+1)*(2*n+1))/6;
    int s = 0,s2 = 0;
    for(int i =0;i<n;i++){
        s += (long long)(arr[i]);
        s2 += (long long)(arr[i]) * (long long)(arr[i]);
    }
    long long val1 = s - sn;
    long long val2 = s2 - s2n;
     val2 = val2/val1;
     long long x = (val1 + val2)/2;
     long long y = x - val1;
     cout<<(int)x<<" "<<(int)y;
}

//  second optimal approach consists of bit manuplation so understand the bit manuplation first then write this solution


int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i =0;i<n;i++){
	    cin>>arr[i];
	}
	pattern(arr,n);
}
