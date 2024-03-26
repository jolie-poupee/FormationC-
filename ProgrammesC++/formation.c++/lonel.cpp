#include<iostream>
using namespace std ;
int main(){
    int i,j,k,h;
    cout<<"entrez une hauteur :"<<endl;
    cin>>h;
    for( i=0;i<h;i++){
        for(j=0;j<(h-i);j++){
            cout<<" ";
        }
        for(k=0;k<(2*i+1);k++){
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
}