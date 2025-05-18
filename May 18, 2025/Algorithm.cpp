#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;

bool comparator(pair<int,int>& p1,pair<int,int>& p2){
    if (p1.first<p2.first) return true;
    if (p1.first>p2.first) return false;
    if (p1.second>p2.second) return true;
    
    return false;
}

int main(){
    int a[]={13,5,17,9,70,43,15};
    int n=7;
    
    sort(a,a+n); // sorts an array of size n 
    vector<int> v={7,5,10};
    
    sort(v.begin(),v.end()); // sorts a vector 
    
    sort(a+2,a+5); // sorting a sub array 
    
    sort(a,a+n,greater<int>()); // sorting in decreasing order 
    
    pair<int,int> arr[]={{8,4},{5,2},{8,6}};
    n=3;
    sort(arr,arr+n,comparator);
    
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    cout<<arr[2].first<<" "<<arr[2].second<<endl;
    
    int i=5;
    cout<<__builtin_popcount(i)<<endl;
    
    long long j=987654321444333;
    cout<<__builtin_popcountll(j)<<endl;
    
    string str="abc";
    
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));
    
    int max=*max_element(a,a+n);
    cout<<max<<endl;
    
    return 0;
}
