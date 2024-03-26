#include<iostream>
using namespace std;

     struct etud{
        string nom;
        string pack;
        int age;
    };

int main(){
    string nom,pack;
    int age,i;
    etud tab[2];
    for(i=0;i<2;i++){
    cout<<"entrez votre nom: "<<endl;
    cin>>tab[i].nom;
     cout<<"entrez votre pack: "<<endl;
     cin>>tab[i].pack;
     cout<<"entrez votre age: "<<endl;
     cin>>tab[i].age;
    }
    for(i=0;i<2;i++){
        cout<<tab[i].nom;
        cout<<" votre pack est: "<<tab[i].pack;
        cout<<" et vous avez "<<tab[i].age<<" ans";
        cout<<endl;
    }
    cout<<endl;
     return 0;

}