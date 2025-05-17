#include<iostream>
#include<utility>
using namespace std;

int main(){
    pair<int,char> p1={1,'a'};
    cout<<p1.first<<" "<<p1.second<<endl;
    
    pair<int,int> p2={2,5};
    cout<<p2.first<<" "<<p2.second<<endl;
    
// store 3 or more elements using pairs
    pair<int,pair<int,int>> p3={3,{4,6}};
    cout<<p3.second.first<<" "<<p3.second.second<<endl;
    
// creating an array of pairs
    pair<int,int> arr[]={{4,7},{5,2},{6,9},{8,1}};
    cout<<arr[3].first<<endl;
    
    return 0;
}
