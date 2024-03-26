#include<iostream>
using namespace std;
int main(){
    int i,j,c,n;
    cout<<"entrez un nombre "<<endl;
    cin>>n;
    for(i=0;i<n;i++){
        c=1;
        for(j=0;j<=i;j++){
            cout<<c;
            c=c*(i-j)/(j+1);
        }
        cout<<endl;
    }
    return 0;
}