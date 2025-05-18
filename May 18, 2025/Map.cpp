#include<iostream>
#include<map>
using namespace std;

int main(){
    // Key-value pair
    // keys are sorted and unique
    
    map<int,int> m1;
    map<int,pair<int,int>> m2;
    map<pair<int,int>,int> m3;
    map<char,string> m4;
    
    m1[1]=3;
    m1.insert({7,5});
    m1.emplace(4,8);
    m1.emplace(4,9);
    
    for (auto i:m1) cout<<i.first<<" "<<i.second<<endl;
    
    cout<<m1[4]<<endl; // 8 
    cout<<m1[10]<<endl; // 0 or null 
    
    auto iter=m1.find(7);
    cout<<(*iter).second<<endl; // 5 
    
    auto iter_1=m1.find(10); // returns m1.end();
    
    // Multimap - Duplicate keys. Sorted order 
    
    // Unordered_map - Unique keys, Randomised order - O(1) in almost all the cases 
    // worst case - O(n)
    
    return 0;
}
