#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

void pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

void pattern3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<""<<j<<" ";
        }
        cout<<'\n';
    }
}

void pattern4(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<""<<i<<" ";
        }
        cout<<'\n';
    }
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<'\n';
    }
}

void pattern6(int n){       // n is the total rows                       // s                
    for(int i=1;i<=n;i++){   // i is the row number
        for(int j=1;j<=n-i+1;j++){
            cout<<""<<j<<" ";
        }
        cout<<'\n';
    }
}

void pattern7(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<'\n';
    }
}

void pattern8(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<'\n';
    }
}

void pattern9(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
         for(int i=0;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern11(int n){
       int start = 1;
       for(int i=0;i<=n;i++){
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++){
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
       }
}

void pattern12(int n){
    int start = 2 * (n-1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        
        for(int j=1;j<=start;j++){
            cout<<" ";
        }
        
        for(int j=i;j>=i;j--){
            cout<<j;
        }
        cout<<endl;
        start -=2;
    }
}

void pattern13(int n){
    int num= 1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=i;j++){
           cout<<num;
           num = num + 1;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    for(int i=0;i<=n;i++){
    for(char ch ='A';ch<='A' + i;ch++){
        cout<<ch<<" ";
    }
    cout<<endl;
}
}

void pattern15(int n){ 
    for(int i=0;i<=n;i++){
        for(char ch = 'A';ch<='A'+(n - i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
     for(int i=0;i<n;i++){
        char ch = 'A' + i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern17(int n){
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n-i-1;j++){
                cout<<" ";
            }
              char ch = 'A';
              int breakpoint = 2*(i+1)/2;
            for(int j=1;j<=2*(i+1);j++){
                cout<<ch;
                if(j<= breakpoint) ch++;
                else ch--;
            }
         
        for(int j=0;j<=n-i-1;j++){
                cout<<" ";
            }
            cout<<endl;
        }
}

void pattern18(int n){
    for(int i=1;i<=n;i++){
        for(char ch = 'E' - i;ch <='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern19(int n){
         int sp = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=n-i;j++){
                cout<<"*";
            }
             
            for(int j=0;j<sp;j++){
                cout<<" ";
            }

            for(int j=0;j<=n-i;j++){
                cout<<"*";
            }
            sp += 2;
            cout<<endl;
        }
      sp = 2*(n-2);
        for(int i=1;i<=n;i++){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
             
            for(int j=0;j<sp;j++){
                cout<<" ";
            }

            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            sp -= 2;
            cout<<endl;
        }
}

void pattern20(int n){
    int spaces = 2*n-2;
    for(int i=0;i<=2*(n-i);i++){
        int stars = i;
        if (i > n) stars = 2*n-i;
        for(int j=0;j<=stars;j++){
            cout<<"*";
        }

        for(int j=0;j<=spaces;j++){
            cout<<" ";
        }

       for(int j=0;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) spaces -= 2;
        else spaces += 2;
    }
}

void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(i==0 || j==0 || i == n-1 || j== n-1 ){
            cout<<"*";
        }
        else cout<<" ";
        }
        cout<<endl;
    }

}
int main(){
        int n;
        cin>>n;
        pattern21(n);
    
}