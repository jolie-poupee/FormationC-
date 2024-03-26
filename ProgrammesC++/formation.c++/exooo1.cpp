#include<iostream>
using namespace std;
struct membre{
    string nom;
    string prenom;
    int age;
    int ID;
    string adresse;
    int cotisation;
};
void saisir(int n){
    int i,j;
    membre t[n];
    for(i=0;i<n;i++){
        cout<<"entrez le nom du membre: ";
        cin>>t[i].nom;
        cout<<"entrez le prenom du membre: ";
        cin>>t[i].prenom;
        cout<<"entrez l'age du membre: ";
        cin>>t[i].age;
        cout<<"entrez l'ID du membre: ";
        cin>>t[i].ID;
        cout<<"entrez l'adresse du membre: ";
        cin>>t[i].adresse;
        for(j=0;j<5;j++){
        cout<<"entrez les cotisations du membre: ";
        cin>>t[j].cotisation;
    }
       }
}
void ajouter(string nom){
    int n,i;
    n=n+1;
    membre t[n+1];
     for(i=0;i<(n+1);i++){
        cout<<"entrez le nom du membre: ";
        cin>>t[i].nom;
        cout<<"entrez le prenom du membre: ";
        cin>>t[i].prenom;
        cout<<"entrez l'age du membre: ";
        cin>>t[i].age;
        cout<<"entrez l'ID du membre: ";
        cin>>t[i].ID;
        cout<<"entrez l'adresse du membre: ";
        cin>>t[i].adresse;
       for(i=0;i<5;i++){
        cout<<"entrez les cotisations du membre: ";
        cin>>t[i].cotisation;
        }
    }

}
void modifier(int ID){
    int i,n,option;
    membre t[n];
    for(i=0;i<n;i++){
        if(ID==t[i].ID){
            cout<<"choisir une option: ";
            cout<<"\t 1.modifier le nom. ";
        
            cout<<"\t 2.modifier le prenom. ";
            cout<<"\t 3.modifier l'age. ";
            cout<<"\t 4.modifier l'ID. ";
            cout<<"\t 5.modifier l'adresse. ";
            cout<<"\t 6.modifier les cotisations. ";
            switch(option){
                case 1:
                cout<<"entrez le nouveau nom du membre: ";
        cin>>t[i].nom;
        break;
        case 2:
        cout<<"entrez le prenom du membre: ";
        cin>>t[i].prenom;
        break;
        case 3:
        cout<<"entrez l'age du membre: ";
        cin>>t[i].age;
        break;
        case 4:
        cout<<"entrez l'ID du membre: ";
        cin>>t[i].ID;
        break;
        case 5:
        cout<<"entrez l'adresse du membre: ";
        cin>>t[i].adresse;
        break;
        case 6:
        for(i=0;i<5;i++){
        cout<<"entrez les cotisations du membre: ";
        cin>>t[i].cotisation;
        }
        break;
        default : cout<<"mauvais "<<endl;
        break;
    }

            }

        }

}
    
    void supprimer(int ID){
        int n,i,j;
        membre t[n];
        cout<<"entrez l;identifiant du membre que vous voulez suprimer: ";
        cin>>ID;
        for(i=0;i<n;i++){
            if(ID==t[i].ID){
                for(j=i;j<n-1;j++){
                    t[j]=t[j+1];
                }
                n=n-1;
                cout<<"membre supprime avec succes "<<endl;
            }

        }

    }
    int afficher(int n){
        int i,s=0,j,st=0;
        membre t[n];
        for(i=0;i<n;i++){
            cout<<" "<<t[i].nom<<endl;
             cout<<" "<<t[i].prenom<<endl;
              cout<<" "<<t[i].age<<endl;
               cout<<" "<<t[i].ID<<endl;
                cout<<" "<<t[i].adresse<<endl;
                 for(i=0;i<5;i++){
        cout<<" "<<t[i].cotisation<<endl;
        }
        }
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
            s=s+t[j].cotisation;
        }
        st=st+s;
        }
        return s;
    
    }
    void solvable(string nom){
        int i,n,m=0;
        membre t[n];
        cout<<"entrez le nom du membre: ";
        cin>>nom;
        for(i=0;i<n;i++){
            if(nom==t[i].nom){
                for(i=0;i<5;i++){
                    m=m+t[i].cotisation;
                }
            }
        }
    }
    void insolvable(string nom){
        int n,i;
        membre t[n];
        for(i=0;i<n;i++){
            if(t[i].cotisation==0){
                cout<<" "<<t[i].nom<<endl;
            }
        }
    }
    void statistique(int nbre){
        int s=0,i,p=0;
        for(i=0;i<nbre;i++){
                s=s+1;
    }
         p=(s/nbre)*100;
         cout<<"le pourcentage des mebres n'ayant pas effectue toutes leurs cotisations est de: "<<p<<endl;
    }
    int main(){
        int n,i,ID,choix,nbre=0;
         string nm,nmt,nm2;
         membre t[n];
        for(i=0;i<1;i++){
            cout<<endl<<"\n--------------MENU--------------"<<endl;
            cout<<"\t|1:enregistrer les membres. "<<endl;
            cout<<"\t|2:ajouter un membre. "<<endl;
            cout<<"\t|3:modifier un membre. "<<endl;
            cout<<"\t|4:supprimer un membre. "<<endl;
            cout<<"\t|5:afficher la liste des members ainsi que le montant total de leurs cotisations:"<<endl;
            cout<<"\t|6:afficher le montant total des cotisations d'un membre "<<endl;
            cout<<"\t|7:afficher la liste des membres qui n'ont pas cotise "<<endl;
            cout<<"\t|8:statistique "<<endl;
        }
        cout<<"entrez votre choix: ";
        cin>>choix;
        switch(choix){
            case 1:
            int n1;
            cout<<"entrez le nombre de membres :"<<endl;
            cin>>n1;
            saisir(n1);
            break;
            case 2:
            cout<<"entrez le nom de la personne: ";
            cin>>nm;
            ajouter(nm);
            case 3:
            cout<<"entrez l'ID du membre: ";
            cin>>ID;
            modifier(ID);
            break;
            case 4:
            cout<<"entrez l'ID du membre: ";
            cin>>ID;
            modifier(ID);
            break;
            case 5:
            afficher(n);
            break;
            case 6:
            cout<<"entrez le nom du membre: ";
            cin>>nmt;
            solvable(nmt);
            break;
            case 7:
            cout<<"entrez le nom du membre: ";
            cin>>nm2;
            solvable(nm2);
            break;
            case 8:
         for(i=0;i<n;i++){
            if(t[i].cotisation==0){
                nbre=nbre+1;
        }
    }
        }
        return 0;
    }

