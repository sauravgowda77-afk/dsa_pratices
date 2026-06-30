#include<bits/stdc++.h>
using namespace std;

//  time complexicity is (2^n)
int fiacccanoproblrm(int n){
    if(n <= 1) return n;
    int last = fiacccanoproblrm(n-1);
    int slast = fiacccanoproblrm(n-2);
    return last + slast;
}

int main(){
     int n;
     cin>>n;
     cout<<fiacccanoproblrm(n);
}