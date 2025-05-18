#include<iostream>
#include<set>
using namespace std;

int main(){
    // sorted and unique
    
    set<int> s;
    s.insert(3); // {3}
    s.insert(7); // {3,7}
    s.insert(5); // {3,5,7}
    s.insert(3); // {3,5,7}
    s.insert(5); // {3,5,7}
    s.insert(1); // {1,3,5,7}
    
    auto iter1=s.find(5); // returns an iterator that points to 5
    
    auto iter2=s.find(9); // returns s.end()
    
    s.erase(3); // {1,5,7}
    s.erase(iter1); // {1,7}
    
    set<int> s1={2,4,6,8,10};
    auto iter3=s1.find(4);
    auto iter4=s1.find(8);
    s1.erase(iter3,iter4); // {2,8,10}
    
    int count1=s1.count(8); // count1 = 1 
    int count2=s1.count(5); // count2 = 0 
    
    // Time Complexity - log(N) for inserting and erasing
    
    // Functions: size, empty, swap, begin, end, back are similar to that of vector.
    
    return 0;
}
