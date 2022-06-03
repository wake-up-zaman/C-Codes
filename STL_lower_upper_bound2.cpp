#include<bits/stdc++.h>
using namespace std;

multiset<int>::iterator FirstLessThan(const multiset<int>& ms, int val){
    auto it=ms.lower_bound(val);
    if(it==ms.end())--it;
    while(it !=ms.begin() && *it >=val) --it;
    return *it >=val ? ms.end() :it;
}

int main(){
    vector <int> v={1,3,3,3,3,5,8,9,12};
    multiset<int> s(v.begin(),v.end());
    auto it=FirstLessThan(s,7);
 
    cout<<(it==s.end() ? "Not Found" : to_string(*it)) <<endl;


    return 0;
}