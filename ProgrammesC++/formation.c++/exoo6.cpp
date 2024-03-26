#include <iostream>

using namespace std;

int main(){

    int n,t=0,i,k=0,j;
    cout<<"entrez un nombre: "<<endl;
    cin>>n;
    for(j=0;j<=n;j++)
    {
        for(i=1;i<(j^(1/2));i++){
            if(j%i == 0){

                k+=1;
            }
        }
        if(k==1){
            cout<<"le nombre "<<j<<" est premier "<<endl;
            t=t+1;
        }
        else{
            cout<<"le nombre "<<j<<" n'est pas premier "<<endl;
        }
       k=0;
   }
    cout<<"le nombre de nombre premier est : "<<t<<endl;
    return 0;
}