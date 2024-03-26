#include<iostream>
using namespace std;
int main(){
    int t[5],i;
    float m,s=0;
    cout<<"entrez 10 nombre "<<endl;
    for(i=0;i<10;i++){
    cin>>t[i];
    }
    for(i=0;i<10;i++){
        s=s+t[i];
    }
    m=s/10;
    cout<<endl;
    cout<<"la moyenne du tableau est "<<m<<endl;
    return 0;
}