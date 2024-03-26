#include<iostream>
using namespace std;
int main(){
    string m;
    int t=0,i=0,j,k=0;
    cout<<"entrez votre mot m"<<endl;
    cin>>m;
    while(m[i]!='\0'){
        t=t+1;
        i=i+1;
    }
    j=t-1;
    for(i=0;i<t;i++){
            if(m[i]==m[j--]){
                k=k+1;
            }
    }
    if(k==t){
        cout<<"le mot "<<m<<" est un palindrome"<<endl;
    }else{
        cout<<"le mot "<<m<<" n'est pas un palindrome"<<endl;
    }
    cout<<endl;
    return 0;
}