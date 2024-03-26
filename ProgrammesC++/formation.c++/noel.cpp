#include<iostream>
using namespace std;
int main(){
    int n,i,k,j;
    cout<<"entrer la hauteur du triangle h"<<endl;
    cin>>n;
    for(i=0;i<(n);i++){
        for(j=0;j<(n-i);j++){
        cout<<" ";}
        for(j=0;j<(2*i+1);j++){
        cout<<"*";}
        cout<<endl;
    }
    
    for(j=(n+1);j<(n+6);j++){
        cout<<" ";
    }
    for(k=(n+1);k<(n+2);k++){
        cout<<"|";
    }
    cout<<endl;
    
        return 0;
    }