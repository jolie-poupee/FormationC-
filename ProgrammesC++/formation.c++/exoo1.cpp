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
    for(i=(n+1);i<(n+3);i++){
    for(j=(n+1);j<(n+5);j++){
        cout<<" ";
    }
    for(k=(n+1);k<(n+3);k++){
        cout<<"|";
    }
    cout<<endl;
    }
    
    
        return 0;
    }