#include<iostream>
using namespace std;
int main(){
int n;
cout<<"entrer un nombre"<<endl;
cin>>n;
switch(n){
    case 1: 
        cout<<"lundi"<<endl;
    break;
    case 2: 
        cout<<"mardi"<<endl;
    break;
    case 3:
    cout<<"mercredi"<<endl;
    break;
    case 4:
    cout<<"jeudi"<<endl;
    break;
    case 5:
    cout<<"vendredi"<<endl;
    break;
    case 6:
    cout<<"samedi"<<endl;
    break;
    case 7: 
    cout<<"dimanche"<<endl;
    break;
    default: 
        cout<<"mauvais";
    break;
}
return 0;
}