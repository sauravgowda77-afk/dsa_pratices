#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
    cin>>arr[i];
}
    // hashing array
    int hash[14] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }
            
    // precomputiting 

    int quer;
    cin>>quer;
    while(quer--){
        // fetch
    int number;
    cin>>number;
       cout<<hash[number]<<" ";
    }
}