#include<bits/stdc++.h>
using namespace std;

// there no best case for largest number 

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

int missingelemnt(int arr[],int n){
    int hash[n] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]] = 1;
    }
    for(int i=0;i<n-1;i++){
        if(hash[i]!= 1){
            cout<<i<<" ";
        }
    }
}

void sortingarr012(int arr[],int n){
       int cnt0 = 0;
       int cnt1 = 0;
       int cnt2 = 0;
       for(int i=0;i<n;i++){
         if(arr[i] == 0){
            cnt0++;
         }
        else if(arr[i] == 1) {
            cnt1++;
       }
       else {
        cnt2++;
       }
}
       for(int i=0;i<=cnt0;i++){
           arr[i] == 0;
       }
    for(int i=cnt0+1;i<=cnt1;i++){
        arr[i] == 1;
    }
    for(int i=cnt1+cnt0+1;i<=cnt2;i++){
        arr[i] == 2;
    }
}
void sortandarr(vector<int>& arr,int n){
    int cnt0=0;
    int cnt1 = 0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            cnt0++;
        }
        if(arr[i] == 1){
            cnt1++;
        }
        if(arr[i] == 2){
            cnt2++;
        }
    }
    for(int i=0;i<cnt0;i++){
        cnt0[i] = 0;
    }
    for(int =cnt0;i<cnt0+cnt1;i++){
        arr[i] = 1;
    }
    for(int i=cnt0+cnt1;i<n;i++){
        arr[i] = 2 ;
    }
}

void majorityelement(vector<int>& arr,int n){
      map<int,int>mpp;
      for(int i=0;i<n;i++){
        mpp[arr[i]]++;
      }
      for(auto it : mpp){
        if(it.second>n/2){
            cout<<it.first<<" ";
        }
      }
}
int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortandarr(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}