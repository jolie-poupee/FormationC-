#include<iostream>
using namespace std;
int main(){
    float n;
    cout<<"entrez une note sur 20 : "<<endl;
    cin>>n;
    if(n>0){
    if(n<10){
        cout<<"ECHEC!"<<endl;
    }else{
    cout<<"REUSSIS!"<<endl;}
} else if(n<0){
        cout<<"entrez une note valide"<<endl;}
    return 0;
}