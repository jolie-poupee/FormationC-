#include"membre.h"
#include<iostream>
#include<string>
using namespace std;

void saisir(membre &m){
    int j;
        cout<<"entrez le nom du membre: ";
        cin>>m.nom;
        cout<<"entrez le prenom du membre: ";
        cin>>m.prenom;
        cout<<"entrez l'age du membre: ";
        cin>>m.age;
        cout<<"entrez l'Identifiant(ID est un entier a 4 chiffres) du membre: ";
        cin>>m.ID;
        cout<<"entrez l'adresse du membre(exemple:fortune@gmail.com): ";
        cin>>m.adresse;
        cout<<"entrez les cotisations numero du membre: ";
        for(j=0;j<5;j++){
            cout<<"entrez la cotisation numero "<<j<<" du membre: ";
        cin>>m.cotisation[j];
}
}
void ajouter(membre m[],int &t){
        saisir(m[t]);
        t=t+1;
}

void modifier(membre m[],int ID,int &t){
    int i,j,option;
    for(i=0;i<t;i++){
        if(ID==m[i].ID){
            saisir(m[t]);

        }
    }
    cout<<" "<<m[i].nom<<endl;
            cout<<" "<<m[i].prenom<<endl;
            cout<<" "<<m[i].age<<endl;
            cout<<" "<<m[i].ID<<endl;
            cout<<" "<<m[i].adresse<<endl;
            for(j=0;j<5;j++){
        cout<<" "<<m[i].cotisation[j]<<endl;
                 }
}
void supprimer(membre m[],int ID,int &t){
        int i,j;
        for(i=0;i<t;i++){
            if(ID==m[i].ID){
                for(j=i;j<(t-1);j++){
                    m[j]=m[j+1];
                }
                t=t-1;
                cout<<"membre supprime avec succes "<<endl;
            }

        }

    }
     void afficher(membre m[],int &t){
        int i,s=0,j,a,st=0;
        cout<<"la liste des membres est la suivante: "<<endl;
        for(i=0;i<t;i++){
            cout<<" "<<m[i].nom<<endl;
            cout<<" "<<m[i].prenom<<endl;
            cout<<" "<<m[i].age<<endl;
            cout<<" "<<m[i].ID<<endl;
            cout<<" "<<m[i].adresse<<endl;
                 for(a=0;a<5;a++){
        cout<<"sa cotisation numero "<<a<<" est de "<<m[i].cotisation[a]<<" francs"<<endl;
                 }
                 cout<<"le membre suivant est: "<<endl;
        }
       for(i=0;i<t;i++){
            for(j=0;j<5;j++){
            s=s+m[i].cotisation[j];
           }
           st=st+s;
        }
        cout<<"la somme des cotisations des membres est de: "<<st<<endl;
    
    }
    int solvable(membre m[],int &t){
        int i,s1=0,j,y=0,k=0;
        membre v[100];
        
        for(i=0;i<t;i++){
                for(j=0;j<5;j++){
                    s1=s1+m[i].cotisation[j];
                    
                }
                 v[y]=m[i];
                 y=y+1;
                 k=k+1;
                cout<<"le montant total des cotisations du membre "<<" numero "<<i<<" est de : "<<s1<<" francs "<<endl;
                s1=0;
            }
            cout<<"la liste de ces membres est: "<<endl;
            for(i=0;i<k;i++){
                cout<<" "<<v[i].nom<<endl;
            }
        return 0;
        }
    void insolvable(membre m[],int &t){
        int i,j,y=0;
        membre v[100];
        float k=0;
        for(i=0;i<t;i++){
            for(j=0;j<5;j++){
              if(m[i].cotisation[j]==0 ){
                k=k+1;
                 v[y]=m[i];
                 y=y+1;
                 break;
              }
            }

        }
        cout<<"le nombre de membres insolvable est de : "<<k<<endl;
         cout<<"la liste des membres insolvables est : "<<endl;
        for(i=0;i<k;i++){
            cout<<" "<<v[i].nom<<endl;

        }

    }
    float statistique(membre m[],int &t){
        float p,k=0;
        int i,j;
        for(i=0;i<t;i++){
            for(j=0;j<5;j++){
              if(m[i].cotisation[j]==0){
                k=k+1;
                break;
              }
            }

        }
        cout<<" "<<k<<endl;
        cout<<" "<<t<<endl;
         p=(k/t)*100;
         cout<<"les statistiques des membres n'ayant pas effectués toutes leurs cotisqtions sont de : "<<p<<"%"<<endl;
        return p;
    }
    void recherche(membre m[],int &t,int ID){
        int i,j;
        for(i=0;i<t;i++){
            if(ID==m[i].ID){
            cout<<"les donnés du membres recherché sont: "<<endl;    
            cout<<"son nom: "<<m[i].nom<<endl;
            cout<<"son prenom: "<<m[i].prenom<<endl;
            cout<<"son age: "<<m[i].age<<endl;
            cout<<"son identifiant: "<<m[i].ID<<endl;
            cout<<"son adresse: "<<m[i].adresse<<endl;
                 for(j=0;j<5;j++){
        cout<<"sa cotisation numero "<<j<<" est de: "<<m[i].cotisation[j]<<" francs"<<endl;
                 }
                }
    }
    }

