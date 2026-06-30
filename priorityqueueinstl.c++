#include<bits/stdc++.h>
using namespace std;

void priorityqueueinstl(){
    //maximum heap
    // push and pop time complexicity here is logn
    // top time compexicity is o(1)
    priority_queue<int> qp;
    qp.push(1); // {1}
    qp.push(2); // {2,1}
    qp.emplace(3); // {3,2,1}
    
    qp.pop(); // {2,1}

    cout<<qp.top(); // prints 1

    // minimum heap
    priority_queue<int ,vector<int>,greater<int>> qp1;
    qp1.push(2); // {2}
    qp1.emplace(9); // {2,9}
    qp1.push(1); // {1,2,9}

    cout<<qp1.top(); // prints 1
}