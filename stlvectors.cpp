#include<bits/stdc++.h>
using namespace std;

void vector1(){
       vector<int>v;
       v.push_back(1) ;  // basically it means it will add the one in the array arr[1]
       v.emplace_back(2); // it add the 2 in the array where one is present already and amke it arr[2]

    }

void vectorspairs(){
        vector<pair<int,int>>v;
        v.push_back({1,2});  // it requires curly braces when added with pairs 
        v.emplace_back(3,4); // it doesnt require curly barces it is more faster than push back
    }

void anotherwayofwritingvector(){
        vector<int>v(5,34) ; // it just mean 5 are 34 number in the array  {34 , 34 , 34 , 34 , 34
    }

void insertofvector1(){
        vector<int> v1(1,3);  
        vector<int> v2(v1); //it will share the value in the v2 {1,3}
    }

void iteratorsinvector(){
        vector<int>::iterator it = v.begin(); // it just mean that the start of the array 
        it++;  // it increase the number means next 
        cout<< *(it) <<" "; // it prints the value without * this it will not print 
        // other way 
        it = it + 2;
    }

void endrendandrbegin(){
            vector<int> it = v.emd(); // it will go little bit beyound end but not at the end
            vector<int> it = v.rend(); // reverse end its just becomes as same as begin 
             vector<int> it = v.begin(); // reverse begin its just becomes as same as end
        
             cout<<v[0];
             cout<<v.back();  // it is the value at the end at the array 
            }   

void forloopinvector(){
        for(vector<int>::iterator it = v.begin();it != v.end();it++){ // iterator points to the memory address
            cout<<*(it);
        }
    }
     
void autouseincplusplus(){
        for(auto it = v.begin();it != v.end();it++){  // auto basically can turn any element in
            cout<<*(it);                              // string , int , long , douuble only writing auto
        }
    }

void erasedvectoruse(){    
    v.erase(v.begin() + 1); // it just erase the value in the array of position you mentioned
    v.erase(v.begin() + 1,v.begin() + 3); // it delete two values but when you write
                                           // when you write the second cordinate you should write the position after 
                                           // of it
    } 

void insertcopysizeandswap(){
        vector<int>v(2,34);
        v.insert(v.begin(),300) //this insert the value in the array 
        v.insert(v.begin() + 1,3,34); // (which place,how many,which number)

        cout<<v.size(); // its just tells the length of the array 

        v.pop_back(); // its just delet the value from the array 

        v1.swap(v2); // it swap the value of the arrays 

        vector<int> copy(2,50) // its just add the value 50
        v,.insert(v.begin(),copy.begin(),copy.end()) // it will add the value both at the strating
    } 

void emptyandclearvector(){
        v.clear(); // it delets all the element in the array
        cout<< v.empty(); // it will print 0 if there is even an one element in the array
                          // it will print 1 if there is no element in the array 
    }
    
int main() {
 
}