#include<bits/stdc++.h>
using namespace std;

vector<int>input()
{
    vector<int>data;
    int n;
    cin >> n;
    while(n--)
    {
        int d;
        cin >> d;
        data.push_back(d);

    }
    return data;


}
vector<int>reverse(vector<int>data){
    /*int ln=data.size();
    vector<int>rData;
    for(int i=ln-1;i>=0;i--){
        rData.push_back(data[i]);
    */
   vector<int>rData;
   while(!data.empty()){
       int le=data.back();
       rData.push_back(le);
       data.pop_back();
   }

      return rData;
    }

 

void output(vector<int>rData){
    for(int d:rData){
        cout<<d<<"  ";
    }
    cout<<"\n";

}
int main()
{
    vector<int>data;
    data=input();
    /*cout<<"Before reverse:"<<endl;
    for(int d:data)
    {
    cout<<d<<"";
    }
    */
    data=reverse(data);
    output(data);
    return 0;

}