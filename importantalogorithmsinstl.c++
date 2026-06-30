#include<bits/stdc++.h>
using namespace std;

void extrainstl(){
    // how to sort any array 
    sort(a,a+n);// arr[] = {a ,....an,a+n} here it is (start , end)
    sort(v.begin(),v.end());
    sort(a,a+n,greater<int>);  // it is used to sort in descesting order 2,3,4

    // comp elment 
    bool comp (pair<int,int>p1,pair<int,int>p2){
          if(p1.second<p2.second) return true;
          if(p1.second>p2.second) return false;
          if(p1.first> p2.first)  return true;
          else false;

          pair<int,int>a[] = {{1,2},{2,3},{3,3}}
     // sorting according to the second element
     //if second element is same then sort according to the first element but in descending
     sort(a,a+n,comp);

     // binary numbers
     int num = 7; // binary of 7 is 111
     int cnt = __builtin_popcount(); // it will return 3

     long long num2 = 2633467363;
     int cnt = _builtin_popcountll();

     // permutation 
     string = "123";

     do{
        cout<< s<<endl;
     }while(next_permutation(s.begin(),s.end()));

     // maxium and minimum
     int maxi = *max_element(a,a+n);
     int minn = *min_element(a,a+n);

}