#include<iostream>
using namespace std;
void ad(int x){//passage par valeur
    x++;
    cout<<"la valeur de x: "<<x<<endl;;
}void ad1(int &x){//passage par reference
    x++;
    cout<<"la valeur de x : "<<x<<endl;
    
}
int main(){
    int x=10;
    ad(x);
    cout<<x<<endl;
    ad1(x);
    cout<<x<<endl;
    return 0;
}