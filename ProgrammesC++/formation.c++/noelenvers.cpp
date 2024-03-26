#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"entrer la hauteur du triangle h"<<endl;
    cin>>n;
    for(i=n;i>0;i--){
        for(j=(n-i);j>0;j--){
        cout<<" ";}
        for(j=(2*(i-1)+1);j>0;j--){
        cout<<"*";}
        cout<<endl;
    }
        return 0;
    }