#include<iostream>
using namespace std;
int main(){
    int a,b;
    char operation;
    cout<<"entrer deux nombres :"<<endl;
    cin>>a;
    cin>>b;
    cout<<"choisir une operation: +,-,*,/"<<endl;
    cin>>operation;
   switch(operation)
   {
    case '+': cout<<"la somme entre "<<a<<" et "<<b<<"est "<<a+b;
    break;
     case '-': cout<<"la difference entre "<<a<<" et "<<b<<"est "<<a-b;
    break;
     case '*': cout<<"le produit entre "<<a<<" et "<<b<<"est "<<a*b;
    break;
     case '/': if(a!= 0&& b!=0){
cout<<"la division entre "<<a<<" et "<<b<<"est "<<a/b;
    break;
    default : cout<<"mauvais"<<endl;
   }
   }
return 0;
    }