#include<iostream>
#include"membre.h"
using namespace std;
    int main(){
        int ID,choix,t=0;
        membre m1[100];
        do{
            cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°Menu°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
            cout<<"|1:ajouter un membre.                                                                         |"<<endl;                                                     
            cout<<"|2:modifier un membre.                                                                        |"<<endl;
            cout<<"|3:supprimer un membre.                                                                       |"<<endl;
            cout<<"|4:afficher la liste des members ainsi que le montant total de leurs cotisations:             |"<<endl;
            cout<<"|5:sovalble(afficher le montant total des cotisations d'un membre)                            |"<<endl;
            cout<<"|6:insolvable(afficher la liste des membres qui n'ont pas cotise)                             |"<<endl;
            cout<<"|7:statistique                                                                                |"<<endl;
            cout<<"|8:recherche                                                                                  |"<<endl;
            cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
        cout<<"faites votre choix: ";
        cin>>choix;
         switch(choix){
            case 1:
            ajouter(m1,t);
            break;
            case 2:
            cout<<"entrez l'ID du membre: ";
            cin>>ID;
            modifier(m1,ID,t);
            break;
            case 3:
            cout<<"entrez l'ID du membre: ";
            cin>>ID;
            supprimer(m1,ID,t);
            break;
           case 4:
           afficher(m1,t);
           break;
           case 5:
            solvable(m1,t);
            break;
            case 6:
            insolvable(m1,t);
            break;
             case 7:
             statistique(m1,t);
             break;
             case 8:
             cout<<"entrez l'ID du membre: ";
            cin>>ID;
             recherche(m1,t,ID);
             break;
             default :
             cout<<"MAUVAIS, ENTREZ UNE BONNE VALEUR: ";
             break;
        
         }
       }
            while(1);
        return 0;
    }


    