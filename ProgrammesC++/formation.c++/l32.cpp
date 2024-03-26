#include<iostream>
using namespace std;
void ad(int x){//passage par valeur
    x++;
    cout<<"la valeur de x: "<<x<<endl;;
}
int ad1(int &x){//passage par reference
    x++;
    cout<<"la valeur de x : "<<x<<endl;
    return x;
}
int main(){
    int x=10;
    ad(x);
    cout<<x<<endl;
    int y=ad1(x);
    cout<<y<<endl;
    return 0;
}