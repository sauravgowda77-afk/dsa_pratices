#include<bits/stdc++.h>
using namespace std;

// it is wroks on time complexcity o(nlogn) 
// it has a space complexcity o(1)
// it is divide and compamre format 
// it is slightly better than merge sort 

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int l = low;
    int h = high;

    while(l<h){
        while(arr[l] <= pivot && l<= high - 1){
                l++;
        }
        while(arr[h] > pivot && h >= low+1){
            h--;
        }
        if(l<h){
            swap(arr[l] , arr[h]);
        }
    }
        swap(arr[low] , arr[h]);
    return h;
}
void qs(int arr[],int low,int high){
    if(low < high){
    int index = partition(arr,low,high);
    qs(arr,low , index-1);
    qs(arr,index+1,high);
    }
}

int main() {
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<=n-1;i++){
    cin>>arr[i];
   }
  qs(arr , 0, n - 1);
  for(int i=0;i<=n-1;i++){
    cout<<arr[i]<<" ";
  }
}