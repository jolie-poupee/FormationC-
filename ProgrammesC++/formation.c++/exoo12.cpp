#include<iostream>
using namespace std;
int main(){
    int t[5],i;
     cout<<"entrez cinq nombres: "<<endl;
    for(i=0;i<5;i++){
    cin>>t[i];
}
for(i=0;i<5;i++){
    if(t[i]>t[i+1]){
        t[i]=t[i+1];
    }
}
for(i=0;i<5;i++){
    cout<<" "<<t[i]<<endl;
    
}
return 0;
}