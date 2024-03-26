#include<iostream>
using namespace std;
void bonjour(string nom){
    cout<<"bonjour "<<nom<<endl;
    return;
}
int main(){
    string n;
    cout<<"entrez votre nom "<<endl;
    cin>>n;
    bonjour(n);
}