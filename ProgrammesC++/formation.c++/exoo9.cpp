#include<iostream>
using namespace std;
int main(){
    int i,t1[5],t2[5],t[10];
    cout<<"entrez 5 entiers pour chaque tableau "<<endl;
    for(i=0;i<5;i++){
        cin>>t1[i];
    }
    cout<<endl;
    for(i=0;i<5;i++){
        cin>>t2[i];
    }
    cout<<endl;
    for(i=0;i<5;i++){
        t[i]=t1[i];
    }
     int j=0;
    if(j<5){
        for(i=5;i<10;i++){
            t[i]=t2[j++];
        }
    }
        
    cout<<endl;
    for(i=0;i<10;i++){
    cout<<t[i]<<endl;
    }
    return 0;
}
