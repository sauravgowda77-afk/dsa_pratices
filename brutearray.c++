#include<bits/stdc++.h>
using namespace std;

int ifarrayissorted(int arr[],int n){
      for(int i=1;i<n;i++){
           if(arr[i] <= arr[i-1]){
              
           }
           else{
            cout<<"no arry is not sorted";
           }
      }
      cout<<"array is sorted";
}

int deletduplicateinarray(int arr[],int n){ // time complexicty o(n*log(n) + n)
    int i = 0;
      set<int> st;
      int index = arr[0];
      for(i=0;i<n;i++){
          st.insert(arr[i]);
      }
      for(auto it : st){
           arr[index] = it;
           index++;
      }
      cout<<index;
}

int leftrotateelementsbyD(int arr[],int n,int d){
     // time complexcity is o(n+d) = o(n) + o(n-d) + o(d)
     // space complecity is o(d)
     d = d%n;
     int temp[d];
     for(int i=0;i<=d;i++){
          temp[i] = arr[i];
     }
     for(int i=d;i<n;i++){
          arr[i] = arr[i-d];
     }
     for(int i = n-d;i<n;i++){
          arr[i] = temp[i-(n-d)];
     }
}

int moveallthezeros(int n,int arr[]){
     int temp[] = {};
      for(int i=0;i<n;i++){
          if(arr[i] != 0){
               temp[i] = arr[i];
          }
      }
      for(int i=0;i<temp.size();i++){
         
      }
}

void linearserach(int arr[],int n,int q){
      int j = 0;
      for(int i=0;i<n;i++){
          if(arr[i] == q){
              cout<<i << " ";
              j++;
          }
      }
      if(j == 0) cout << "Not found";
}

void uniaryoftwoarrays(int arr1[], int arr2[], int arr3[], int n) {
    set<int> st;
    for (int i = 0; i < n; i++) st.insert(arr1[i]);
    for (int i = 0; i < n; i++) st.insert(arr2[i]);
    
    int i = 0;
    for (auto it : st) {
        arr3[i] = it;
        cout << arr3[i] << " ";
        i++;
    }
}

int missingnumbers(int arr[],int n){
     for(int i=0;i<n;i++){
        int flag = 0;
        for(int j=0;j<n-1;j++){
          if(arr[j] == i){
             flag++;
             break;
          }
        }
        if(flag == 0){
            cout<<i;
        }
     }
}

void findthenumberapperingonce(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt = 0;
        for(int j=0;j<n;j++){
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        if(cnt == 1){
          cout<<arr[i];
        }
    }
}

vector<int> twosum(vector<int>& arr,int n,int target){
     for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
         if(arr[i] + arr[j] == target){
            return i,j;
         }
       }
     }
     return -1,-1;
}

void sortandarr(vector<int>& arr,int n){
     sort(arr.begin(),arr.end());
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