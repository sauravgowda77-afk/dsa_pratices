#include<bits/stdc++.h>
using namespace std;

int largestnum(int arr[],int n){ // time complexcity of o(n)
    int i = 0;
    int largestnumber= arr[0];
    while(i <= n-1){
        if(arr[i] > largestnumber) {
            largestnumber = arr[i];
        }   
        i++;
    }
    cout<<largestnumber;
}

int secondlargestnum(int arr[],int n){ // time complexcity is o(2n)
       int largestt = arr[0];
       int secondlargest ;
       for(int i=0;i<=n-1;i++){
           if(arr[i] > largestt ){
               largestt = arr[i];
           }
       }
       for(int i = 0;i<=n-1;i++){
            if(arr[i] < largestt && arr[i] != largestt){
                secondlargest = arr[i];
            }
       }
       cout<<secondlargest;
       
}

int deletduplicates(int arr[],int n){ // time complecity is o(n)
        int i = 0;
        for(int j=1;j<=n;j++){
            if (arr[j] != arr[i]){
                arr[i+1] = arr[j];
                i++;
            }
        }
        cout<<(i+1);
}

int leftrotate(int arr[],int n){ // time complexcity is o(n) and space is o(1)
      int temp = arr[0];
      for(int i=1;i<=n;i++){
        arr[i] = arr[i-1];
      }
      arr[n-1] = temp;
}

int leftrotatebyD(int arr[],int n,int d){
    // time complecity is o(2n) and space complecity is o(1)
    // using stl 
    //reverse(arr , arr+d);
    //reverse(arr+d,arr+n);
    //reverse(arr,arr+n);
}

void moveallthezeros(int arr[], int n){
    int j = -1;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return;

    for(int i = j + 1; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int missingelement(int arr[],int n){
       int xor1 = 0;
       int xor2 = 0;
       for(int i=0;i<n-1;i++){
        xor2 = xor2^arr[i];
        xor1 = xor1^(i+1);
       }
       xor1 = xor1^(n-1);
       return xor1^xor2;
}

int othersolutionformissingelemnt(int arr[],int n){
     int sum = (n*(n+1))/2;
     int res = 0;
     for(int i=0;i<n-1;i++){
        int res = arr[i] + res;
     }
    return (sum-res);
}

int consquitivenum(int arr[], int n) {
    int maxi = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0;
        }
    }
    cout << maxi;
    return maxi;
}

void findthenumberapperingonce(int arr[],int n){
     int xor1 = 0;
     for(int i=0;i<n;i++){
         xor1 = xor1^arr[i];
     }
     cout<<xor1;
}

string twosum(vector<int>& arr, int n, int target){
    int left = 0, right = n - 1;
    sort(arr.begin(), arr.end());
    while(left < right){
        if(arr[left] + arr[right] == target){
            return "yes";
        }
        else if (arr[left] + arr[right] < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return "no";
}

void sortandarr(vector<int>& arr,int n){
     int mid = 0;
     int low = 0;
     int high = n-1;
     while(mid< high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid] == 1){
            mid++;
        }
        if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
     }
}

int majorityElement(vector<int>& nums) {
        long long el;
        int cnt = 0;
        for(int i =0;i<nums.size();i++){
            if(cnt == 0){
               cnt = 1;
               el = nums[i];
            }
            else if(nums[i] == el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return el;
}

void permutation1(vector<int>& arr,int n){
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(),arr.end());
    }
    else{
    for(int i = n-1;i>index;i--){
        if(arr[index] < arr[i]){
            swap(arr[index],arr[i]);
            break;
        }
    }
    reverse(arr.begin()+index+1,arr.end());
    }
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

 vector<int> leaders(vector<int>& arr) {
        vector<int> hagi;
        int maxi  = 0;
        long n = arr.size();
     for(int i = n-1;i>=0;i--){
         if(arr[i] >= maxi){
             hagi.push_back(arr[i]);
         }
         maxi = max(maxi,arr[i]);
     }
     reverse(hagi.begin(),hagi.end());
     return hagi;
    }
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
      cin>>arr[i];
    }
    permutation1(arr,n);
    return 0;
}