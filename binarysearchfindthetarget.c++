#include <bits/stdc++.h>
using namespace std;

// iterative binary search
void BS(vector<int>& arr,int n,int target){
    int low = 0;
    int high = n-1;
    while(low <= high){
       int mid = low +(high - low)/2;
       if(arr[mid] == target){
           cout<<mid<<endl;
           break;
       }
       else if(arr[mid] < target){
           low = mid + 1;
       }
       else{
           high = mid - 1;
       }
    }
    cout<<-1;
}

// recursive code
int BS(vector<int>& arr,int low,int high,int target){
    if(low > high){
        return -1;
    }
    int mid = low +(high-low)/2;
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return BS(arr,mid+1,high,target);
    }
    else{
        return BS(arr,low,mid-1,target);
    }
}

int main() {
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i =0;i<n;i++){
	    cin>>arr[i];
	}
	int target;
	cin>>target;
	BS(arr,n,target);
}
