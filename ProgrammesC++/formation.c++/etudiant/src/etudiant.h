#ifndef ETUDIANT_H
#define ETUDIANT_H


#include<string>
using namespace std;

struct etudiant{
    int NCIN;
    string NOM;
    string PRENOM;
    int AGE;
    string FILIERE;
    int NIVEAU;
    int COTISASTION[5];
};
void saisir(etudiant &m);
void ajouter(etudiant m[],int &t);
void modifier(etudiant m[],int ID,int &t);
void supprimer(etudiant m[],int ID,int &t);
void afficher(etudiant m[],int &t);
int solvable(etudiant m[],int &t);
void insolvable(etudiant m[],int &t);
float statistique(etudiant m[],int &t);
 void recherche(etudiant m[],int &t,int ID);

#endif