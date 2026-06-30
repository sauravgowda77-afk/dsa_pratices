#include<bits/stdc++.h>
using namespace std;
/*
Take the day no and print the corresponding day

for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

int main() {
    int day;
    cin >> day;
    
    switch(day){

    case 1:
    cout<<"monday";
    break;                    // this helps to print the only required statement 
    
    case 2:
    cout<<"tuesday";
    break;
    
    case 3:
    cout<<"wednesday";
    break;
    
    case 4:
    cout<<"thursday";
    break;
    
    case 5:
    cout<<"friday";
    break;
    
    case 6:
    cout<<"saturday";
    break;
    
    case 7:
    cout<<"sunday";
    break;

    default :           // this will print when there is a false case 
    cout<< "idiot";
    }
}