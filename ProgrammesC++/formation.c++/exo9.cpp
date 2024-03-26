#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"entrez la taille de votre mot"<<endl;
    cin>>n;
    char t[n];
    cout<<"entrer votre mot"<<endl;
    cin>>t;
    for(i=n; i>= 0 ;i--){
        cout<< t[i];
    }
    cout<<endl;
    return 0;
}