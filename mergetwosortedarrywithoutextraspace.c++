#include <bits/stdc++.h>
using namespace std;

// brute force 
void pattern(vector<int>& arr1,vector<int>& arr2,int n1,int n2){
      vector<int>arr3(n1+n2);
      int left = 0;
      int right = 0;
      int index = 0;
      while(left < n1 && right < n2){
          if(arr1[left] <= arr2[right]){
              arr3[index] = arr1[left];
              index++;
              left++;
          }
          else{
              arr3[index] = arr2[right];
              index++;
              right++;
          }
      }
      while(left < n1){
          arr3[index++] = arr1[left++];
      }
      while(right < n2){
          arr3[index++] = arr2[right++];
      }
          index = 0;
      for(int i = 0;i<n1+n2;i++){
          if(i < n1){
              arr1[index++] = arr3[i];
          }
          else{
              arr2[i - index] = arr3[i];
          }
      }
}

// optimal approach 1
void pattern(vector<int>& arr1,vector<int>& arr2,int n1,int n2){
      int left = n1-1;
      int right = 0;
      while(left >= 0 && right < n2){
          if(arr1[left] >= arr2[right]){
              swap(arr1[left],arr2[right]);
              left--;
              right++;
          }
          else{
              break;
          }
      }
      sort(arr1.begin(),arr1.end());
      sort(arr2.begin(),arr2.end());
}

// second optimal approach gap method(shell sort) 
void swapingarrays(vector<int>& arr1,vector<int>& arr2,int ind1,int ind2){
          if(arr1[ind1] > arr2[ind2]){
              swap(arr1[ind1],arr2[ind2]);
          }
}
void pattern(vector<int>& arr1,vector<int>& arr2,int n1,int n2){
    int len = (n1 + n2);
    int gap = (len / 2) + (len%2);
    while(gap >= 1){
        
        int left = 0;
        int right = left + gap;
       while(right < len){
           
         if(left < n1 && right >= n1){
            swapingarrays(arr1,arr2,left,right - n1);
         }
         else if(left >= n1){
             swapingarrays(arr2,arr2,left-n1,right - n2);
         }
         else{
            swapingarrays(arr1,arr1,left,right);
         }
         left++;
         right++;
       }
        if(gap == 1) break;
        else gap = (gap/2) + (gap%2);
    }
}

int main() {
    int n1,n2;
    cin>>n1>>n2;
    vector<int>arr1(n1);
    vector<int>arr2(n2);
    for(int i = 0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i =0;i<n2;i++){
        cin>>arr2[i];
    }
    pattern(arr1,arr2,n1,n2);
    for(int i = 0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i =0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
}
