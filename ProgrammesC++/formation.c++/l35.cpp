#include<iostream>
using namespace std;
int main(){
    int *pt=new int,n,b;
    *pt=20;
     cout<<*pt<<endl;
    delete pt;
     cout<<*pt<<endl;
    return 0;
}