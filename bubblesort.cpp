#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int n,int arr[]){
    // it compare with the adjacent values and comap re them 
    // it has time complexcity of o(n^2) first n natural numbers in both worst and avarega 
        for(int i=n-1;i>=0;i--){
            int didntswap = 0;  // here it is made so when there is swaping it breaks the loops 
                                // here it has time complexcity o(n) in best case
            for(int j=0;j<=i-1;j++){
               if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didntswap = 1;
               }
        }
        if(didntswap == 0){
            break;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    bubble_sort(n,arr);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}

