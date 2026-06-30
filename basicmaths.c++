#include <bits/stdc++.h>
using namespace std;

void maths1(int N)
{
    int cnt = 0;
    while (N > 0)
    {
        int lastdidgit = N % 10;
        cnt = cnt + 1;
        N = N / 10;
    }
    cout << cnt;
}

void reversenumber(int N){
    int revnum = 0;
    int i = 1;
    while(N>0){
    int lastdigit = N%10;
    revnum = (revnum * 10) + lastdigit;
    N = N/10;
    i = i + 1;
    }
    cout<<revnum;
}

void palinedrome1(int N){
    int revnum = 0;
    int i = 1;
    int reason = N;  // this is made because in the loop the n values changes 
    while(N>0){
    int lastdigit = N%10;
    revnum = (revnum * 10) + lastdigit;
    N = N/10;
    i = i + 1;
    }
    if(revnum == reason){
        cout<<"true";
    }
    else{
    cout<<"false";
    }
}

void armstrongnum1(int N){
    int sum = 0;
    int day = N;
    int i = 1;
    while(N>0){
        int lastdigit = N%10;
        sum = sum + (lastdigit*lastdigit*lastdigit);
        N = N/10;
        i++;
    }
    if(sum == day){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}

void printalldivisors(int N){
    for(int i=1;i<=N;i++){
       if(N%i == 0){
        cout<<i<<" ";
       }
    }
}

void primenum(int N){
    int cnt = 0;
     for(int i=1;i<=N;i++){
        if(N%i == 0){
            cnt++;
        }
     }
     if(cnt == 2){
        cout<<"the given number is a prime number";
     }
     else{
        cout<<"the given number is not a prime number";
     }
}

void primenumforsqurt(int N) {
    
    int cnt = 0;
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            cnt++;
            if (N / i != i) {
                cnt++;
            }
        }
    }
    if (cnt == 2) {
        cout << "the given number is a prime number";
    }
    else {
        cout << "it is not a prime number";
    }
}

void gcdnum(int a,int b){
    int i = 0;
    while(a>0 && b>0){
        if(a>b){
           a = a%b;
        }
        else {
            b = b%a;
        }
}
      if(a==0){
        cout<<b;
      }
      else {
        cout<<a;
    }
}


int main() {
    int a , b;
    cin>>a,b;
    int N;
    cin >> N;
    gcdnum(a,b);
   // primenumforsqurt(N);
}
