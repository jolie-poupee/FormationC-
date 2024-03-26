#include<iostream>
#include<fstream>
using namespace std;
struct etudiant{
    string nom;
    string prenom;
    int age;
    string matricule;
    string filiere;
    string niveau;
};
int main(){
     ofstream f("mon.txt");
    int age,i,n;
    cout<<"entrez le nombre d'etudiants :"<<endl;
    cin>>n;
    etudiant t[n];
    for(i=0;i<n;i++){
        cout<<"entrez le nom de l'etudiant: ";
        cin>>t[i].nom;
        cout<<"entrez le prenom de l'etudiant: ";
        cin>>t[i].prenom;
        cout<<"entrez l'age de l'etudiant: ";
        cin>>t[i].age;
        cout<<"entrez le matricule de l'etudiant: ";
        cin>>t[i].matricule;
        cout<<"entrez la filiere de l'etudiant: ";
        cin>>t[i].filiere;
        cout<<"entrez le niveau de l'etudiant: ";
        cin>>t[i].niveau;
    }
    for(i=0;i<n;i++){
        f<<"l'etudiant "<<i<<" . s'appelle "<<t[i].nom<<"  "<<t[i].prenom<<" il est age de "<<t[i].age<<" ans. "<<" son matricule est "<<t[i].matricule<<" et il est au "<<t[i].niveau<<" de la filiere "<<t[i].filiere<<endl;
        
    }cout<<endl;
    return 0;

}