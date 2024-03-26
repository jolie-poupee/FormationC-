#include<iostream>
#include"factoriel.h"
using namespace std;
int main(){
    int n;
    cout<<"entrez un nombre: "<<endl;
    cin>>n;
    int f=factorielle(n);
    cout<<"le factorielle de "<<n<<" est "<<f<<endl;
    return 0;
}