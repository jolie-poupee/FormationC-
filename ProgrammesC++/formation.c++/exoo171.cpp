#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    int m[10][10];
    cout<<"entrez un nombre :"<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        m[i][i]=1;
        m[i][0]=1;
    for(j=1;j<i;j++){
        m[i][j]=m[i-1][j-1]+m[i-1][j];
    }
    }
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            cout<<m[i][j];
        }
        cout<<endl;
    }
    return 0;
}