#include<bits/stdc++.h>
using namespace std;

void selection_sort(int n,int arr[]){
    // it compare the index 0 from the last term and then decrease from right to left 
    // the time complexcity is (n^2) having the first natural numbers 
    for(int i=0;i<=n-2;i++){
        int mini = i;
        for(int j=i;j<=n-1;j++){
             if(arr[j] < arr[mini]){
                mini = j;
             }
             int temp = arr[mini] ;
                arr[mini] = arr[i];
                arr[i] = temp;     
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
    selection_sort(n,arr);
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}