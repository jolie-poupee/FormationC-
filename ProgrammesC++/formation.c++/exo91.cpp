#include<iostream>
using namespace std;
int main(){
    string mot;
    int taille,i;
    cout<<"entrer le mot"<<endl;
    cin>>mot;
    taille=0;
    i=0;
    while(mot[i] != '\0'){
        taille = taille+1;
        i=i+1;
    }
    for(i=taille;i>=0;i--){
        cout<<mot[i];
    }
    cout<<endl;
    return 0;

}