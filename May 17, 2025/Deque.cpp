#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> deque_1; // {}
    deque_1.push_back(5); // {5}
    deque_1.emplace_back(7); // {5,7}
    deque_1.push_front(3); // {3,5,7}
    deque_1.emplace_front(1); // {1,3,5,7}
    
    // Adding elements at the start is much cheaper in list compared to vector
    // But, inserting in between is costly in deque compared to list
    
    deque_1.pop_back();
    deque_1.pop_front();
    
    cout<<deque_1.back()<<endl;
    cout<<deque_1.front()<<endl;
    
    cout<<deque_1[0]<<endl;
    
    // begin, end, rbegin, rend
    // erase, insert, size, swap - similar to vector
    // clear, empty
    
    return 0;
}
