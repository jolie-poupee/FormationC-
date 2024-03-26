#include<iostream>
using namespace std;
int premier(int n){
       int i,k=0;
        for(i=1;i<(n^(1/2));i++){
            if(n%i == 0){
                k=k+1;
            }
        }
        if(k==1){
        return 1;
        }else{
            return 0;
        }
}
int main(){
    int n,i,resultat,s=0;
    cout<<"entrez un nombre: "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        resultat = premier(i);
        if(resultat == 1){
            cout<<i<<" est premier "<<endl;
            s=s+1;
        }else{
            cout<<i<<" n'est pas premier"<<endl;
        }
    }
    cout<<"le nombre de nombre premier est : "<<s<<endl;
    return 0;

}