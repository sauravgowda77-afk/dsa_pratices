#include <bits/stdc++.h>
using namespace std;

// Update parameter to vector<vector<int>>&
void makerow(vector<vector<int>>& arr, int j, int n) {
    // Note: To traverse a column, you iterate through the rows (up to n)
    for (int i = 0; i < n; i++) {
        if (arr[i][j] == 1) {
            arr[i][j] = -1;
        }
    }
}

// Update parameter to vector<vector<int>>&
void makecolumn(vector<vector<int>>& arr, int i, int m) {
    // Note: To traverse a row, you iterate through the columns (up to m)
    for (int j = 0; j < m; j++) {
        if (arr[i][j] == 1) {
            arr[i][j] = -1;
        }
    }
}

void pattern(vector<vector<int>>& arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                makerow(arr, j, n);
                makecolumn(arr, i, m);
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == -1) {
                arr[i][j] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl; 
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