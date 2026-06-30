#include<bits/stdc++.h>
using namespace std;

void multisetinstl(){
    // it is in a sorted order but not unique
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); // it will erase all 1 {}

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); // it would only delet one 1 {1,2}

    ms.erase(ms.find(1),ms.find(1) + 2);

    // rest function are same as set

}