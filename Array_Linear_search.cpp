#include<bits/stdc++.h>
using namespace std;

int main(){

    int ar[]={10,20,30,40,50,70,80};
    int n;
    int pos=0;
    cin>>n;
    for(int i=0;i<7;i++){
        if(n==ar[i]){
            pos=i+1;
            cout<<pos;
            break;
        }        
    }
    if(pos==0){
            cout<<"not found";
        }
    return 0;
}