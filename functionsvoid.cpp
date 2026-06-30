#include<bits/stdc++.h>
using namespace std;

/* Functions are set of code which performs something for you
Functions are used to modularise code
Functions are used to increase readability
Functions are used to use same code multiple times
void -> which does not returns anything
return
parameterised
non parameterised */

/*basic structed
void printname(){
    cout<<"saurav";
}
int main(){
    printname();
} */

/*int printnumber(int num1 , int num2){
    int num3 = num1 + num2;
    return num3;
}

int main (){
    int num1 , num2;
    cin>>num1>>num2;
    int res = printnumber(num1 , num2);
    cout<<res;
} */

/*int maxx(int num1 , int num2){
    if(num1 >= num2){
        return num1;
    }
    else return num2;
}

int main (){
    int num1 , num2;
    cin>>num1>>num2;
    int hi = maxx(num1 , num2);
    cout<<hi;
} */

/* void maxxium( int num1 ,int num2){
    if( num1 >=  num2){
        cout<< num1;
    }
    cout<< num2;
}

int main (){
    int num1 , num2;
    cin>>num1>>num2;
    maxxium(num1 , num2);
    return 0;
} */

/*void dosomething(string s){   here it take the copy of "s" but the original reamains the same 
    s[2] = 'u';
    s[3] = 'u';
    cout<<s;
}

int main(){
    string s;
    cin>>s;
    dosomething(s);
    cout<<s;
    }    */


/*      this is called  pass by refernce symbol "&"
void dosomething(string &s){   this also changes the real 's'
    s[2] = 'u';
    s[3] = 'u';
    cout<<s;
}

int main(){
    string s;
    cin>>s;
    dosomething(s);
    cout<<s;
    }   */

    
   void baka(int arr[] , int n){
      arr[0] += 23;
      cout<<arr[0]<<'\n';
   }

   int main() {
    int n = 5;
    int arr[n];
     for(int i=0;i<=n;i++){
        cin>>arr[i];
    }

    baka(arr , n);
    cout<<arr[0]<<'\n';
   }