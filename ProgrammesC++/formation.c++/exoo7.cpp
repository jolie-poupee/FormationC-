#include<iostream>
using namespace std;
int main(){
    int t[5],i,max=0;
    cout<<"entrez 5 nombre "<<endl;
    for(i=0;i<5;i++){
    cin>>t[i];
    }for(i=0;i<5;i++){
    if(t[i]>t[max]){
        max=i;
    }
    }
    cout<<"le nombre maximal de ce tableau est "<<t[max]<<endl;
    return 0;
}