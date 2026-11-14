#include <bits/stdc++.h>
using namespace std;

// brute force
void pattern(vector<vector<int>>& arr, int n, int m) {
    vector<vector<int>> ans(m, vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans[j][n - i - 1] = arr[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

// optimal opprach
void pattern(vector<vector<int>>& arr,int n,int m){
    for(int i = 0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int i =0;i<n;i++){
    reverse(arr[i].begin(), arr[i].end());
    }
    
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<arr[i][j];
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> arr(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    pattern(arr, n, m);
    
    return 0;
}