#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> list_1; // {}
    list_1.push_back(5); // {5}
    list_1.emplace_back(7); // {5,7}
    list_1.push_front(3); // {3,5,7}
    list_1.emplace_front(1); // {1,3,5,7}
    
    // coust<<list_1[0]; // This will give error 
    
    // Adding elements at the start or inserting anywhere is 
    // much cheaper in list compared to vector.
    
    list_1.pop_back(); // {1,3,5}
    list_1.pop_front(); // {3,5};
    
    cout<<list_1.back()<<endl; // 5
    cout<<list_1.front()<<endl; // 3 
    
    // begin, end, rbegin, rend 
    // erase, insert, size,swap - similar to vector
    // clear, empty
    
// insert 
    auto it=list_1.begin();
    advance(it,2);
    list_1.insert(it,-10);
    
    return 0;
}
