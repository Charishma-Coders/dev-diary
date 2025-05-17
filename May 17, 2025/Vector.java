#include<iostream>
#include<vector>
using namespace std;

int main(){
// Declaring of vector 
    vector<int> v={1,3,5,7,9};
    cout<<v[2]<<endl;

// adding elements at the end 
    v.push_back(11); // adds 11 at the end
    v.emplace_back(13); // adds 13 at the end 
    cout<<v[5]<<" "<<v[6]<<endl;

// Other approaches for declaration
    vector<int> v1(5,20);
    cout<<v1[0]<<" "<<v1[1]<<" "<<v1[2]<<" "<<v1[3]<<" "<<v1[4]<<endl;
    
    vector<int> v2(5);
    
    vector<int> v3(v1);
    cout<<v3[1]<<endl;
    
// vector of integer pairs
    
    vector<pair<int,int>> v4;
    v4.push_back({1,2});
    v4.emplace_back(5,6);
    
    cout<<v4[0].first<<endl;
    
// iterator
    vector<int>::iterator i=v.begin();
    cout<<*i<<endl;
    cout<<*(i+1)<<endl;
    cout<<*(i+2)<<endl;
    
    // v={1,3,5,7,9,11,13}
    
    vector<int>::iterator i1=v.end();
    vector<int>::reverse_iterator i2=v.rend();
    vector<int>::reverse_iterator i3=v.rbegin();
    i3++;
    cout<<*(i3)<<endl; // prints 11
    
    cout<<v.back()<<endl; // prints i3 i.e., the last element in the vector 
    
// printing a vector 
    for (vector<int>::iterator i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
    for (auto i=v.begin();i!=v.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
// For each loop - here k is value not iterator
    for (int k:v){
        cout<<k<<" ";
    }
    cout<<endl;
    
    for (auto k:v){
        cout<<k<<" ";
    }
    cout<<endl;
    
// Delete Function

// v={1,3,5,7,9,11,13}
    v.erase(v.begin()+2); // {1,3,7,9,11,13}
    // Give the corresponding iterator as input
    
    v.erase(v.begin()+1,v.begin()+4); // {1,11,13}
    // Give start and end iterators as inputs. End won't be deleted.
    
// Insert function 
    vector<int> v5={1,4,7,10,13};
    v5.insert(v5.begin(),5); // {5,1,4,7,10,13}
    v5.insert(v5.begin()+2,2,8); // {5,1,8,8,4,7,10,13}
    
    vector<int> v6={20,25};
    v5.insert(v5.begin(),v6.begin(),v6.end()); // {20,25,5,1,8,8,4,7,10,13}
    
    cout<<v5.size()<<endl; // 10 
    
    v5.pop_back(); // {20,25,5,1,8,8,4,7,10}
    
    vector<int> v7={1,2};
    vector<int> v8={3,4};
    
    v7.swap(v8); // v7={3,4} , v8={1,2}
    
    v7.clear(); // clear all ements but keep capacity
    
    cout<<v7.empty()<<endl; // Checks if the vector is empty or not. 
    // true - 1 , false - 0
    
    vector<int>& v9 = v1;  // v5 is a reference to v1 - {20,20,20,20,20} - v5,v1
    v9.push_back(100);
    cout<<v9[5]<<endl;
}
