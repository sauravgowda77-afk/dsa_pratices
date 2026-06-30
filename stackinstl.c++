#include<bits/stdc++.h>
using namespace std;

void stackinstl(){
    // remeber it as LIPO [last in first out]
    // its time complexicity is o(1)
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.push(5); // {5,4,3,2,1}

    cout<<st.top(); // print 5

    st.pop(); // {4,3,2,1}

    cout<<st.top(); // prints 4

    cout<<st.empty(); // false

    cout<< st.size(); // prints 4

    stack<int> st1,st2;
    st2.swap(st1);

}