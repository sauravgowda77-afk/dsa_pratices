#include<bits/stdc++.h>
using namespace std;

void mapinstl(){
    // it is stored in like {key,value}
    // it has unique keys and in sorted order
    map<int ,int>mp;
    map<pair<int,int>,int> mp;
    map<int,pair<int,int>> mp;

    mp[1] = 2; // its just mean {1,2} = {key,value}
    mp.emplace(3,1);
    mp.insert({2,3});

    mp[{2,4}] = 10;
    for(auto it : mp){
        cout<<it.first<<it.second;
    }

    cout<<mp[1]; // it will print 2;
    cout<<mp[5]; // it will print mp.end() or zero;

    auto it = mp.find(3);
    cout << *(it).second ;
}

int main(){

}