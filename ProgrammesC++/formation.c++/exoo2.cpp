#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"entrer la hauteur impair du triangle n"<<endl;
    cin>>n;
    for(i=0;i<(n/2);i++){
        for(j=0;j<(n-i);j++){
        cout<<" ";}
        for(j=0;j<(2*i+1);j++){
        cout<<"*";}
        cout<<endl;
    }
    for(i=(n-((n/2)));i>0;i--){
        for(j=(n-i+1);j>0;j--){
        cout<<" ";}
        for(j=(2*(i-1)+1);j>0;j--){
        cout<<"*";}
        cout<<endl;
    }
        return 0;
    }