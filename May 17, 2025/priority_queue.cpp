#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> prq; // {};
    
    prq.push(1); // {1}
    prq.push(5); // {5,1}
    prq.push(8); // {8,5,1}
    prq.push(3); // {8,5,3,1}
    prq.emplace(4); // {8,5,4,3,1}
    
    cout<<prq.top()<<endl; // prints 8 
    
    prq.pop(); // {5,4,3,1}
    cout<<prq.top()<<endl; // prints 5
    
    // Not a linear data structure. Underlying data structure is tree.
    
    // Other functions: size, swap, empty
    
    // min heap or min priority queue 
    priority_queue<int,vector<int>,greater<int>> min_prq;
    
    min_prq.push(1); // {1}
    min_prq.push(5); // {1,5}
    min_prq.push(8); // {1,5,8}
    min_prq.push(3); // {1,3,5,8}
    min_prq.emplace(4); // {1,3,4,5,8}
    
    cout<<min_prq.top()<<endl; // prints 1 
    
    // Time complexity - push, pop - log(N), top - O(1)
    
    return 0;
}
