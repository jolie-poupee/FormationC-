#include<iostream>
using namespace std;
int main(){
    string m;
    int t=0,i=0,k=0;
    cout<<"entrez votre mot "<<endl;
    cin>>m;
    while(m[i] != '\0'){
        t=t+1;
        i=i+1;
    }
    for(i=0;i<t;i++){
        if(m[i]=='a'||m[i]=='e'||m[i]=='i'||m[i]=='o'||m[i]=='u'||m[i]=='y'){
        k=k+1;
        }
    }
    cout<<endl;
    cout<<"le mot "<<m<<" a "<<k<<" voyelles"<<endl;
    return 0;
}