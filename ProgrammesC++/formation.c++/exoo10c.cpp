  #include<iostream>
using namespace std;
int main(){
    int i,j,n=10,k=0,t[10],l=0;
    cout<<"entrez 10 entiers"<<endl;
    for(i=0;i<n;i++){
        cin>>t[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
        if(t[i]==t[j]){
            k=k+1;
            t[i]=0;
        }
        }
    }
    cout<<"le nouveau est :"<<endl;
     for(i=0;i<(n-l);i++){
        cout<<t[i]<<endl;
    }
    cout<<endl;
    cout<<"le nombre de doublon est de: "<<k<<endl;
    for(i=0;i<n;i++){
            if(t[i]==0){
                 l=l+1;
                for(j=i;j<(n-1);j++){
                    t[j]=t[j+1];

                }
                n=n-1;
            }
    }
     cout<<"le n : "<<l<<endl;
    for(i=0;i<(n-l);i++){
        cout<<t[i]<<endl;
    }
    return 0;
}