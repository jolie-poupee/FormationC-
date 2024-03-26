#include<iostream>
using namespace std;
int main(){
    int i,j,n,k=0,t[10];
    cout<<"entrez 10 entiers"<<endl;
    for(i=0;i<10;i++){
        cin>>t[i];
    }
    for(i=0;i<10;i++){
        for(j=0;j<i;j++){
        if(t[i]==t[j]){
            k=k+1;
            t[i]=0;
        }
        }
    }
    cout<<endl;
    cout<<"le nombre de doublon est de: "<<k<<endl;
    for(i=0;i<10;i++){
        cout<<t[i]<<endl;
    }
    return 0;
}