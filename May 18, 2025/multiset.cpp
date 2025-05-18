#include<iostream>
#include<set>
using namespace std;

int main(){
    // sorted 
    // elements can be represented. Not unique 
    
    multiset<int> mset;
    mset.insert(3); // {3}
    mset.insert(7); // {3,7}
    mset.insert(3); // {3,3,7}
    mset.insert(3); // {3,3,3,7}
    mset.insert(7); // {3,3,3,7,7}
    
    mset.erase(7); // {3,3,3} All 7's are erased 
    mset.erase(mset.find(3)); // {3,3} erases a single element of 3 
    
    int count=mset.count(3); // 2 
    
    // other functions are similar to that of set 
    
    return 0;
}
