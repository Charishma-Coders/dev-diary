#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q; // {};
    
    // FIFO - First In First Out 
    
    q.push(1); // {1}
    q.push(5); // {1,5}
    q.push(8); // {1,5,8}
    q.push(3); // {1,5,8,3}
    q.emplace(4);  // {1,5,8,3,4}
    
    q.front()+=10;
    cout<<q.front()<<endl; // {11,5,8,3,4} - prints 11 
    
    cout<<q.back()<<endl; // prints 4 
    q.pop(); // {5,8,3,4}
    cout<<q.front()<<endl; // prints 5
    
    // TC - push, pop, front, back happens in O(1) time complexity
}
