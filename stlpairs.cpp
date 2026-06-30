#include<bits/stdc++.h>
using namespace std;

void pairs() {
    pair<int,int> p = {1 , 3};
    cout<<p.first<<endl<<p.second;
}

void nestedpairs(){
    pair<int,pair<int,int>> p = {1 ,{2,4}};
    cout<<p.first<<endl<<p.second.first<<endl<<p.second.second;
}

void arrypairs(){
    pair<int,int> arr[] = {{1,3},{9,4},{6,7}};
    cout<<arr[1].first;
}

int main(){
    arrypairs();
}