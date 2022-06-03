#include<bits/stdc++.h>
using namespace std;

void print(vector<int>data)
{
    cout << "Total Element: "<<data.size() <<"\n";
    for(int datam:data)
        cout<<datam<<" ";
    cout<<"\n\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*
    vector<int>data(5);
    print(data);
    vector<int>data(5,2);
    print(data);
    vector<int>data({1,2,3,4,5});
    print(data);
    vector<int>data={1,2,3,4,5};
    print(data);
    vector<int>data={1,2,3,4};
    data.push_back(5);
    print(data);
    */
    vector<int>data={1,2,3};
    data.insert(data.begin(),0);
    print(data);
    /*
    data.insert(data.begin()+2,0);
    data.insert(data.end(),0);
    data.insert(data.end()-1,0);
  
    vector<int>data={1,2,3,4};
    cout<<data[2]<<"\n";
    cout<<data.front()<<"\n";
    cout<<data.back()<<"\n";
    vector <int>data={1,2,3,4,5};
    for(int d:data){
       cout<<d<<"\n";
    }
   vector<int>data={1,2,3,4,5};
   int ln=data.size();
   for(int i=0;i<ln;++i){
        cout<<data[i]<<" ";
   }
   
   vector<int>data={1,2,3,4,5};
   data[2]=7;
   print(data);
  
   vector<int>data1={1,2,3,4,5};
   vector<int>data2={6,7,8,9};
   cout<<"Before Swap:"<<endl;
   print(data1);
   print(data2);
   data1.swap(data2);
   cout<<"After Swap:"<<endl;
   print(data1);
   print(data2);
  
    vector<int>data1={1,2,3,4,5};
    cout<<"Before Delete:"<<endl;
    print(data1);
    cout<<"After Delete:"<<endl;
    data1.pop_back();
    print(data1);
    cout<<"After clear:"<<endl;
    data1.clear();
    print(data1);
    
    vector<int>data1={1,2,3,4,5};
    data1.erase(data1.begin()+2,data1.begin()+4);
    vector<int>data2={1,2,3,4,5,6,7,8};
    data2.erase(data2.begin()+3,data2.end()-2);
    print(data2);
    */
    return 0;
}