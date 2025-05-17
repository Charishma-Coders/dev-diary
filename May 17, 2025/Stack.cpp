#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> stk; // {}
    
    // LIFO - Last In First Out 
    
    stk.push(1); // {1}
    stk.push(8); // {1,8}
    stk.push(4); // {1,8,4}
    stk.push(7); // {1,8,4,7}
    stk.emplace(3); // {1,8,4,7,3}
    
    // can't do stk[0]. Gives error 
    
    cout<<stk.top()<<endl; // prints 3 
    stk.pop(); // {1,8,4,7}
    cout<<stk.top()<<endl; // prints 7
    
    cout<<stk.size()<<endl; // prints 4 
    cout<<stk.empty()<<endl; // prints 0 as stack is non empty 
    
    stack<int> stk1;
    stk.swap(stk1); // swaps stk and stk1 
    
    while (!stk1.empty()){
        cout<<stk1.top()<<"-";
        stk1.pop();
    }
    
    // TC - push, pop, top happens in O(1) time complexity 
}
