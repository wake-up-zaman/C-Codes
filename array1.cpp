#include<iostream>
#include<stdio.h>
#include<string>
#include<queue>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int ar[5]={4,1,3,2,0};
    sort(ar,ar+5);
    
    for(int i=0;i<5;i++)
    {
        cout<<ar[i]<<" ";
    }


}