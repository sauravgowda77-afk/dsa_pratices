
#include <bits/stdc++.h>

using namespace std;

// brute force or better apparoch
void pattern(vector<int> &arr, int n, int k)
{
    int xor1 = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = 0;
        for (int j = i; j < n; j++)
        {
            xor1 = xor1 ^ arr[j];
            if (xor1 == k)
            {
                ans = ans + 1;
            }
        }
    }
    cout << ans;
}

// optimal solution
void pattern(vector<int>& arr,int n,int k){
map<int,int>mpp;
    int xor1 = 0;
    int ans = 0;
    for(int i =0;i<n;i++){
      xor1 = xor1^arr[i];
      int x = xor1 ^ k;
      ans = ans + mpp[x];
      mpp[xor1]++;
    }
    cout<<ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    pattern(arr, n, k);
}