#include<iostream>
using namespace std;
int main(){
    int i,k=0;
    string n,t[5];
    cout<<"entrez cinq noms : "<<endl;
    for(i=0;i<5;i++){
        cin>>t[i];
    }
    cout<<"entrez le nom que vous cherchez :"<<endl;
    cin>>n;
    for(i=0;i<5;i++){
        if(t[i]==n){
            k=k+1;
        }
    }
    cout<<"le nombre k est "<<k<<endl;
    if(k==1){
        cout<<"nom trouvee"<<endl;
    }else{
        cout<<"pas trouve"<<endl;
    }
} 