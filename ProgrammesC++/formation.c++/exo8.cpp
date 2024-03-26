#include<iostream>
using namespace std;
int main(){
    float c,f;
    cout<<"entrez une temperature en degres celsuis : "<<endl;
    cin>>c;
    f=(c*9/5)+32;
    cout<<"la temperature "<<c<<" en degres Fahrenheit est : "<<f<<endl;
    return 0;
}