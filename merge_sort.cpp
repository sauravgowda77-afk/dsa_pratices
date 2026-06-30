#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr,int n,int left,int mid,int high){
      vector<int> temp;
      int low = left;
      int right = mid + 1;
      while(low<=mid && right <= high){
          if(arr[low] <= arr[right]){
              temp.push_back(arr[low]);
              low++;
          }
          else{
              temp.push_back(arr[right]);
              right++;
          }
      }
      while(low <= mid){
          temp.push_back(arr[low]);
          low++;
      }
      while(right <= high){
        temp.push_back(arr[right]);
        right++;
      }
      for(int i = left;i<=high;i++){
          arr[i] = temp[i-left];
      }
}
void ms(vector<int>&arr,int n,int left, int high){
    if(left == high){ 
        return ;
    }
    int mid = left + (high-left)/2;
    ms(arr,n,left,mid);
    ms(arr,n,mid+1,high);
    merge(arr,n,left,mid,high);
}

int main() {
	int n , left , mid , high;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
	  cin>>arr[i];
	}
    
	ms(arr,n,0,n-1);
	for(int i=0;i<n;i++){
	  cout<<arr[i]<<" ";
	}
}
