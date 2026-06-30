#include<bits/stdc++.h>
using namespace std;

void without26(string &s){

 int hash[26] = {0};
for(int i=0;i<=s.size();i++){
 hash[s[i] - 'a'] += 1;
}

int q;
cin>>q;
while(q--){
    char c;
    cin>>c;
 cout<<hash[c - 'a']<<" ";
 }
}

void without256(string &s){
    //  it automato=ically assign the address 

 int hash[256] = {0};
for(int i=0;i<=s.size();i++){
 hash[s[i]] += 1;
}

int q;
cin>>q;
while(q--){
    char c;
    cin>>c;
 cout<<hash[c]<<" ";
 }
}
int  main() {
    string s;
    cin>>s;
    without256(s);
}