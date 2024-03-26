#include<iostream>
using namespace std;
int main(){
    int *pt,n;
    cout<<"entrez un nombre: "<<endl;
    cin>>n;
    pt=&n;
    cout<<*pt<<endl;
    return 0;
}