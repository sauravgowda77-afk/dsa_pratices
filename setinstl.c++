#include<bits/stdc++.h>
using namespace std;

void setinstl(){
    // always remeber the set arranged in  sorted order and  unique 
    // its time complexcicty is logn

    set<int> st;
    st.insert(1); //{1}
    st.insert(2); //{1,2}
    st.insert(2); //{1,2} it already has 2 so it will not stored 2 unique property
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4} it always stored in order list it sorted order 

    // functioncility of insert in vector
    // can be used only in that only increases
    // effeciency

    auto it = st.find(3); // it will returned the iterator means addrres

    auto it = st.find(5); // it will return the st.end()

    st.erase(4); // {1,2,3} // it maintain the sorted order

    int cnt  = st.count(2); // it will give 1 if the 2 is present 
                            // or it will give 0 if 2 is not present

    auto t1 = st.find(1);
    auto t2 = st.find(3);

    st.erase(t1,t2);// {start , end}

    




}
