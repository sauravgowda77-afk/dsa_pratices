#include <bits/stdc++.h>

using namespace std;

// brute force approach
void pattern(vector<int>arr,int n){
    int maxi = 0;    
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j < n;j++){
            if(arr[i] > 2*arr[j]){
                maxi++;
            }
        }
    }
    cout<<maxi;
}

// optimal opparoch
void merge(vector < int > & arr, int left, int mid, int high) {
    vector < int > temp;
    int low = left;
    int right = mid + 1;
    while (right <= high && low <= mid) {
        if (arr[low] < arr[right]) {
            temp.push_back(arr[low]);
            low++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[low]);
        low++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = left; i <= high; i++) {
        arr[i] = temp[i - left];
    }
}
int countreverse(vector<int>&arr,int low,int mid,int high){
    int cnt = 0;
    int right = mid+1;
     for(int i =low;i<=mid;i++){
        while(right <= high && arr[i] > 2*arr[right]){
            right++;
        }
         cnt += (right - (mid+1));
    }
    return cnt;
}

int ms(vector < int > & arr, int left, int high) {
    int mid = left + (right - left) / 2;
    int cnt = 0;
    if (left >= high) {
        return cnt;
    }
    cnt += ms(arr, left, mid);
    cnt += ms(arr, mid + 1, high);
    cnt += countreverse(arr,left,mid,high);
    merge(arr, left, mid, high);
    return cnt;
}

int pattern(vector < int > & arr, int n) {
    return ms(arr, 0, n - 1);
}

int main() {
    int n;
    cin >> n;
    vector < int > arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = pattern(arr, n);
    cout << result;
}