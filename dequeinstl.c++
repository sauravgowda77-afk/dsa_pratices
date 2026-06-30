#include<bits/stdc++.h>
using namespace std;

void dequeinstl(){
    // it is same as vector
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);

    dq.pop_back();
    dq.pop_front();

    dq.front();
    dq.back();

    // rest are same as vectors
    // begin , end , rbegin , rend, insert , erase,size ,swap
}