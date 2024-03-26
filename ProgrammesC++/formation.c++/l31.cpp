#include<iostream>
using namespace std;
int somme(int tab[],int n){
    int sum=0,i=0;
    while(i<n){
        sum=sum+tab[i];
        i++;
    }
    return sum;
}
float moyenne(int n,float s){
    float moy;
    moy=s/n;
    return moy;
}
int main(){
    //int tab[5],i,n=5,s;
    int i,n;
    float m,s;
    //float m;
    cout<<"entrez le nombre d'element de votre tableau : "<<endl;
    cin>>n;
    int tab[n];
    cout<<"entrez les elements du tableaux "<<endl;
    for(i=0;i<n;i++){
        cin>>tab[i];
    }
    s=somme(tab,n);
    cout<<"la somme est "<<s;
    m=moyenne(n,s);
    cout<<" et la moyenne est "<<m<<endl;
    return 0;
}