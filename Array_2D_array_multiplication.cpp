#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"Enter the number of row and column of M Matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the number of row and column of M Matrix: ";
    cin>>r2>>c2;
    int M[r1][c1];
    int N[r2][c2];
    while(c1!=r2){
        cout<<"Error:The column of first matrix has to equal to the row of second matrix "<<endl;
        cout<<"Enter the number of row and column of M Matrix: ";
        cin>>r1>>c1;
        cout<<"Enter the number of row and column of M Matrix: ";
        cin>>r2>>c2;
    }  
    cout<<"Enter the value of M Matrix"<<endl;
    for(int i=0;i<r1;i++){
        if(i==0){
            cout<<"Enter the "<<i+1<<"st row: ";
        }
        else if(i==1){
            cout<<"Enter the "<<i+1<<"nd row: ";
        }
        else if(i==2){
            cout<<"Enter the "<<i+1<<"rd row: ";
        }
        else{
            cout<<"Enter the "<<i+1<<"th row: ";
        }
        for(int j=0;j<c1;j++){
            cin>>M[i][j];
        }
    }
    cout<<"Enter the value of N Matrix"<<endl;
    for(int i=0;i<r2;i++){
        if(i==0){
            cout<<"Enter the "<<i+1<<"st row: ";
        }
        else if(i==1){
            cout<<"Enter the "<<i+1<<"nd row: ";
        }
        else if(i==2){
            cout<<"Enter the "<<i+1<<"rd row: ";
        }
        else{
            cout<<"Enter the "<<i+1<<"th row: ";
        }
        for(int j=0;j<c2;j++){
            cin>>N[i][j];
        }
    }
    cout<<"M Matrix be like: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<M[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"N Matrix be like: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<N[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
    
