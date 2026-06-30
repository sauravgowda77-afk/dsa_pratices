#include<bits/stdc++.h>
using namespace std;

void problem1(int k){
    if(k == 6){
        return;
    }
    cout<<"name"<<endl;
    problem1(k+1);
}

void problem2(int k,int N){
    if(k>N){
        return;
    }
    cout<<k<<endl;
    problem2(k+1,N);
}

void problem3(int k,int N){ // backtrack way 
    if( k < 1){
        return;
    }
    problem3(k-1,N);
    cout<<k<<endl;
}

void problem4(int k,int N){ // backtrack way
    if( k > N){
        return;
    }
    problem4(k+1,N);
    cout<<k<<endl;
}
 
void problem5(int i,int sum){ // paratemterise way 
       if(i<1){
        cout<<sum;
        return;
       }
       problem5(i-1,sum+i);
}

int problem6(int n){ // funcitonal way 
    if(n == 0){
        return 0;
    }
    return n + problem6(n - 1);
}

int problem7(int n){ // factorial
    if(n == 1){
        return 1;
    }
    return n * problem7(n - 1);
}

          // functional recursion 

void problem8(int l,int arr[],int r){
    if(l>=r){
        return;
    }
    swap(arr[l+1],arr[r-1]);
    problem8(l+1,arr,r-1);
}

void problem9(int i ,int arr[],int n){
    if(i>=n/2) {
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    problem8(i+1,arr ,n);
}

bool problemstring(int i,string &h){
        if(i >= h.size()/2){
            return true;
        }
        if(h[i] != h[h.size() - i - 1]){
            return false;
        }
        return problemstring(i+1,h);
}


int main(){ 

    string h;
    cin>>h;
    cout<<problemstring(0 ,h);





    //    fuctional 
    //int n;
    //cin>>n;
   // int arr[n];
    //for(int i=0;i<=n;i++){
   // cin>>arr[i];
   // }
   // problem8(0,arr,n-1);
   // for(int i=0;i<n;i++) {
    //cout<<arr[i]<<" ";
 //}
}